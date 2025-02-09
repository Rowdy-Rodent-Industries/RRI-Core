#include "..\script_component.hpp"
/*
Pulled from LRG Fundamentals 

Uses the stating position of the player as the respawn for that player
*/


if (isNil { player getVariable "StartingPos"; } ) then {
    player setVariable ["StartingPos", getPosATL player];
    player setVariable ["StartingDir", getDir player];
} else {
    player setPosATL (player getVariable ["StartingPos", getPosATL player]);
    player setDir (player getVariable ["StartingDir", 0]);
};