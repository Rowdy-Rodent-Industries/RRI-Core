#include "..\script_component.hpp"
/*
 * Plays screen-space hit feedback for the local player when their energy
 * shield absorbs a hit.  Uses a blue/cyan chromatic aberration flash
 * (distinct from the red CA used by the medical droid hit effect).
 *
 * Also manages:
 *   - Low-shield vignette (persistent below 30%)
 *   - Depletion flash (white → red on breach)
 *
 * Arguments:
 * 0: Damage absorbed this hit <NUMBER>
 *
 * Return Value:
 * None
 *
 * Author: Ramsey
 */

if (!hasInterface) exitWith {};

params ["_damage"];

private _maxEnergy = GET_NUMBER(configFile >> "CfgWeapons" >> (vest player) >> QGVAR(shieldMax), SHIELD_MAX_DEFAULT);
private _energy    = player getVariable [QGVAR(shieldEnergy), _maxEnergy];
private _pct       = (_energy / _maxEnergy) max 0;
private _breached  = _energy <= 0;

// --- Chromatic aberration flash (blue channel split) ---
// Pre-created once in fnc_initBattery and stored in GVAR(ppShieldCA).
private _hitStrength = (_damage / _maxEnergy) min 1;
private _intensity   = linearConversion [0, 1, ((_hitStrength * 0.7) + ((1 - _pct) * 0.3)) min 1, 0, 0.14, true];

if !(isNil QGVAR(ppShieldCA)) then {
    GVAR(ppShieldCA) ppEffectAdjust [_intensity, _intensity, true];
    GVAR(ppShieldCA) ppEffectCommit 0.12;
    [{
        if (isNil QGVAR(ppShieldCA)) exitWith {};
        GVAR(ppShieldCA) ppEffectAdjust [0, 0, true];
        GVAR(ppShieldCA) ppEffectCommit 0.5;
    }, [], 0.12] call CBA_fnc_waitAndExecute;
};

// --- Shield depletion flash: white → red ---
if (_breached) then {
    private _flash = ppEffectCreate ["colorCorrections", 1620];
    _flash ppEffectAdjust [1, 1, 0,
        [0.0, 0.0, 0.0, 0.0],
        [1.0, 1.0, 1.0, 0.6],   // bright white flare
        [0.299, 0.587, 0.114, 0],
        [-1, -1, 0, 0, 0, 0, 0]
    ];
    _flash ppEffectEnable true;
    _flash ppEffectCommit 0;
    [{
        params ["_flash"];
        _flash ppEffectAdjust [1, 1, 0,
            [0.0, 0.0, 0.0, 0.0],
            [0.4, 0.0, 0.0, 0.25],  // fade to red tint
            [0.299, 0.587, 0.114, 0],
            [-1, -1, 0, 0, 0, 0, 0]
        ];
        _flash ppEffectCommit 0.8;
        [{ppEffectDestroy (_this select 0)}, [_flash], 0.9] call CBA_fnc_waitAndExecute;
    }, [_flash], 0.05] call CBA_fnc_waitAndExecute;

    // Destroy low-shield vignette if it's still up
    if !(isNil QGVAR(ppShieldVignette)) then {
        GVAR(ppShieldVignette) ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,0], [0.299,0.587,0.114,0], [-1,-1,0,0,0,0,0]];
        GVAR(ppShieldVignette) ppEffectCommit 1;
        [{ppEffectDestroy (_this select 0); GVAR(ppShieldVignette) = nil}, [GVAR(ppShieldVignette)], 1.1] call CBA_fnc_waitAndExecute;
    };
} else {
    // --- Low-shield vignette: blue edge glow below 30% ---
if (_pct <= 0.30 && isNil QGVAR(ppShieldVignette)) then {
    private _vig = ppEffectCreate ["colorCorrections", 1618];
    _vig ppEffectAdjust [
        0.9, 1.05, 0,
        [0.0, 0.0, 0.0, 0.0],
        [0.0, 0.05, 0.20, 0.28],  // deep blue edge
        [0.299, 0.587, 0.114, 0],
        [-1, -1, 0, 0, 0, 0, 0]
    ];
    _vig ppEffectEnable true;
    _vig ppEffectCommit 1.0;
    GVAR(ppShieldVignette) = _vig;
    };

    // Remove vignette if shield recovered above 30%
    if (_pct > 0.30 && !(isNil QGVAR(ppShieldVignette))) then {
        GVAR(ppShieldVignette) ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,0], [0.299,0.587,0.114,0], [-1,-1,0,0,0,0,0]];
        GVAR(ppShieldVignette) ppEffectCommit 1.5;
        [{ppEffectDestroy (_this select 0); GVAR(ppShieldVignette) = nil}, [GVAR(ppShieldVignette)], 1.6] call CBA_fnc_waitAndExecute;
    };
};
