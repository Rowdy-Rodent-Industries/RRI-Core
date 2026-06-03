#include "..\script_component.hpp"
/*
 * Initialises the energy shield state for a commando droid and starts the
 * regeneration per-frame handler. Called from fnc_initBattery on the local
 * machine only.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 */

params ["_unit"];

if !(local _unit) exitWith {};

// Clean up any shield PFH lingering from a previous life
private _oldPFH = _unit getVariable [QGVAR(shield_pfh), -1];
if (_oldPFH != -1) then {
    [_oldPFH] call CBA_fnc_removePerFrameHandler;
    _unit setVariable [QGVAR(shield_pfh), -1];
};

// Shield energy starts at 0 and charges up to full
private _maxEnergy = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(shieldMax), SHIELD_MAX_DEFAULT);
_unit setVariable [QGVAR(shieldEnergy),       0,     true];
_unit setVariable [QGVAR(shieldEnergyPrev),   0,     false];
_unit setVariable [QGVAR(shieldEnabled),      true,  true];
_unit setVariable [QGVAR(shieldBreached),     false, true];
_unit setVariable [QGVAR(shieldRegenTimeout), 0,     true];

// Start the regen PFH
private _pfhID = [{_this call FUNC(shieldPFH)}, SHIELD_PFH_INTERVAL, [_unit]] call CBA_fnc_addPerFrameHandler;
_unit setVariable [QGVAR(shield_pfh), _pfhID];
