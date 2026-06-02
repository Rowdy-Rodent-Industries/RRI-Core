#include "..\script_component.hpp"

/*
Function: rri_weapons_pcb99_fnc_smartScope

Description:
Creates tracking boxes for all infantry or vehicles seen in scope

to add this to the gun/scope depending on if its directly attached or a seperate scope
rri_weapons_pcb99_hasSmartScope = 1;      

Author:
	Wolfen
*/


// safety against repeats
if (!isNil QGVAR(DrawID)) then {
    removeMissionEventHandler ["Draw3D", GVAR(DrawID)];
};

// makes sure postinit is good to go
GVAR(Active)     = missionNamespace getVariable [QGVAR(Active), true];
GVAR(Mode)       = missionNamespace getVariable [QGVAR(Mode), "INF"];
GVAR(LastUpdate) = missionNamespace getVariable [QGVAR(LastUpdate), 0];
GVAR(Targets)    = missionNamespace getVariable [QGVAR(Targets), []];

GVAR(DrawID) = addMissionEventHandler ["Draw3D", {
    // only on aiming not just holding gun
    if (GVAR(Active) && {cameraView == "GUNNER"}) then {
        
        private _weapon = currentWeapon player;
        private _hasWpn = HAS_SMARTSCOPE(_weapon);
        
        if (_hasWpn) then {
            private _now = diag_tickTime;

            // updates target list on delay so less laggy
            if (_now > GVAR(LastUpdate) + 0.5) then {
                GVAR(LastUpdate) = _now;
                private _type = if (GVAR(Mode) == "INF") then {["CAManBase"]} else {["LandVehicle", "Air", "StaticWeapon"]};
                GVAR(Targets) = (getPosATL player) nearEntities [_type, GVAR(SmartScopeRange)] select { 
                    alive _x && {side _x != side player} && {side _x != civilian} 
                };
            };

            private _eyePos = AGLToASL (positionCameraToWorld [0,0,0]);

            {
                if (!isNull _x) then {
                    private _targetPos = AGLToASL (_x modelToWorldVisual (_x selectionPosition "spine3" vectorAdd [0,0,0.2]));
                    if (_targetPos isEqualTo [0,0,0.2]) then { 
                        _targetPos = AGLToASL (_x modelToWorldVisual [0,0,1.2]); 
                    };
                    private _vis = [player, "VIEW"] checkVisibility [_eyePos, _targetPos];

                    if (_vis > 0.2) then {
                        private _drawPos = _x modelToWorldVisual [0, 0, 1.2];
                        drawIcon3D [
                            "\A3\ui_f\data\IGUI\Cfg\Cursors\lock_target_ca.paa", 
                            if (GVAR(Mode) == "INF") then {[1,0,0,0.8]} else {[1,0.6,0,0.9]}, 
                            _drawPos, 
                            1, 1, 0, 
                            format["%1m", round (player distance _x)], 
                            1, 0.035, "PuristaMedium"
                        ];
                    };
                };
            } forEach GVAR(Targets);
        };
    };
}];
