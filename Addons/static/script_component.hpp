#define COMPONENT static
#define COMPONENT_BEAUTIFIED Static
#include "\z\rri\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_STATIC
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_STATIC
    #define DEBUG_SETTINGS DEBUG_SETTINGS_STATIC
#endif

#define SUPPLIES_MAXLOAD 8000

#include "\z\rri\addons\main\script_macros.hpp"
