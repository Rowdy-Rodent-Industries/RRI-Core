#include "..\script_component.hpp"
/*
 * Initialises the commando droid's shield system.
 * Called from fnc_initUnit on spawn/respawn.
 *
 * Arguments:
 * 0: Unit   <OBJECT>
 * 1: Is respawn <BOOL> (default: false)
 *
 * Return Value:
 * None
 */

params ["_unit", ["_isRespawn", false]];

// Register respawn EH once — re-runs this function on respawn
if (!_isRespawn) then {
    private _existingEH = _unit getVariable [QGVAR(respawn_eh), -1];
    if (_existingEH != -1) then {
        _unit removeEventHandler ["Respawn", _existingEH];
    };
    private _newEH = _unit addEventHandler ["Respawn", {
        [_this select 0, true] call FUNC(initBattery);
    }];
    _unit setVariable [QGVAR(respawn_eh), _newEH];
};

if !(local _unit) exitWith {};

_unit allowDamage false;
_unit call FUNC(loadHitHandlers);
_unit call FUNC(initShield);

// HUD + screen effects — local player only
if (!hasInterface || _unit != player) exitWith {};

waitUntil { !isNull findDisplay 46 };

// Clean up any previous pp effects from a prior life
if !(isNil QGVAR(ppShieldCA)) then {
    ppEffectDestroy GVAR(ppShieldCA);
    GVAR(ppShieldCA) = nil;
};
if !(isNil QGVAR(ppShieldVignette)) then {
    ppEffectDestroy GVAR(ppShieldVignette);
    GVAR(ppShieldVignette) = nil;
};

// Pre-create the blue CA effect (same ACE pattern — never create/destroy per hit)
GVAR(ppShieldCA) = ppEffectCreate ["ChromAberration", 1610];
GVAR(ppShieldCA) ppEffectAdjust [0, 0, false];
GVAR(ppShieldCA) ppEffectEnable true;
GVAR(ppShieldCA) ppEffectCommit 0;

[] call FUNC(shieldHUD);
