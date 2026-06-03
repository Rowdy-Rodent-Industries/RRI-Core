#include "..\script_component.hpp"

/*
Function: rri_commando_fnc_hasSuit

Description:
    Checks if given unit has equipped KatarnOS compatible Suit.

Arguments:
    _unit - The unit to check

Return Value:
    hasSuit?

Example:
    (begin example)
        [ACE_Player] call rri_commando_fnc_hasSuit;
    (end)

Author:
	Ramsey
*/

params ["_unit"];

private _suitVar = _unit getVariable [QGVAR(hasSuit), false];
private _suitCfg = GET_BOOL(configFile >> "CfgWeapons" >> (uniform _unit) >> QGVAR(isSuit));

(_suitVar || _suitCfg)
