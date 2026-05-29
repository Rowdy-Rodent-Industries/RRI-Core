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
            QE_ADDON(weapons_core), "JLTS_weapons_RPS6"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_rri_Fake;

class CBA_DisposableLaunchers {
	GWEAPON(RPS6_D)[] = {QGWEAPON(RPS6_D_Loaded),QGWEAPON(RPS6_D_Used)};
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
