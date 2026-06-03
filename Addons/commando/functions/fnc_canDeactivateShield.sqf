#include "..\script_component.hpp"
/*
 * Returns true when the unit's shield can be deactivated:
 * - has a shield vest equipped
 * - shield system is currently enabled
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Can deactivate? <BOOL>
 *
 * Author: Ramsey
 */

params ["_unit"];

([_unit] call FUNC(hasShield)) && (_unit getVariable [QGVAR(shieldEnabled), false])
