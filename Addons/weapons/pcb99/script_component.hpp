#define SUBCOMPONENT pcb99
#define SUBCOMPONENT_BEAUTIFIED Weapons (pcb99)

#define HAS_SMARTSCOPE(weapon)     (getNumber (configFile >> "CfgWeapons" >> (weapon) >> QGVAR(hasSmartScope)) == 1)

#include "\z\rri\addons\weapons\script_component.hpp"
