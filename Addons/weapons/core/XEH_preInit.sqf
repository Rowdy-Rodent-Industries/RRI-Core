#include "script_component.hpp"

ADDON = false;

GVAR(ammoTypeCache) = createHashMap;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;


ADDON = true;
