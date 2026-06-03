#include "..\script_component.hpp"

params ["_args", "_handle"];
_args params ["_unit"];

if !((alive _unit) && {local _unit}) exitWith {
    [_handle] call CBA_fnc_removePerFrameHandler;
};

// exit if battery disabled
if !(_unit getVariable [QGVAR(batteryEnabled), false]) exitWith {};

// check if unit still has battery
if !([_unit] call FUNC(hasBattery)) exitWith {
    [_unit] call FUNC(deactivateBattery);
};

// get battery config
([_unit] call FUNC(getBatteryData)) params ["_maxBatteryEnergy", "_regenAmount", "_regenAllowed", "_regenTimeoutMod"];

private _regenTimeout = _unit getVariable [QGVAR(regenTimeout), CBA_missionTime];
private _batteryEnergy = _unit getVariable [QGVAR(batteryEnergy), 0];

TRACE_6("batteryPFH",_batteryEnergy,_regenTimeout,_maxBatteryEnergy,_regenAmount,_regenAllowed,_regenTimeoutMod);

// regen
if ((_batteryEnergy < _maxBatteryEnergy) && {_regenAllowed && {CBA_missionTime >= _regenTimeout}}) then {

    _batteryEnergy = _batteryEnergy + _regenAmount;
    _unit setVariable [QGVAR(batteryEnergy), _batteryEnergy min _maxBatteryEnergy, true];

    if !(_unit getVariable [QGVAR(isRecharging), false]) then {
        _unit setVariable [QGVAR(isRecharging), true, true];

        //sound source
        private _soundSource = createSoundSource [QGVAR(recharging_sound), getPosASL _unit, [], 0];
        _soundSource attachTo [_unit, [0, 0, 0]];

        [
            { !((_this select 0) getVariable [QGVAR(isRecharging), false]) },
            { deleteVehicle (_this select 1) },
            [_unit, _soundSource],
            30
        ] call CBA_fnc_waitUntilAndExecute;
    };

} else {

    if (_unit getVariable [QGVAR(isRecharging), false]) then {
        _unit setVariable [QGVAR(isRecharging), false, true];

        if (_batteryEnergy >= _maxBatteryEnergy) then {
            playSound3D [QGVAR(full_charge), _unit, false, getPosASL _unit, 1.2];
        };
    };
};
