#include "script_component.hpp"

[QGVAR(updateRespawn),{ACE_player setVariable ["StartingPos", (_this select 0)]}] call CBA_fnc_addEventHandler;