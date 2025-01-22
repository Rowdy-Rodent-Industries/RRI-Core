#define COMPONENT equipment
#define COMPONENT_BEAUTIFIED equipment
#include "\z\rri\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_EQUIPMENT
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_EQUIPMENT
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EQUIPMENT
#endif

#define HELMET_PROTECTION \
        class HitpointsProtectionInfo {\
            class Head {\
                armor = 8;\
                hitpointName = "HitHead";\
                passThrough = 0.5;\
            };\
        }

#define HEARING_PROTECTION 0.80
#define HEARING_MUFFLING 0.50

#define HELMET_ACE_HEARING ace_hearing_protection = HEARING_PROTECTION;\
ace_hearing_lowerVolume = HEARING_MUFFLING

#define BACKPACK_MAXLOAD 400
#define LR_RANGE 25000

#define UNIFORM_SUPPLYCLASS QUOTE(Supply120)

#define VEST_SUPPLYCLASS QUOTE(Supply300)

#define VEST_PROTECTION \
        class HitpointsProtectionInfo {\
			class Chest {\
				HitpointName = "HitChest";\
				armor = 9;\
				PassThrough = 0.3;\
			};\
			class Legs {\
				hitpointName = "HitLegs";\
				armor = 9;\
				passThrough = 0.3;\
			};\
			class Arms {\
				hitpointName = "HitArms";\
				armor = 4;\
				passThrough = 0.3;\
			};\
		}

#define UNIT_ARMOR 2
#define UNIT_ARMOR_STRUCTURAL 4
#define UNIT_EXPLOSION_SHIELDING 0.4
#define UNIT_MIN_TOTAL_DAMAGE_THRESHOLD 0.001
#define UNIT_IMPACT_DAMAGE_MULTIPLIER 0.5

#define UNIT_HITPOINTS class HitPoints { \
	class HitFace { \
		armor = 1; \
		material = -1; \
		name = "face_hub"; \
		passThrough = 0.8; \
		radius = 0.08; \
		explosionShielding = 0.1; \
		minimalHit = 0.01; \
	}; \
	class HitNeck: HitFace { \
		armor = 1; \
		material = -1; \
		name = "neck"; \
		passThrough = 0.8; \
		radius = 0.1; \
		explosionShielding = 0.5; \
		minimalHit = 0.01; \
	}; \
	class HitHead: HitNeck { \
		armor = 1; \
		material = -1; \
		name = "head"; \
		passThrough = 0.8; \
		radius = 0.2; \
		explosionShielding = 0.5; \
		minimalHit = 0.01; \
		depends = "HitFace max HitNeck"; \
	}; \
	class HitPelvis: HitHead { \
		armor = 8; \
		material = -1; \
		name = "pelvis"; \
		passThrough = 0.8; \
		radius = 0.24; \
		explosionShielding = 3; \
		visual = "injury_body"; \
		minimalHit = 0.01; \
		depends = ""; \
	}; \
	class HitAbdomen: HitPelvis { \
		armor = 6; \
		material = -1; \
		name = "spine1"; \
		passThrough = 0.8; \
		radius = 0.16; \
		explosionShielding = 3; \
		visual = "injury_body"; \
		minimalHit = 0.01; \
	}; \
	class HitDiaphragm: HitAbdomen { \
		armor = 6; \
		material = -1; \
		name = "spine2"; \
		passThrough = 0.33; \
		radius = 0.18; \
		explosionShielding = 6; \
		visual = "injury_body"; \
		minimalHit = 0.01; \
	}; \
	class HitChest: HitDiaphragm { \
		armor = 8; \
		material = -1; \
		name = "spine3"; \
		passThrough = 0.33; \
		radius = 0.18; \
		explosionShielding = 6; \
		visual = "injury_body"; \
		minimalHit = 0.01; \
	}; \
	class HitBody: HitChest { \
		armor = 1000; \
		material = -1; \
		name = "body"; \
		passThrough = 1; \
		radius = 0; \
		explosionShielding = 6; \
		visual = "injury_body"; \
		minimalHit = 0.01; \
		depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
	}; \
	class HitArms: HitBody { \
		armor = 6; \
		material = -1; \
		name = "arms"; \
		passThrough = 1; \
		radius = 0.1; \
		explosionShielding = 3; \
		visual = "injury_hands"; \
		minimalHit = 0.01; \
		depends = "0"; \
	}; \
	class HitHands: HitArms { \
		armor = 6; \
		material = -1; \
		name = "hands"; \
		passThrough = 1; \
		radius = 0.1; \
		explosionShielding = 1; \
		visual = "injury_hands"; \
		minimalHit = 0.01; \
		depends = "HitArms"; \
	}; \
	class HitLegs: HitHands { \
		armor = 6; \
		material = -1; \
		name = "legs"; \
		passThrough = 1; \
		radius = 0.14; \
		explosionShielding = 3; \
		visual = "injury_legs"; \
		minimalHit = 0.01; \
		depends = "0"; \
	}; \
	class Incapacitated: HitLegs { \
		armor = 1000; \
		material = -1; \
		name = "body"; \
		passThrough = 1; \
		radius = 0; \
		explosionShielding = 3; \
		visual = ""; \
		minimalHit = 0; \
		depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
	}; \
	class HitLeftArm { \
		armor = 6; \
		material = -1; \
		name = "hand_l"; \
		passThrough = 1; \
		radius = 0.08; \
		explosionShielding = 3; \
		visual = "injury_hands"; \
		minimalHit = 0.01; \
	}; \
	class HitRightArm: HitLeftArm { \
		name = "hand_r"; \
	}; \
	class HitLeftLeg { \
		armor = 6; \
		material = -1; \
		name = "leg_l"; \
		passThrough = 1; \
		radius = 0.1; \
		explosionShielding = 3; \
		visual = "injury_legs"; \
		minimalHit = 0.01; \
	}; \
	class HitRightLeg: HitLeftLeg { \
		name = "leg_r"; \
	}; \
    class ACE_HDBracket { \
        armor = 1; \
        material = -1; \
        name = "head"; \
        passThrough = 0; \
        radius = 1; \
        explosionShielding = 1; \
        visual = ""; \
        minimalHit = 0; \
        depends = "HitHead"; \
    };\
}

//Helmets
#define MACRO_RANK_HELMET(var1,var2,var3) class GHELMET(##var2##_##var3##): GHELMET(##var2##) {\
	scope = ##var1##;\
	scopeArsenal = ##var1##;\
	author = AUTHOR;\
	displayName = QUOTE((41st) ##var2## ##var3## Helmet);\
	hiddenSelections[]=\
	{\
		"camo1","visor"\
	};\
	hiddenSelectionsTextures[]=\
	{\
		QPATHTOF(data\Helmets\##var2##\Rank\##var2##_##var3##_CO.paa),"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"\
	};\
	class XtdGearInfo {\
        model = QGVAR(helmet);\
        Type = QUOTE(##var2##);\
		Rank = QUOTE(##var3##);\
    };\
}

#define MACRO_Custom_Helmet(var1,var2,var3) class GHELMET(##var2##): GHELMET(##var3##) {\
	scope = ##var1##;\
	scopeArsenal = ##var1##;\
	author = AUTHOR;\
	displayName = QUOTE((41st) ##var2## ##var3## Helmet);\
	hiddenSelections[]=\
	{\
		"camo1","visor"\
	};\
	hiddenSelectionsTextures[]=\
	{\
		QPATHTOF(data\helmets\##var3##\Custom\##var3##_##var2##_CO.paa)\
	};\
}

// Uniforms
#define MACRO_UNIFORM(var1,var2)class GUNIFORM(##var1##_##var2##): GUNIFORM(Base){\
	scope = 2;\
	scopeArsenal = 2;\
	author = AUTHOR;\
	displayName = QUOTE((41st) ##var1## Uniform (##var2##));\
	class ItemInfo: ItemInfo {\
		uniformClass = QGUNIT(##var1##_##var2##);\
	};\
	class XtdGearInfo {\
        model = QGVAR(Uniforms);\
        Type = QUOTE(##var1##);\
		Rank = QUOTE(##var2##);\
    };\
}

// Units
#define MACRO_RANK_UNIT(var1,var2) class GUNIT(##var1##_##var2##): GUNIT(Base){\
	scope = 2;\
	scopeArsenal = 2;\
	displayName = QUOTE((41st) ##var1## Trooper (##var2##));\
	uniformClass = QGUNIFORM(##var1##_##var2##);\
	side = 1;\
    faction = QEGVAR(faction,41st);\
	editorCategory = QEGVAR(edcat,41st);\
    editorSubcategory = QEGVAR(edsubcat,##var1##);\
	hiddenSelectionsTextures[]=\
	{\
		QPATHTOF(data\uniforms\##var1##\Ranks\##var2##_Armor_##var1##_Upper_CO.paa),\
		QPATHTOF(data\uniforms\##var1##\Ranks\##var2##_Armor_##var1##_Lower_CO.paa),\
		"SFA_Equipment_R\Uniform\Havoc\data\Havoc_Undersuit_co.paa"\
	};\
	linkedItems[] = {QGHELMET(##var1##_##var2##),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};\
	respawnLinkedItems[] = {QGHELMET(##var1##_##var2##),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};\
	UNIT_HITPOINTS;\
}

#define MACRO_CUSTOM_UNIT(var1,var2) class GUNIT(##var1##_##var2##): GUNIT(Base){\
	scope = 2;\
	scopeArsenal = 2;\
	displayName = QUOTE((41st) ##var1## Trooper (##var2##));\
	uniformClass = QGUNIFORM(##var1##_##var2##);\
	side = 1;\
    faction = QEGVAR(faction,41st);\
	editorCategory = QEGVAR(edcat,41st);\
    editorSubcategory = QEGVAR(edsubcat,##var1##);\
	hiddenSelectionsTextures[]=\
	{\
		QPATHTOF(data\uniforms\##var1##\Custom\##var2##_Armor_##var1##_Upper_CO.paa),\
		QPATHTOF(data\uniforms\##var1##\Custom\##var2##_Armor_##var1##_Lower_CO.paa),\
		"SFA_Equipment_R\Uniform\Havoc\data\Havoc_Undersuit_co.paa"\
	};\
	linkedItems[] = {QGHELMET(##var1##_##var2##),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};\
	respawnLinkedItems[] = {QGHELMET(##var1##_##var2##),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};\
	UNIT_HITPOINTS;\
}


#include "\z\rri\addons\main\script_macros.hpp"