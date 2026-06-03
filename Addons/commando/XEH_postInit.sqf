#include "script_component.hpp"

// CBA local events fired by the ACE action menu (see actions/shield.hpp)
[QGVAR(activateShield),   { (_this select 0) call FUNC(activateShield);   }] call CBA_fnc_addEventHandler;
[QGVAR(deactivateShield), { (_this select 0) call FUNC(deactivateShield); }] call CBA_fnc_addEventHandler;

// Invalidate hasKatarn cache when the player changes loadout
["loadout", {
    GVAR(hasKatarnCache) = nil;
    
    // Detect shield vest equip/unequip and init/cleanup the shield system
    private _hadShield = !(isNil QGVAR(lastHadShield)) && { GVAR(lastHadShield) };
    private _hasShield = [player] call FUNC(hasShield);
    
    // Equipped shield vest for the first time (or re-equipped after removal)
    if (!_hadShield && _hasShield) then {
        // Only init if not already running (avoid double-init)
        private _pfhID = player getVariable [QGVAR(shield_pfh), -1];
        if (_pfhID == -1) then {
            [player, false] call FUNC(initBattery);
        };
    };
    
    // Unequipped shield vest — cleanup is handled by shieldPFH's hasShield check,
    // but we force deactivation here for immediate feedback
    if (_hadShield && !_hasShield) then {
        // Clean up the shield PFH first
        private _pfhID = player getVariable [QGVAR(shield_pfh), -1];
        if (_pfhID != -1) then {
            [_pfhID] call CBA_fnc_removePerFrameHandler;
            player setVariable [QGVAR(shield_pfh), -1];
        };
        
        // Clean up the HUD PFH
        if !(isNil QGVAR(shieldHUD_id)) then {
            [GVAR(shieldHUD_id)] call CBA_fnc_removePerFrameHandler;
            GVAR(shieldHUD_id) = nil;
        };
        1 cutRsc ["RRI_CommandoShieldHUD", "PLAIN", 0, false];
        
        // Clean up pp effects
        if !(isNil QGVAR(ppShieldCA)) then {
            ppEffectDestroy GVAR(ppShieldCA);
            GVAR(ppShieldCA) = nil;
        };
        if !(isNil QGVAR(ppShieldVignette)) then {
            ppEffectDestroy GVAR(ppShieldVignette);
            GVAR(ppShieldVignette) = nil;
        };
        
        // Clear all shield state variables
        player setVariable [QGVAR(shieldEnergy), nil];
        player setVariable [QGVAR(shieldEnabled), nil];
        player setVariable [QGVAR(shieldBreached), nil];
        player setVariable [QGVAR(shieldRegenTimeout), nil];
        player setVariable [QGVAR(shieldEnergyPrev), nil];
        
        // Re-enable ACE damage
        player removeAllEventHandlers "HitPart";
        player allowDamage true;
    };
    
    GVAR(lastHadShield) = _hasShield;
}] call CBA_fnc_addPlayerEventHandler;

// Initialize shield state tracking for the player
if (hasInterface) then {
    [{!isNull player}, {
        GVAR(lastHadShield) = [player] call FUNC(hasShield);
    }] call CBA_fnc_waitUntilAndExecute;
};
