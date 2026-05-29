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
            QE_ADDON(weapons_core),"3AS_Weapons","3AS_Weapons_Chaingun"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_rri_Fake;

#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

///-- Groundholders
class CfgVehicles {
    #include "groundholders.hpp"
};
