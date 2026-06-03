#include "..\script_component.hpp"

/*
Description: Activates the battery shield if possible.
*/

params ["_unit"];

// can activate check
if !(
    alive _unit &&
    {!( _unit getVariable [QGVAR(batteryEnabled), false])} &&
    {[_unit] call FUNC(hasBattery)}
) exitWith {};

// activate
([_unit] call FUNC(getBatteryData)) params ["_maxEnergy"];

_unit setVariable [QGVAR(batteryEnergy), 0, true];
_unit setVariable [QGVAR(batteryEnabled), true, true];

_unit setVariable [QGVAR(regenTimeout), CBA_missionTime + GVAR(regenTimeoutHit)];

playSound3D [QGVAR(startup), _unit, false, getPosASL _unit, 1.0];

TRACE_1("Katarn Battery activated on unit",_unit);
