#include "script_component.hpp"


class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
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
    #include "CfgMagazines.hpp"
    #include "CfgAmmo.hpp" 
    #include "CfgVehicles.hpp"