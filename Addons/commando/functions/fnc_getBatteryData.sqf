#include "..\script_component.hpp"
params ["_unit"];

// maxCharge
private _maxCharge = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(batteryCharge),GVAR(baseBatteryCharge));

// regenRate
private _regenRate = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(batteryRecharge),GVAR(baseBatteryRecharge));

// regenTimeout
private _regenTimeoutMod = GET_NUMBER(configFile >> "CfgWeapons" >> (vest _unit) >> QGVAR(regenTimeoutMod),1);

// regenAllowed
private _regenAllowed = _unit getVariable [QGVAR(regenAllowed), true];
if (_unit getVariable ["ACE_isUnconscious", false]) then { _regenAllowed = false; };

[_maxCharge, _regenRate, _regenAllowed, _regenTimeoutMod]
