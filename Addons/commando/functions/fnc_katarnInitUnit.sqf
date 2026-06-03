#include "..\script_component.hpp"

params ["_unit", ["_isRespawn", false]];

TRACE_2("initUnit",_unit,_isRespawn);

//respawn handler
if (!_isRespawn) then {
    _unit addEventHandler ["Respawn", {
        params ["_newUnit"];
        [_newUnit, true] call FUNC(katarnInitUnit);
    }];
};

//battery reacts when the unit gets shot
if (!_isRespawn) then {
    _unit addEventHandler ["Hit", {
        _this call FUNC(shieldDamagedLocal);
    }];
};

//cleanup
private _pfhID = _unit getVariable QGVAR(battery_pfh);
if !(isNil "_pfhID") then {
    [_pfhID] call CBA_fnc_removePerFrameHandler;
    _unit setVariable [QGVAR(battery_pfh), nil];
};

//reset battery
_unit setVariable [QGVAR(batteryEnergy), 0, true];
_unit setVariable [QGVAR(batteryEnabled), false, true];
_unit setVariable [QGVAR(regenTimeout), 0, true];
_unit setVariable [QGVAR(isRecharging), false, true];

if (!GVAR(enabled)) exitWith {};

if !(local _unit) exitWith {};

_pfhID = [{_this call FUNC(batteryPFH)}, 1, [_unit]] call CBA_fnc_addPerFrameHandler;
_unit setVariable [QGVAR(battery_pfh), _pfhID];
