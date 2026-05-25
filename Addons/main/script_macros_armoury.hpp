#define COREPREFIX mti
#define IS_CORE_LOADED (GVARMAIN(coreLoaded))

#define GVAR_CORE(var1,var2) TRIPLES(COREPREFIX,var1,var2)
#define QGVAR_CORE(var1,var2) QUOTE(GVAR_CORE(var1,var2))
#define QQGVAR_CORE(var1,var2) QUOTE(QGVAR_CORE(var1,var2))

#define FUNC_CORE_SYS(var1,var2) TRIPLES(DOUBLES(COREPREFIX,var1),fnc,var2)

// FUNC_CORE(var1,var2,var3) checks if mti core is loaded and returns a default value var3 if the function mti_var1_fnc_var2 is not available
#define FUNC_CORE(var1,var2,var3) (if (IS_CORE_LOADED) then { FUNC_CORE_SYS(var1,var2)} else { (compile QUOTE(var3)) })
#define C_FUNC_CORE(var1,var2,var3) (if (IS_CORE_LOADED) then { FUNC_CORE_SYS(var1,var2)} else { (compile QUOTE(QUOTE(var3))) })
#define QFUNC_CORE(var1,var2) QUOTE(FUNC_CORE_SYS(var1,var2))
