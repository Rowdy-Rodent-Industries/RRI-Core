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
            "3AS_Weapons_Republic_DC15S",
            "JLTS_weapons_DC15S",
            "SEA_JLTS_EA_Scopes"
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
#include "XtdGearModels.hpp"
#include "CfgAmmo.hpp"
#include "CfgRecoils.hpp"
