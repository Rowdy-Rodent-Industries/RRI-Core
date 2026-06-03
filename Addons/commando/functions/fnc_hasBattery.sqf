#include "..\script_component.hpp"


params ["_unit"];

private _BatteryVar = _unit getVariable [QGVAR(hasBattery), false];
private _BatteryCfg = GET_BOOL(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(hasBattery));

(_BatteryVar || _BatteryCfg)
