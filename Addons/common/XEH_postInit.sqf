#include "script_component.hpp"

// Arcanist's Dunce Cap
// if (((toLower profileName) find "cc-1300") >= 0) then {
// 	["ace_arsenal_displayClosed", {
// 		[
// 			{
// 				if ((goggles ACE_player) isNotEqualTo "") then {
// 					removeGoggles ACE_player;
// 				};
// 				[{ ACE_player addGoggles QGFACEWEAR(dunce_arcanist)},[]] call CBA_fnc_execNextFrame;
// 			}, [], 1
// 		] call CBA_fnc_waitAndExecute;
// 	}] call CBA_fnc_addEventHandler;
// };

// BSJ's Dunce Cap
if (((toLower profileName) find "bsj") >= 0) then {
	["ace_arsenal_displayClosed", {
		[
			{
				if ((goggles ACE_player) isNotEqualTo "") then {
					removeGoggles ACE_player;
				};
				[{ ACE_player addGoggles QGFACEWEAR(dunce)},[]] call CBA_fnc_execNextFrame;
			}, [], 1
		] call CBA_fnc_waitAndExecute;
	}] call CBA_fnc_addEventHandler;
};

addMissionEventHandler ["Map", {
    params ["_mapIsOpened"];
    _mapIsOpened call FUNC(onMapOpened);
}];
