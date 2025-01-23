#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED vehicles
#include "\z\rri\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_VEHICLES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_VEHICLES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_VEHICLES
#endif

#define CARGO_XX(a,b) class _xx_##a## {type = QUOTE(a); amount = b;}

#include "\z\rri\addons\main\script_macros.hpp"