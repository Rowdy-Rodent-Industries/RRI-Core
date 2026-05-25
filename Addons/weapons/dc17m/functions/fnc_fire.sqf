#include "..\script_component.hpp"

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if !(local _unit) exitWith {};

private _isCloneWeapon = _weapon isKindOf [QGWEAPON(dc17m), configFile >> "CfgWeapons"];
private _isSniperMag = _magazine == QGMAG(dc17m_ap);
private _isGLMag = _magazine == QGMAG(dc17m_at);

if (_isCloneWeapon && _isSniperMag) then {
	[_unit, {
		if (isDedicated) exitWith {};
		playSound3D [QPATHTOF(sounds\dc17msniper.wav), _this, false, getPosASL _this, 5, 1, 300, 0, true]; 
	}] remoteExec ["spawn",0];
};

if (_isCloneWeapon && _isGLMag) then {
	[_unit, {
		if (isDedicated) exitWith {};
		playSound3D [QPATHTOF(sounds\dc17mgl.wav), _this, false, getPosASL _this, 5, 1, 300, 0, true]; 
	}] remoteExec ["spawn",0];
};
