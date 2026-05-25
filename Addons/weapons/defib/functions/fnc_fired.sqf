#include "..\script_component.hpp"

/*
Function: rri_weapons_defib_fnc_fired

Description:
    Handles events after the defib was fired.

Arguments:
    _unit       - Unit that fired
    _weapon     - Weapon that was fired
    _muzzle     - Muzzle that was fired
    _mode       - Current weapon mode
    _ammo       - Ammo that was fired
    _magazine   - Current magazine
    _projectile - Fired projectile

Return Value:
    None

Example:
    (begin example)
        class EventHandlers {
            fired = "_this call rri_weapons_defib_fnc_fired";
        };
    (end)

Author:
	Mokka
*/

params ["_unit", "_weapon", "_muzzle", "", "", "", "_projectile"];
TRACE_4("params",_unit,_weapon,_muzzle,_projectile);

if !(local _unit) exitWith {};

// first order of business: sounds
private _ammoCount = _unit ammo _muzzle;

if (_ammoCount > 0) then {
    [QGVAR_CORE(common,say3D),[(vehicle _unit), [QGVAR(sound_recharge),100, 1, false, 0]]] call CBA_fnc_globalEvent;
};
