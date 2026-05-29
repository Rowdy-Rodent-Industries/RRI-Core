#define WEAPON_BCSEWPN_HEADER \
class EGVAR(weapons_core,Fake_GL)

// Override FUNC to use SUBADDON for weapon subcomponents
#ifdef SUBADDON
    #undef FUNC
    #define FUNC(var1) TRIPLES(SUBADDON,fnc,var1)
    #undef DFUNC
    #define DFUNC(var1) TRIPLES(SUBADDON,fnc,var1)
    #undef QFUNC
    #define QFUNC(var1) QUOTE(TRIPLES(SUBADDON,fnc,var1))
#endif

#define WEAPON_BCSEWPN_ZASLEH_MACRO(var1) \
class GWEAPON(##var1##_bcsewpn): GWEAPON(var1) { \
    enableAttack = 0; \
    type = 4; \
    scope = 2; \
    scopeArsenal = 2; \
    handAnim[] = {}; \
    class Fake: Mode_rri_Fake{}; \
    modes[] = {"Fake"}; \
    class Fake_GL: EGVAR(weapons_core,Fake_GL){}; \
    muzzles[] = {"this","Fake_GL"}; \
    baseWeapon = QGWEAPON(##var1##_bcsewpn); \
    hiddenSelections[] = {"zasleh"}; \
    hiddenSelectionsTextures[] = {""}; \
    class XtdGearInfo{}; \
} 

#define WEAPON_BCSEWPN_MUZZLEFLASH_MACRO(var1) \
class GWEAPON(##var1##_bcsewpn): GWEAPON(var1) { \
    enableAttack = 0; \
    type = 4; \
    scope = 2; \
    scopeArsenal = 2; \
    handAnim[] = {}; \
    class Fake: Mode_rri_Fake{}; \
    modes[] = {"Fake"}; \
    class Fake_GL: EGVAR(weapons_core,Fake_GL){}; \
    muzzles[] = {"this","Fake_GL"}; \
    baseWeapon = QGWEAPON(##var1##_bcsewpn); \
    hiddenSelections[] = {"muzzleFlash"}; \
    hiddenSelectionsTextures[] = {""}; \
    class XtdGearInfo{}; \
} 

#define CONST_GL_SPEED 80

#define RAILATTACHMENT_LIST "acc_flashlight",\
"acc_pointer_IR",\
QEGVAR(weapons_core,Flashlight_nomodel),\
QEGVAR(weapons_core,Pointer_IR_nomdel),\
QEGVAR(weapons_core,Pointer_IR),\
QEGVAR(weapons_core,Pointer_nomodel),\
"ACE_SPIR",\
"ACE_SPIR_Narrow",\
"ACE_SPIR_Medium",\
"ACE_DBAL_A3_Green",\
"ACE_DBAL_A3_Green_VP",\
"ACE_DBAL_A3_Green_II",\
"ACE_DBAL_A3_Green_IP",\
"ACE_DBAL_A3_Red",\
"ACE_DBAL_A3_Red_VP",\
"ACE_DBAL_A3_Red_II",\
"ACE_DBAL_A3_Red_IP"

#define RCO_LIST QEGVAR(weapons_core,HRCO_Blue),QEGVAR(weapons_core,HRCO_Green),QEGVAR(weapons_core,HRCO_Red)
#define MRCO_LIST QEGVAR(weapons_core,HMRCO_Blue),QEGVAR(weapons_core,HMRCO_Green),QEGVAR(weapons_core,HMRCO_Red)
#define HOLO_LIST QEGVAR(weapons_core,Holo_Blue),QEGVAR(weapons_core,Holo_Green),QEGVAR(weapons_core,Holo_Red)
#define DMS_LIST QEGVAR(weapons_core,HDMS_Blue),QEGVAR(weapons_core,HDMS_Green),QEGVAR(weapons_core,HDMS_Red)
#define LRPS_LIST QEGVAR(weapons_core,HLRPS_Blue),QEGVAR(weapons_core,HLRPS_Green),QEGVAR(weapons_core,HLRPS_Red)
#define MRD_LIST QEGVAR(weapons_core,HMRD_Blue),QEGVAR(weapons_core,HMRD_Green),QEGVAR(weapons_core,HMRD_Red)

#define SCOPE_LIST RCO_LIST,MRCO_LIST,HOLO_LIST,DMS_LIST,LRPS_LIST,MRD_LIST

#define SCOPE_MASS 4

#define MACRO_GUNSMOKE_EFFECT \
class GunParticles { \
    class FirstEffect { \
        positionName = "usti hlavne"; \
        directionName = "konec hlavne"; \
        effectName = QEGVAR(weapons_core,gunfire_smoke); \
    }; \
}

#define MACRO_GUNSMOKE_HP_EFFECT \
class GunParticles { \
    class FirstEffect { \
        positionName = "usti hlavne"; \
        directionName = "konec hlavne"; \
        effectName = QEGVAR(weapons_core,gunfire_smoke_hp); \
    }; \
}

#define MACRO_TRACER_SNIPPET_GENERAL(C_R,C_G,C_B) lightcolor[] = {C_R, C_G, C_B}; \
    flaresize = 5; \
    tracerscale = 0.8; \
    tracerstarttime = 0.05; \
    tracerendtime = 120; \
    brightness = 1000

#define MACRO_TRACER_SNIPPET_BLUE MACRO_TRACER_SNIPPET_GENERAL(0.25,0.25,0.5)
#define MACRO_TRACER_SNIPPET_GREEN MACRO_TRACER_SNIPPET_GENERAL(0.25,0.5,0.25)
#define MACRO_TRACER_SNIPPET_ORANGE MACRO_TRACER_SNIPPET_GENERAL(1,0.37,0)
#define MACRO_TRACER_SNIPPET_RED MACRO_TRACER_SNIPPET_GENERAL(0.5,0.25,0.25)
#define MACRO_TRACER_SNIPPET_YELLOW MACRO_TRACER_SNIPPET_GENERAL(0.5,0.5,0.25)

// ammo types
#define AMMOTYPE_NONE 0
#define AMMOTYPE_STUN 1
#define AMMOTYPE_ION 2
#define AMMOTYPE_RAGDOLL 3
#define AMMOTYPE_MEDICAL 4
#define AMMOTYPE_TRACKING 5
#define AMMOTYPE_ACID 6
#define AMMOTYPE_HACKSHOT 7
#define AMMOTYPE_RAIL 8
#define AMMOTYPE_BEANBAG 9
#define AMMOTYPE_DEFIB 10
#define AMMOTYPE_DROPPOD 11
#define AMMOTYPE_FIRE 12
