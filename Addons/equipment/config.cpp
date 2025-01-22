#include "script_component.hpp"

#include "config_lists.hpp" 

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            BACKPACK_LIST,
            UNIT_LIST
        };
        weapons[] = {
            HELMET_LIST,
            NVG_LIST,
            UNIFORM_LIST,
            VEST_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rri_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

	class Mode_SemiAuto;
	class Mode_Burst;
    class Mode_FullAuto;
    class CowsSlot;

    #include "CfgWeapons.hpp"
    #include "CfgVehicles.hpp"
    #include "XtdGearModels.hpp"