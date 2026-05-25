// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX mti

#define AUTHOR QUOTE(MokTech Industries)
#define MOD_NAME_BEAUTIFIED QUOTE(MokTech Industries - Core)

#define CATTAB_AUTHORS "Cat Harsis, Gundy, Riouken, Raspu"

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}
#define REQUIRED_TFAR_VERSION {1,-1,0,328}

#include "script_debug.hpp"

#ifndef RELEASE_BUILD
//    #define DEBUG_ENABLED_ADMIN_MESSAGES
//    #define DEBUG_ENABLED_AI
//    #define DEBUG_ENABLED_AIRCRAFT
//    #define DEBUG_ENABLED_COMMON
//    #define DEBUG_ENABLED_CATTAB_CORE
//    #define DEBUG_ENABLED_CATTAB_DATA
//    #define DEBUG_ENABLED_CATTAB_UI
//    #define DEBUG_ENABLED_CUFFBREAK
//    #define DEBUG_ENABLED_DOORS
//    #define DEBUG_ENABLED_DRONES
//    #define DEBUG_ENABLED_EQUIPMENT
//    #define DEBUG_ENABLED_EXPLOSIVES
//    #define DEBUG_ENABLED_FORTIFY
//    #define DEBUG_ENABLED_HEAVY_REPEATER
//    #define DEBUG_ENABLED_INTERCOM
//    #define DEBUG_ENABLED_KATARNOS
//    #define DEBUG_ENABLED_LOGISTICS
//    #define DEBUG_ENABLED_LOGISTICS_CRATEFILLER
//    #define DEBUG_ENABLED_MEDICAL
//    #define DEBUG_ENABLED_MEDICAL_DEFIB
//    #define DEBUG_ENABLED_MEDICAL_STRETCHER
//    #define DEBUG_ENABLED_MINEDETECTOR
//    #define DEBUG_ENABLED_MODULES
//    #define DEBUG_ENABLED_MSE6
    #define DEBUG_ENABLED_PANGOLIN
//    #define DEBUG_ENABLED_PRONELAUNCHER
//    #define DEBUG_ENABLED_SCREENSHOT_MODE
//    #define DEBUG_ENABLED_SUPPLIES
//    #define DEBUG_ENABLED_TECH
//    #define DEBUG_ENABLED_VEHICLES
//    #define DEBUG_ENABLED_WEAPONS_CORE
//    #define DEBUG_ENABLED_ZEUS
#endif

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(MokTech Industries - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(MokTech Industries - COMPONENT)
#endif
