#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QE_ADDON(weapons_core)
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_rri_Fake;

#include "CfgMovesBasic.hpp"
#include "CfgGesturesMale.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundSets.hpp"
#include "CfgSoundShaders.hpp"
