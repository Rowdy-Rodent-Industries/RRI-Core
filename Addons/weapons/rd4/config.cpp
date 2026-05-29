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
            QE_ADDON(weapons_core), QE_ADDON(explosives_grenades), "ls_weapons_rd4"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class Mode_rri_Fake;

#include "CfgWeapons.hpp"

///-- Ammo
class CfgAmmo {
    class GAMMO(40mm_HE_Base);
    class GAMMO(rd4): GAMMO(40mm_HE_Base) {
        hit = 140;
        indirectHit = 30;
        indirectHitRange = 10;
    };
};

///-- Magazines
class CfgMagazines {
    class GMAG(40mm_Base);
    class GMAG(rd4): GMAG(40mm_Base) {
        scope = 2;

        author = AUTHOR;
        displayName = "[SOB] RD-4 1rnd Radiation Canister";
        displayNameShort = "HE";
        descriptionShort = "High-explosive radiation canister used by the RD-4 grenade launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando","JumpTrooper","ARC","Fieldsupport"};

        ammo = QGAMMO(rd4);
        count = 1;
        initSpeed=76;
        mass = 5;

        picture = QPATHTOEF(weapons,core\data\icons\gl\GL_HE_ca.paa);
    };

    class GMAG(rd4_3rnd): GMAG(rd4) {
        displayName = "[SOB] RD-4 3rnd Radiation Canister";

        mass =15;
        count = 3;
    };
};

///-- Magwell
class CfgMagazineWells {
    class GMAGWELL(rd4) {
        PREFIX[] = { QGMAG(rd4), QGMAG(rd4_3rnd) };
    };
};

///-- Groundholders
class CfgVehicles {
    #include "groundholders.hpp"
};
