#include "..\script_component.hpp"

params [
    "_unit",
    "_shooter",
    "_projectile",
    "_position",
    "_velocity",
    "_selection",
    "_ammo",
    "_vector",
    "_radius",
    "_surfaceType",
    "_isDirect"
];

TRACE_2("Battery hit detected",_unit,_ammo);

// send to local
if !(local _unit) exitWith {
    [QGVAR(onHitLocal), _this, _unit] call CBA_fnc_targetEvent;
};

// local processing
if !(alive _unit) exitWith {};
if !(_unit getVariable [QGVAR(batteryEnabled), false]) exitWith {};

// particles
[QGVAR(particleEffects), [_unit, ptcl_hit]] call CBA_fnc_globalEvent;

private _ammoClass = if (_ammo isEqualType []) then { _ammo select 0 } else { _ammo };
private _hitVal = if (isClass (configFile >> "CfgAmmo" >> _ammoClass)) then {
    getNumber (configFile >> "CfgAmmo" >> _ammoClass >> "hit")
} else {
    15 
};

private _hitBodypart = if (_selection isEqualType []) then { 
    if (count _selection > 0) then { _selection select 0 } else { "body" };
} else { 
    _selection 
};

private _currentEnergy = _unit getVariable [QGVAR(batteryEnergy), 0];
([_unit] call FUNC(getBatteryData)) params ["_maxEnergy", "_regenAmount", "_regenAllowed", "_regenTimeoutMod"];

TRACE_3("Hit values",_hitVal,_hitBodypart,_currentEnergy);

// regen timeout
_unit setVariable [QGVAR(regenTimeout), CBA_missionTime + GVAR(regenTimeoutHit) + _regenTimeoutMod];

// drain battery
_unit setVariable [QGVAR(batteryEnergy), (_currentEnergy - _hitVal) max 0, true];

// shield breach
if (_hitVal > _currentEnergy) then {
    [QGVAR(batteryBreached), [_unit]] call CBA_fnc_localEvent;
    
    
    private _bleedDamage = _hitVal - _currentEnergy;
    [_unit, _bleedDamage, _hitBodypart, "bullet"] call ace_medical_fnc_addDamageToUnit;
    
} else {
    // half battery sound
    if ((_currentEnergy > (_maxEnergy / 2)) && {(_currentEnergy - _hitVal) < (_maxEnergy / 2)}) then {
        playSound3D [QGVAR(half_charge), _unit, false, getPosASL _unit, 1.5];
    };
};

if (_unit getVariable [QGVAR(isRecharging), false]) then {
    _unit setVariable [QGVAR(isRecharging), false, true];
};
