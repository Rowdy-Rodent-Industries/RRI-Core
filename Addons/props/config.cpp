#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QE_ADDON(common)};
        // skipWhenMissingDependencies = 1;
        author = AUTHOR;
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
