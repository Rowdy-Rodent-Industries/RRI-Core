#include "\z\ace\addons\main\script_macros.hpp"
#include "script_macros_armoury.hpp"

#define E_ADDON(var1) DOUBLES(PREFIX,var1)
#define QE_ADDON(var1) QUOTE(E_ADDON(var1))
#define QQE_ADDON(var1) QUOTE(QE_ADDON(var1))

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})
#define GET_ARRAY(config,default) (if (isArray (config)) then {getArray (config)} else {default})
#define GET_BOOL(config) (GET_NUMBER(config,0) > 0)

#define MACRO_REPEAT_2(var1) var1,var1
#define MACRO_REPEAT_3(var1) var1,var1,var1
#define MACRO_REPEAT_4(var1) var1,var1,var1,var1
#define MACRO_REPEAT_5(var1) var1,var1,var1,var1,var1
#define MACRO_REPEAT_6(var1) var1,var1,var1,var1,var1,var1
#define MACRO_REPEAT_7(var1) var1,var1,var1,var1,var1,var1,var1
#define MACRO_REPEAT_8(var1) var1,var1,var1,var1,var1,var1,var1,var1
#define MACRO_REPEAT_9(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1

// Subaddon Macros
#ifdef SUBADDON
    #undef PATHTOF
    #define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,SUBCOMPONENT\var1)

    #undef COMPILE_SCRIPT
    #define COMPILE_SCRIPT(var1) compileScript ['PATHTO_SYS(PREFIX,COMPONENT,SUBCOMPONENT\var1)']
#endif

#ifdef SUBADDON
    #define GBACKPACK(var1) TRIPLES(SUBADDON,backpack,var1)
    #define GHELMET(var1) TRIPLES(SUBADDON,helmet,var1)
    #define GNVG(var1) TRIPLES(SUBADDON,nvg,var1)
    #define GUNIFORM(var1) TRIPLES(SUBADDON,uniform,var1)
    #define GUNIT(var1) TRIPLES(SUBADDON,unit,var1)
    #define GVEST(var1) TRIPLES(SUBADDON,vest,var1)
    #define GFACEWEAR(var1) TRIPLES(SUBADDON,facewear,var1)
#else
    #define GBACKPACK(var1) TRIPLES(ADDON,backpack,var1)
    #define GHELMET(var1) TRIPLES(ADDON,helmet,var1)
    #define GNVG(var1) TRIPLES(ADDON,nvg,var1)
    #define GUNIFORM(var1) TRIPLES(ADDON,uniform,var1)
    #define GUNIT(var1) TRIPLES(ADDON,unit,var1)
    #define GVEST(var1) TRIPLES(ADDON,vest,var1)
    #define GFACEWEAR(var1) TRIPLES(ADDON,facewear,var1)
#endif

#ifdef SUBADDON
    #undef GVAR
    #define GVAR(var1) DOUBLES(SUBADDON,var1)
#endif

// Item Macros

#define QGBACKPACK(var1) QUOTE(GBACKPACK(var1))
#define QGHELMET(var1) QUOTE(GHELMET(var1))
#define QGNVG(var1) QUOTE(GNVG(var1))
#define QGUNIFORM(var1) QUOTE(GUNIFORM(var1))
#define QGUNIT(var1) QUOTE(GUNIT(var1))
#define QGVEST(var1) QUOTE(GVEST(var1))
#define QGFACEWEAR(var1) QUOTE(GFACEWEAR(var1))

#define QQGBACKPACK(var1) QUOTE(QGBACKPACK(var1))
#define QQGHELMET(var1) QUOTE(QGHELMET(var1))
#define QQGNVG(var1) QUOTE(QGNVG(var1))
#define QQGUNIFORM(var1) QUOTE(QGUNIFORM(var1))
#define QQGUNIT(var1) QUOTE(QGUNIT(var1))
#define QQGVEST(var1) QUOTE(QGVEST(var1))
#define QQGFACEWEAR(var1) QUOTE(QGFACEWEAR(var1))

#define EGBACKPACK(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),backpack,var2)
#define EGHELMET(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),helmet,var2)
#define EGNVG(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),nvg,var2)
#define EGUNIFORM(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),uniform,var2)
#define EGUNIT(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),unit,var2)
#define EGVEST(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),vest,var2)
#define EGFACEWEAR(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),facewear,var2)

#define QEGBACKPACK(var1,var2) QUOTE(EGBACKPACK(var1,var2))
#define QEGHELMET(var1,var2) QUOTE(EGHELMET(var1,var2))
#define QEGNVG(var1,var2) QUOTE(EGNVG(var1,var2))
#define QEGUNIFORM(var1,var2) QUOTE(EGUNIFORM(var1,var2))
#define QEGUNIT(var1,var2) QUOTE(EGUNIT(var1,var2))
#define QEGVEST(var1,var2) QUOTE(EGVEST(var1,var2))
#define QEGFACEWEAR(var1,var2) QUOTE(EGFACEWEAR(var1,var2))

#define QQEGBACKPACK(var1,var2) QUOTE(QEGBACKPACK(var1,var2))
#define QQEGHELMET(var1,var2) QUOTE(QEGHELMET(var1,var2))
#define QQEGNVG(var1,var2) QUOTE(QEGNVG(var1,var2))
#define QQEGUNIFORM(var1,var2) QUOTE(QEGUNIFORM(var1,var2))
#define QQEGUNIT(var1,var2) QUOTE(QEGUNIT(var1,var2))
#define QQEGVEST(var1,var2) QUOTE(QEGVEST(var1,var2))
#define QQEGFACEWEAR(var1,var2) QUOTE(QEGFACEWEAR(var1,var2))

// Weapon Macros
#define ZOOM_FACTOR(var1) 0.25/var1
#define RPM(var1) 60/var1

#define GMAG(var1) EGVAR(mag,var1)
#define QGMAG(var1) QUOTE(GMAG(var1))

#define GMAGWELL(var1) EGVAR(magwell,var1)
#define QGMAGWELL(var1) QUOTE(GMAGWELL(var1))

#define GAMMO(var1) EGVAR(ammo,var1)
#define QGAMMO(var1) QUOTE(GAMMO(var1))

#define GWEAPON(var1) EGVAR(weapon,var1)
#define QGWEAPON(var1) QUOTE(GWEAPON(var1))

// ACE Cargo
#define CARGO_XX(a,b) class _xx_##a## {type = QUOTE(a); amount = b;}

// Macros for Groundholders
#define MACRO_GH_PREAMBLE class Item_Base_F; \
class Vest_Base_F; \
class Headgear_Base_F; \
class Weapon_Base_F

#define MACRO_GH_ITEM(CLASSNAME,NAME) class CLASSNAME##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "Items"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_UNIFORM(CLASSNAME,NAME) class CLASSNAME##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsUniforms"; \
	 model = "\A3\Weapons_f\dummyweapon.p3d"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_VEST(CLASSNAME,NAME) class CLASSNAME##_GH: Vest_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsVests"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_HEADGEAR(CLASSNAME,NAME) class CLASSNAME##_GH: Headgear_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsHeadgear"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_WEAPON(CLASSNAME,MAG,NAME) class CLASSNAME##_GH: Weapon_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    class TransportWeapons { \
        MACRO_ADDWEAPON(CLASSNAME,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(MAG,1); \
    }; \
}

// updated TRACEs for feedback with systemChat
#ifdef RELEASE_BUILD
	#define CHAT_SYS(LEVEL,MESSAGE) /* disabled */
#else
	#define CHAT_SYS(LEVEL,MESSAGE) systemChat LOG_SYS_FORMAT(LEVEL,MESSAGE)
#endif

#define CHAT_SYS_FILELINENUMBERS(LEVEL,MESSAGE) CHAT_SYS(LEVEL,format [ARR_4('%1 %2:%3',MESSAGE,__FILE__,__LINE__ + 1)])

#ifdef DEBUG_MODE_FULL
	#define TRACE_CHAT_1(MESSAGE,A) TRACE_1((MESSAGE),A); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_1(str diag_frameNo + ' ' + (MESSAGE),A))
	#define TRACE_CHAT_2(MESSAGE,A,B) TRACE_2((MESSAGE),A,B); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_2(str diag_frameNo + ' ' + (MESSAGE),A,B))
	#define TRACE_CHAT_3(MESSAGE,A,B,C) TRACE_3((MESSAGE),A,B,C); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_3(str diag_frameNo + ' ' + (MESSAGE),A,B,C))
	#define TRACE_CHAT_4(MESSAGE,A,B,C,D) TRACE_4((MESSAGE),A,B,C,D); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_4(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D))
	#define TRACE_CHAT_5(MESSAGE,A,B,C,D,E) TRACE_5((MESSAGE),A,B,C,D,E); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_5(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E))
	#define TRACE_CHAT_6(MESSAGE,A,B,C,D,E,F) TRACE_6((MESSAGE),A,B,C,D,E,F); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_6(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F))
	#define TRACE_CHAT_7(MESSAGE,A,B,C,D,E,F,G) TRACE_7((MESSAGE),A,B,C,D,E,F,G); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_7(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G))
	#define TRACE_CHAT_8(MESSAGE,A,B,C,D,E,F,G,H) TRACE_8((MESSAGE),A,B,C,D,E,F,G,H); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_8(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H))
	#define TRACE_CHAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) TRACE_9((MESSAGE),A,B,C,D,E,F,G,H,I); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_9(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H,I))
	#define TRACE_CHAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) TRACE_10((MESSAGE),A,B,C,D,E,F,G,H,I,J); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_10(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H,I,J))
#else
	#define TRACE_CHAT_1(MESSAGE,A) /* disabled */
	#define TRACE_CHAT_2(MESSAGE,A,B) /* disabled */
	#define TRACE_CHAT_3(MESSAGE,A,B,C) /* disabled */
	#define TRACE_CHAT_4(MESSAGE,A,B,C,D) /* disabled */
	#define TRACE_CHAT_5(MESSAGE,A,B,C,D,E) /* disabled */
	#define TRACE_CHAT_6(MESSAGE,A,B,C,D,E,F) /* disabled */
	#define TRACE_CHAT_7(MESSAGE,A,B,C,D,E,F,G) /* disabled */
	#define TRACE_CHAT_8(MESSAGE,A,B,C,D,E,F,G,H) /* disabled */
	#define TRACE_CHAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) /* disabled */
	#define TRACE_CHAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) /* disabled */
#endif

// PATHTOF defines for referencing JLTS uniforms/characters
#define PATHTOF_JLTSE(var1) \MRC\JLTS\characters\var1
#define QPATHTOF_JLTSE(var1) QUOTE(PATHTOF_JLTSE(var1))

// For stuff that draws from core mod
#define PATHTOF_JLTSC(var1) \MRC\JLTS\Core_mod\var1
#define QPATHTOF_JLTSC(var1) QUOTE(PATHTOF_JLTSC(var1))

// For stuff that draws from JLTS weapons
#define PATHTOF_JLTSW(var1) \MRC\JLTS\weapons\var1
#define QPATHTOF_JLTSW(var1) QUOTE(PATHTOF_JLTSW(var1))

// PATHTOF defines for Legion stuff
#define PATHTOF_LS(var1) \ls_armor_bluefor\var1
#define QPATHTOF_LS(var1) QUOTE(PATHTOF_LS(var1))

#define PATHTOF_SWLB(var1) \SWLB_clones_spec\var1
#define QPATHTOF_SWLB(var1) QUOTE(PATHTOF_SWLB(var1))

#define PATHTOF_COMP(var1) PATHTOF2_SYS(PREFIX,COMPONENT,var1)
#define QPATHTOF_COMP(var1) QUOTE(PATHTOF_COMP(var1))


// Macros for Arsenal Whitelists
#define MACRO_WHITELIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 1; \
}

#define MACRO_BLACKLIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 0; \
}

// Macros for Fortify Presets
#define MACRO_FORTIFY_ADD(CLASSNAME,COST,LIMIT) class _xx_##CLASSNAME { \
    name = #CLASSNAME; \
    cost = COST; \
    limit = LIMIT; \
}

// AFM macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))
