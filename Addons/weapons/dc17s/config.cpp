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
            QE_ADDON(weapons_core),
            "SEA_JLTS_EA_Scopes",
            "JLTS_weapons_DC17SA",
            "3AS_Weapons_Republic_DC17S",
            "ls_weapons_dcseries"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_rri_Fake;

#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgAmmo.hpp"
#include "XtdGearModels.hpp"
