#include "..\script_component.hpp"
/*
 * Checks whether the given unit has a shield-capable vest equipped.
 * Reads rri_commando_hasShield from the vest's CfgWeapons config entry.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Has shield? <BOOL>
 *
 * Example:
 *   [player] call rri_commando_fnc_hasShield;
 *
 * Author: Ramsey
 */

params ["_unit"];

GET_BOOL(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(hasShield))
