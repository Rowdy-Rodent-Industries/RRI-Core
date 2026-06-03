#include "..\script_component.hpp"
/*
Function: rri_commando_fnc_woundHandler

Description:
    Custom ACE Medical wound handler for katarn shields.

Arguments:
    See https://ace3.acemod.org/wiki/framework/medical-framework#44-wound-handler-function

Return Value:
    See https://ace3.acemod.org/wiki/framework/medical-framework#44-wound-handler-function

Author:
    DartRuffian
*/

params ["_unit", "_allDamages", "_typeOfDamage", "_ammo"];
TRACE_4("fnc_woundHandler",_unit,_allDamages,_typeOfDamage,_ammo);

scopeName "main";

if (GVAR(enabled) && { _unit getVariable [QGVAR(batteryEnabled), false] } && { _unit getVariable [QGVAR(batteryEnergy), 0] > 0 }) then {
    scopeName "shield";

    private _totalDamage = 0;
    { _totalDamage = _totalDamage + (_x select 0); } forEach _allDamages;
    private _averageDamage = if (count _allDamages > 0) then { _totalDamage / (count _allDamages) } else { 0 };

    if !(isClass (configFile >> "CfgAmmo" >> _ammo)) then {
        if (_ammo in GVAR(bypassBatteryDamageTypes)) then {
            if (_averageDamage > _averageDamageIgnoreThreshold) then {
                breakTo "shield";
            };

            if (_averageDamage > _averageDamageIgnoreThreshold) then {
                [QGVAR(batteryBreached), [_unit]] call CBA_fnc_localEvent;
            };
            breakTo "main";
        };
    } else {
        private _ammoBatteryBypass = GET_NUMBER(configFile >> "CfgAmmo" >> _ammo >> QGVAR(bypassBattery),0) > 0;
        if (_ammoBatteryBypass) then {
            if (_averageDamage > _averageDamageIgnoreThreshold) then {
                [QGVAR(batteryBreached), [_unit]] call CBA_fnc_localEvent;
            };
            breakTo "main";
        };
    };

    _allDamages resize 0;
};

// Pass state to later wound handlers
_this;
