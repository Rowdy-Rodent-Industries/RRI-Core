#define LOCKER_MACRO(var_name,var_prefix,var_type) \
class GVAR(##var_prefix##) : GVAR(base) { \
    scope = 2; \
    displayName = QUOTE([SOB] var_name Locker); \
    hiddenSelectionsmaterials[] = { \
        QPATHTOF(data\##var_prefix##\door.rvmat), \
        QPATHTOF(data\##var_prefix##\locker.rvmat) \
        }; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\##var_prefix##\Door_CO.paa), \
        QPATHTOF(data\##var_prefix##\locker_CO.paa) \
        }; \
    editorPreview = QPATHTOF(data\editorpreviews\##var_prefix##.jpg);\
    mti_armoury_type = ##var_type##;\
}

#define INJECTOR_MACRO(var_name,var_prefix) \
class GVAR(Injector_##var_prefix##): GVAR(Injector_Base) { \
    scope = 2;\
    author = AUTHOR;\
    picture = "";\
    displayName = QUOTE([SOB] var_name Injector);\
    descriptionShort = QUOTE(var_name Injector used by the Special Operations Brigade); \
    hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\##var_prefix##\##var_prefix##.rvmat)};\
    hiddenSelectionsTextures[] = {QPATHTOF(data\injector\##var_prefix##\##var_prefix##_CO.paa)};\
    editorPreview = QPATHTOF(data\editorpreviews\##var_prefix##.jpg);\
}

#define SMOKE_GRENADE_MACRO(var1) \
class GVAR(smoke_grenade_##var1##): GVAR(smoke_grenade) { \
    scope = 2;\
    author = AUTHOR;\
    picture = "";\
    displayName = QUOTE([SOB] var1 Smoke Grenade);\
    descriptionShort = QUOTE(var1 Smoke Grenade used by the Special Operations Brigade); \
    hiddenSelectionsTextures[] = {QPATHTOF(data\smokegrenade\SmokeGrenade_##var1##_CO.paa)};\
    editorPreview = QPATHTOF(data\editorpreviews\smokegrenade_##var1##.jpg);\
}

#define LITTER_MACRO_INJECTOR(var_prefix)\
class GVAR(litter_##var_prefix##): GVAR(litter_injector){\
    hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\##var_prefix##\##var_prefix##.rvmat)};\
    hiddenSelectionsTextures[] = {QPATHTOF(data\injector\##var_prefix##\##var_prefix##_CO.paa)};\
}

#define MACRO_CRATE_DC(var1) \
class GVAR(DOUBLES(double_closed,var1)): GVAR(double_closed) { \
    displayName = QUOTE([SOB] Double Crate (ARR_2(var1,Closed))); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\supplycrate\crate_##var1##_co.paa), \
        QPATHTOF(data\supplycrate\screens\screen_empty_co.paa), \
        QPATHTOF(data\supplycrate\decals\decal_blank_co.paa) \
    }; \
    editorPreview = QPATHTOF(data\editorpreviews\##var1##.jpg);\
}
#define MACRO_CRATE_DO(var1) \
class GVAR(DOUBLES(double_open,var1)): GVAR(double_open) { \
    displayName = QUOTE([SOB] Double Crate (ARR_2(var1,Open))); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\supplycrate\crate_##var1##_co.paa), \
        QPATHTOF(data\supplycrate\screens\screen_empty_co.paa), \
        QPATHTOF(data\supplycrate\decals\decal_blank_co.paa) \
    }; \
    editorPreview = QPATHTOF(data\editorpreviews\##var1##.jpg);\
}
#define MACRO_CRATE_SC(var1) \
class GVAR(DOUBLES(single_closed,var1)): GVAR(single_closed) { \
    displayName = QUOTE([SOB] Single Crate (ARR_2(var1,Closed))); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\supplycrate\crate_##var1##_co.paa), \
        QPATHTOF(data\supplycrate\screens\screen_empty_co.paa), \
        QPATHTOF(data\supplycrate\decals\decal_blank_co.paa) \
    }; \
    editorPreview = QPATHTOF(data\editorpreviews\##var1##.jpg);\
}
#define MACRO_CRATE_SO(var1) \
class GVAR(DOUBLES(single_open,var1)): GVAR(single_open) { \
    displayName = QUOTE([SOB] Single Crate (ARR_2(var1,Open))); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\supplycrate\crate_##var1##_co.paa), \
        QPATHTOF(data\supplycrate\screens\screen_empty_co.paa), \
        QPATHTOF(data\supplycrate\decals\decal_blank_co.paa) \
    }; \
    editorPreview = QPATHTOF(data\editorpreviews\##var1##.jpg);\
}

#define MACRO_DROPPOD_OPEN(var1) \
class GVAR(droppod_##var1##_closed): GVAR(Droppod_closed) { \
    displayName = QUOTE([SOB] var1 Droppod (Closed)); \
    hiddenSelectionsTextures[] ={\
        QPATHTOF(data\droppods\variants\camo1_##var1##_CO.paa),\
        QPATHTOF(data\droppods\base\camo2_CO.paa),\
    };\
    editorPreview = QPATHTOF(data\editorpreviews\droppod.jpg);\
}

#define MACRO_DROPPOD_CLOSED(var1) \
class GVAR(droppod_##var1##_open): GVAR(Droppod_open) {\
    displayName = QUOTE([SOB] var1 Droppod (Open));\
    hiddenSelectionsTextures[] ={\
        QPATHTOF(data\droppods\variants\camo1_##var1##_CO.paa),\
        QPATHTOF(data\droppods\base\camo2_CO.paa),\
    };\
    editorPreview = QPATHTOF(data\editorpreviews\droppod.jpg);\
}

#define MACRO_DROPPOD(var1) \
MACRO_DROPPOD_OPEN(var1);\
MACRO_DROPPOD_CLOSED(var1)

#define MACRO_CRATE_ALL(var1) \
MACRO_CRATE_DC(var1); \
MACRO_CRATE_DO(var1); \
MACRO_CRATE_SC(var1); \
MACRO_CRATE_SO(var1)
