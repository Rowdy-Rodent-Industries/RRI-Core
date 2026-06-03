#include "..\script_component.hpp"
/*
 * Per-frame handler that manages shield energy regeneration for commando droids.
 * Runs every SHIELD_PFH_INTERVAL seconds on the local machine only.
 * Removes itself on death or locality transfer (locality change is handled by
 * fnc_localityChanged, which tears this PFH down and restarts it).
 *
 * Arguments:
 * _args   - [unit] <ARRAY>
 * _handle - PFH handle <NUMBER>
 *
 * Return Value:
 * None
 */

params ["_args", "_handle"];
_args params ["_unit"];

// Remove PFH if the unit has died or is no longer local
if (!(alive _unit) || !(local _unit)) exitWith {
    [_handle] call CBA_fnc_removePerFrameHandler;
};

// If the shield vest was removed, deactivate shields and stop the PFH
if !([_unit] call FUNC(hasShield)) exitWith {
    [_unit] call FUNC(deactivateShield);
    [_handle] call CBA_fnc_removePerFrameHandler;
    _unit setVariable [QGVAR(shield_pfh), -1];
};

if !(_unit getVariable [QGVAR(shieldEnabled), false]) exitWith {};

private _maxEnergy    = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(shieldMax),   SHIELD_MAX_DEFAULT);
private _regenRate    = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(shieldRegen), SHIELD_REGEN_RATE_DEFAULT);
private _regenTimeout = _unit getVariable [QGVAR(shieldRegenTimeout), 0];
private _energy       = _unit getVariable [QGVAR(shieldEnergy),       0];

// Nothing to do if already full or still waiting out the regen delay
if (_energy >= _maxEnergy || CBA_missionTime < _regenTimeout) exitWith {};

private _prevEnergy = _unit getVariable [QGVAR(shieldEnergyPrev), _energy];

_energy = (_energy + _regenRate) min _maxEnergy;
_unit setVariable [QGVAR(shieldEnergy), _energy, true];

// Detect state transitions for audio cues
private _pct     = (_energy / _maxEnergy) max 0;
private _prevPct = (_prevEnergy / _maxEnergy) max 0;

// Clear breach flag once regen resumes
if (_unit getVariable [QGVAR(shieldBreached), false]) then {
    _unit setVariable [QGVAR(shieldBreached), false, true];
};

// Fully recharged — only play once when crossing 100% threshold
if (_energy >= _maxEnergy && _prevEnergy < _maxEnergy) then {
    if (hasInterface && _unit isEqualTo player) then {
        playSound SHIELD_SOUND_FULL;
    };
};

// Crossing 50% threshold downward (from above to below) — warning sound
if (_pct < 0.5 && _prevPct >= 0.5) then {
    if (hasInterface && _unit isEqualTo player) then {
        playSound SHIELD_SOUND_HALF;
    };
};

_unit setVariable [QGVAR(shieldEnergyPrev), _energy];
