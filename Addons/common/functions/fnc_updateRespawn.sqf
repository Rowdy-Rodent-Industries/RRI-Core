#include "..\script_component.hpp"

params ["_pos"];

[QGVAR(updateRespawn),[_pos],QGVAR(updateRespawn)] call CBA_fnc_globalEventJIP;

["Respawn Pos Updated"] call ACE_common_fnc_displayTextStructured;