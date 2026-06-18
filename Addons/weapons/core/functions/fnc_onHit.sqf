#include "..\script_component.hpp"

/*
Function: rri_weapons_core_fnc_onHit

Description:
    Handles onHit events for units.

Arguments:
    _target - passed by EH
    _shooter - passed by EH
    _projectile - passed by EH
    _position - passed by EH
    _velocity - passed by EH
    _selection - passed by EH
    _ammo - passed by EH
    _vector - passed by EH
    _radius - passed by EH
    _surfaceType - passed by EH
    _isDirect - passed by EH

Return Value:
    None

Example:
    (begin example)
        [...] call rri_weapons_core_fnc_onHit;
    (end)

Author:
	Ramsey
*/

params [
    "_target",
    "_shooter",
    "_projectile",
    "_position",
    "_velocity",
    "_selection",
    "_ammoArray",
    "_vector",
    "_radius",
    "_surfaceType",
    "_isDirect"
];

private _ammoClass = _ammoArray param [4, ""];
if (_ammoClass isEqualTo "") exitWith {};

private _ammoType = GVAR(ammoTypeCache) getOrDefault [_ammoClass, -1];
if (_ammoType isEqualTo -1) then {
    _ammoType = GET_NUMBER(configFile >> "CfgAmmo" >> _ammoClass >> QGVAR(ammoType), AMMOTYPE_NONE);
    GVAR(ammoTypeCache) set [_ammoClass, _ammoType];
};

private _deleteProjectile = false;

switch (_ammoType) do {
    case AMMOTYPE_MEDICAL: {
        [QGVAR(onHit_Medical), [_target, _shooter, _ammoClass, _selection], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_TRACKING: {
        [QGVAR(onHit_Tracking), [_target, _shooter, _ammoClass]] call CBA_fnc_localEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_ACID: {
        [QGVAR(onHit_Acid), [_target, _shooter, _ammoClass], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_HACKSHOT: {
        [QGVAR(onHit_HackShot), [_target, _shooter, _ammoClass], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_RAIL: {
        [QGVAR(onHit_RailShot), [_target, _shooter, _ammoClass], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_BEANBAG: {
        [_target, _shooter, _ammoClass] call FUNC(onHit_Beanbag);
        _deleteProjectile = true;
    };

    case AMMOTYPE_DEFIB: {
        [QEGVAR(medical, defibrillate), [_target, _shooter, _ammoClass], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    case AMMOTYPE_DROPPOD: {
        if (isServer) then {
            [_position, typeOf _projectile, _shooter] call FUNC(onHit_Droppod);
        };
        _deleteProjectile = true;
    };

    case AMMOTYPE_FIRE: {
        private _fireCfg = configFile >> "CfgAmmo" >> _ammoClass;
        private _intensity = (getNumber (_fireCfg >> QGVAR(fireIntensity))) max 2;
        ["ace_fire_burn", [_target, _intensity], _target] call CBA_fnc_targetEvent;
        _deleteProjectile = true;
    };

    default {};
};

if (_deleteProjectile) then {
    deleteVehicle _projectile;
};
