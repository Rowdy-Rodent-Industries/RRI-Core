#include "..\script_component.hpp"

/*
Description: Deactivates the battery shield if possible.
*/

params ["_unit"];

// can deactivate
if !(
    alive _unit &&
    {_unit getVariable [QGVAR(batteryEnabled), false]}
) exitWith {};

// deactivate
_unit setVariable [QGVAR(batteryEnabled), false, true];

if (_unit getVariable [QGVAR(isRecharging), false]) then {
    _unit setVariable [QGVAR(isRecharging), false, true];
};

playSound3D [QGVAR(shutdown), _unit, false, getPosASL _unit, 1.0];

TRACE_1("Battery deactivated on unit",_unit);
