#include "script_component.hpp"

#include "initKeybinds.inc.sqf"

if (hasInterface) then {
    [] spawn {
        waitUntil { !isNull (findDisplay 46) };
        call FUNC(smartScope);
    };
};