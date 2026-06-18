#include "..\script_component.hpp"

//Thanks Dart

params ["_target", "_shooter", "_ammo"];

// check if target is valid for ion
if (_target isEqualTo _shooter) exitWith {};

// extend time if unit already ion'd

if !(_target getVariable ["ace_captives_isHandcuffed", false]) then {
    [_shooter, _target, "ACE_CableTie"] call ace_captives_fnc_doApplyHandcuffs; // Use _shooter instead of objNull to make it consume cable ties
	// hint format ["%1 has been BeanBagged by %2", name _target,name  _shooter];
};
