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

class CfgRespawnTemplates
{
	class RRI_RespawnOnStartPos
	{
		displayName = "Respawn on Start Position";
		onPlayerRespawn = QPATHTOF(functions\fnc_respawnonstartpos.sqf);
		respawnDelay = 10;
		respawnOnStart = 0;
	};
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
#include "Cfg3den.hpp"
#include "CfgMainMenuSpotlight.hpp"