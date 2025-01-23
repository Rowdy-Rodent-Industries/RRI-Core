#include "script_component.hpp"

#include "config_lists.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {ITEMS};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rri_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

    #include "CfgWeapons.hpp"
    #include "ACE_Medical_Treatment_Actions.hpp"
    #include "ACE_Medical_Treatment.hpp"
