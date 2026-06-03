#include "..\script_component.hpp"
/*
 * Returns true when the unit's shield can be activated:
 * - has a shield vest equipped
 * - shield system is not already enabled
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Can activate? <BOOL>
 *
 * Author: Ramsey
 */

params ["_unit"];

([_unit] call FUNC(hasShield)) && !(_unit getVariable [QGVAR(shieldEnabled), false])
