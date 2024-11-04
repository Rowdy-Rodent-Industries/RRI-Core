#include "\z\ace\addons\main\script_macros.hpp"

#define GVAR_CORE(var1,var2) TRIPLES(COREPREFIX,var1,var2)
#define QGVAR_CORE(var1,var2) QUOTE(GVAR_CORE(var1,var2))

#define GBACKPACK(var1) TRIPLES(ADDON,backpack,var1)
#define GHELMET(var1) TRIPLES(ADDON,helmet,var1)
#define GNVG(var1) TRIPLES(ADDON,nvg,var1)
#define GUNIFORM(var1) TRIPLES(ADDON,uniform,var1)
#define GUNIT(var1) TRIPLES(ADDON,unit,var1)
#define GVEST(var1) TRIPLES(ADDON,vest,var1)
#define GFACEWEAR(var1) TRIPLES(ADDON,facewear,var1)

#define QGBACKPACK(var1) QUOTE(GBACKPACK(var1))
#define QGHELMET(var1) QUOTE(GHELMET(var1))
#define QGNVG(var1) QUOTE(GNVG(var1))
#define QGUNIFORM(var1) QUOTE(GUNIFORM(var1))
#define QGUNIT(var1) QUOTE(GUNIT(var1))
#define QGVEST(var1) QUOTE(GVEST(var1))
#define QGFACEWEAR(var1) QUOTE(GFACEWEAR(var1))

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

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})
#define GET_ARRAY(config,default) (if (isArray (config)) then {getArray (config)} else {default})

#define ARR_9(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8,ARG9) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9

// Macros for Arsenal Whitelists
#define MACRO_WHITELIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 1; \
}

#define MACRO_BLACKLIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 0; \
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

// weapon things
#define ZOOM_FACTOR(var1) 0.25/var1
#define RPM(var1) 60/var1

// AFM macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))