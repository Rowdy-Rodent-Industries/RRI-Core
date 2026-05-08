// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX rri

#define AUTHOR QUOTE(Rowdy Rodent Industries)
#define MOD_NAME_BEAUTIFIED QUOTE(Rowdy Rodent Industries)

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}

#include "script_debug.hpp"

#ifndef RELEASE_BUILD
    #define DEBUG_ENABLED_MAIN
#endif

#ifdef SUBCOMPONENT
    #ifdef SUBCOMPONENT_BEAUTIFIED
        #define COMPONENT_NAME QUOTE(Rowdy Rodent Industries - SUBCOMPONENT_BEAUTIFIED)
    #else
        #define COMPONENT_NAME QUOTE(Rowdy Rodent Industries - SUBCOMPONENT)
    #endif
#else
    #ifdef COMPONENT_BEAUTIFIED
        #define COMPONENT_NAME QUOTE(Rowdy Rodent Industries - COMPONENT_BEAUTIFIED)
    #else
        #define COMPONENT_NAME QUOTE(Rowdy Rodent Industries - COMPONENT)
    #endif
#endif
