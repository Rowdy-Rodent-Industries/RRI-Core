#include "..\script_component.hpp"

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if !(local _unit) exitWith {};

private _isCloneWeapon = _weapon isKindOf [QGWEAPON(causality), configFile >> "CfgWeapons"];
private _isRailMag = _magazine == QGMAG(causality_rail);
private _isBaseMag = _magazine == QGMAG(causality_base);

if (_isCloneWeapon && _isRailMag) then {
	[_unit, {
		if (isDedicated) exitWith {};
		_smlfirelight = "#lightpoint" createVehicleLocal (getPos _this);  
		_smlfirelight attachTo [_this,[-0.2,0.2,-0.2],"leftHand",true];  
		_smlfirelight setLightAmbient [0.3, 0.7, 1];     
		_smlfirelight setLightColor [0.3, 0.7, 1];  
		_smlfirelight setLightBrightness 0.25;  
		_smlfirelight setLightUseFlare true;  
		_smlfirelight setLightDayLight true;  
		_smlfirelight setLightFlareSize 3.5;  
		_smlfirelight setLightFlareMaxDistance 300;   
		_electra = "#particlesource" createVehicleLocal position _this; 
		_electra attachTo [_this,[-0.2,0.2,-0.2],"leftHand",true]; 
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["\A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.003,0.003,0.003], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		uiSleep 0.1;
		deleteVehicle _smlfirelight;
		deleteVehicle _electra;
		playSound3D [QPATHTOF(data\sounds\causality_rail.wss),_electra,false,getPos _electra,5,1,300,0,true]; 
	}] remoteExec ["spawn",0];
};

if (_isCloneWeapon && _isBaseMag) then {
	[_unit, {
		if (isDedicated) exitWith {};
		playSound3D [QPATHTOF(data\sounds\causality_heavy.wav), _this, false, getPosASL _this, 5, 1, 300, 0, true]; 
	}] remoteExec ["spawn",0];
};
