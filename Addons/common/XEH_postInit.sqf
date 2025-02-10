#include "script_component.hpp"

[QGVAR(updateRespawn),{ACE_player setVariable ["StartingPos", (_this select 0)]}] call CBA_fnc_addEventHandler;

//add default loadouts 
["ace_arsenal_displayOpened", {
	call FUNC(initDefaultLoadouts);
	[_thisType,_thisId] call CBA_fnc_removeEventHandler;
}, []] call CBA_fnc_addEventHandlerArgs;
