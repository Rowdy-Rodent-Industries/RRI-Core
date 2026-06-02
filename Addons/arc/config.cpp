#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {UNIT_LIST};
        weapons[] = {ITEM_LIST};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "JLTS_characters_CloneArmor",
            "JLTS_characters_CloneArmor2",
            "SEA_JLTS_ExtendedArsenal"
            };
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "XtdGearModels.hpp"
