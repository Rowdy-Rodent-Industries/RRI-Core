#include "..\script_component.hpp"

params ["_target", "_shooter", "_ammo"];
private _maxRail = getNumber (configFile >> "CfgAmmo" >> (_ammo) >> QGVAR(railStrength)); 
private _armor = getNumber (configOf _target >> "armor"); 
if (_armor >= _maxRail) exitWith {};

private _isDisabled = _target getVariable [QGVAR(isDisabled),false];

if (!_isDisabled && _target isKindOf "LandVehicle") exitWith {

	_target setHitPointDamage ["hitTurret", 1.0];
	_target setHitPointDamage ["hitGun", 1.0];
	private _disableTime = 10;

	[_target, _disableTime] spawn {
		params ["_target", "_disableTime"];

		sleep _disableTime;
		_target setHitPointDamage ["hitTurret", 0];
		_target setHitPointDamage ["hitGun", 0];
	};	
};
