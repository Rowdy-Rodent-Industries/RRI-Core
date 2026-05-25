#include "..\script_component.hpp"

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];

if !(local _unit) exitWith {};
switch true do {
	case ((_unit ammo currentWeapon _unit) > 0): {
		if !(isPlayer _unit) exitWith {
			uiSleep 0.1;
			_unit playActionNow QGVAR(BR77_Fire);
			playSound3D [QPATHTOF(data\sounds\br77_bolt.ogg), _unit, false, aimPos _unit, 2, 1, 20];
		};
		waitUntil {_unit setWeaponReloadingTime [_unit,_muzzle,1]; (inputAction "DefaultAction" == 0)};
		_unit setWeaponReloadingTime [_unit,_muzzle,1];
		_unit playActionNow QGVAR(BR77_Fire);
		[_unit,{
			if (isDedicated) exitWith {};
			params [
				["_source", objNull],
				["_sound", ""],
				["_distance",100],
				["_volume", 2]
			];
			switch true do {
				case (player == _source): {playSoundUI [QPATHTOF(data\sounds\br77_bolt.ogg), 0.9, selectRandom [0.98,1,1.02], true, 0];};
				default {playSound3D [QPATHTOF(data\sounds\br77_bolt.ogg), _source, false, aimPos _source, 2, 1, 40,0,true];};
			};
		}] remoteExec ["spawn",0];
	};
	default {};
};
