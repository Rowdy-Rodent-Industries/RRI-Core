#include "..\script_component.hpp"
params ["_position","_ammo","_shooter"];

private _crateType = getText (configFile >> "CfgAmmo" >> _ammo >> QGVAR(crateType));

if (_crateType == "" || { !isClass (configFile >> "CfgVehicles" >> _crateType) }) exitWith {
    ERROR_2("Bad object class '%1' for ammo '%2'. Class is either empty or is not defined in CfgVehicles.",_crateType,_ammo);
};

// You know _crateType is valid now, can just spawn it
private _resupply = _crateType createVehicle _position;
private _crater = createVehicle ["Land_ShellCrater_01_F", [0, 0, 0], [], 0, "CAN_COLLIDE"]; // This syntax is faster than "type" createVehicle _pos because it doesn't do position checks
_crater setPosASL (getPosASL _resupply);
_crater setDir (getDir _shooter - 180);
_resupply attachTo [_crater];
