#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"EC_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"