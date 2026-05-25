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
            QE_ADDON(weapons_core), "3AS_Weapons_WestarM5"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_MTI_Fake;

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"

///-- Groundholders
class CfgVehicles {
    #include "groundholders.hpp"
};
