// Base
class GUNIT(base): JLTS_Clone_P2_DC15A {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,ARC);

	ls_activeCamo_camoItem  = QGUNIT(stealth_base);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(demo_base): JLTS_Clone_P2_EOD {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper (Demo)";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,ARC);

	ls_activeCamo_camoItem  = QGUNIT(stealth_base);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(medic_base): JLTS_Clone_P2_medic {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper (Medic)";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,ARC);

	ls_activeCamo_camoItem  = QGUNIT(stealth_base);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(nco_base): JLTS_Clone_P2_corporal {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper (NCO)";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,ARC);

	ls_activeCamo_camoItem  = QGUNIT(stealth_base);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(alpha_base): GUNIT(nco_base) {
    displayName = "[SOB] Alpha-ARC";
};

class GUNIT(stealth_base): JLTS_Clone_P2_corporal {
	scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper (Stealth)";

    backpack = QEGBACKPACK(equipment_custom,arc);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,ARC);

	ls_activeCamo_enabled = 1;

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa",
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

// Ranks
class GUNIT(cadet) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] ARC Cadet";
	uniformClass = QGUNIFORM(Cadet);

	// hiddenSelectionsTextures[] = {
	// 	QPATHTOF(data\uniforms\Cadet\clone_armor1_ARC_Cadet_co.paa),
	// 	QPATHTOF(data\uniforms\Cadet\clone_armor2_ARC_Cadet_co.paa)
	// };
	linkedItems[] = {QGHELMET(Cadet),QGVEST(cadet),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Cadet),QGVEST(cadet),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(trooper) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] ARC Trooper";
	uniformClass = QGUNIFORM(trooper);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Trooper\clone_armor1_ARC_Trooper_co.paa),
		QPATHTOF(data\uniforms\Trooper\clone_armor2_ARC_Trooper_co.paa)
	};
	linkedItems[] = {QGHELMET(trooper),QGVEST(trooper),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(trooper),QGVEST(trooper),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(demo) : GUNIT(demo_base) {
	scope = 1;
	displayName = "[SOB] ARC Trooper (Demo)";
	uniformClass = QGUNIFORM(demo);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\demo\clone_armor1_ARC_demo_co.paa),
		QPATHTOF(data\uniforms\demo\clone_armor2_ARC_demo_co.paa)
	};
	linkedItems[] = {QGHELMET(demo),QGVEST(demo),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(demo),QGVEST(demo),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] ARC Trooper (Medic)";
	uniformClass = QGUNIFORM(Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Medic\clone_armor1_ARC_Medic_co.paa),
		QPATHTOF(data\uniforms\Medic\clone_armor2_ARC_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(Medic),QGVEST(medic),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Medic),QGVEST(medic),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SL) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] ARC Trooper (Squad Leader)";
	uniformClass = QGUNIFORM(SL);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\SL\clone_armor1_ARC_SL_co.paa),
		QPATHTOF(data\uniforms\SL\clone_armor2_ARC_SL_co.paa)
	};
	linkedItems[] = {QGHELMET(SL),QGVEST(sl),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SL),QGVEST(sl),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
