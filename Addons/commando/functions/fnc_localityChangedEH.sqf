#include "..\script_component.hpp"

params ["_unit", "_isLocal"];
TRACE_2("params",_unit,_isLocal);


private _pfhID = _unit getVariable QGVAR(battery_pfh);
if !(isNil "_pfhID") then {
	[_pfhID] call CBA_fnc_removePerFrameHandler;
};

if (!GVAR(enabled)) exitWith {};

if (_isLocal) then {
	_pfhID = [{_this call FUNC(batteryPFH)},1,[_unit]] call CBA_fnc_addPerFrameHandler;

	_unit setVariable [QGVAR(battery_pfh), _pfhID];
};
