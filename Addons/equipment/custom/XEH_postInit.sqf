#include "script_component.hpp"

[QGVAR_CORE(boc,chestpackAdded),{
	if (((_this select 0) isEqualTo ACE_player) && {(_this select 1) isKindOf QGBACKPACK(arc)}) then {
		(_this select 2) hideSelection ["camo2",true];
	};
}] call CBA_fnc_addEventHandler;
