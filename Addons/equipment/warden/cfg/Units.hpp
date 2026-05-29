// Base
class GUNIT(base): JLTS_Clone_P2_DC15A {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Field Support Trooper";

    backpack = QGBACKPACK(fsb_trooper);
    uniformClass = QGUNIFORM(base);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,FieldSupport);

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
    displayName = "[SOB] Field Support Medic";

    backpack = QGBACKPACK(fsb_medic);
    uniformClass = QGUNIFORM(base);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,FieldSupport);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

// Variants
class GUNIT(Trooper) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Field Support Trooper";
	uniformClass = QGUNIFORM(Trooper);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Trooper\Clone_armor1_Field_Support_Trooper_co.paa),
		QPATHTOF(data\uniforms\Trooper\Clone_armor2_Field_Support_Trooper_co.paa)
	};
	linkedItems[] = {QGHELMET(Trooper),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Trooper),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Field Support Medic";
	uniformClass = QGUNIFORM(Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Medic\clone_armor1_FieldSupport_Medic_co.paa),
		QPATHTOF(data\uniforms\Medic\clone_armor2_FieldSupport_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(Medic),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Medic),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

// Rank Variants

class GUNIT(CT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (CT)";
	uniformClass = QGUNIFORM(CT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\CT\Clone_armor1_CT_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\CT\Clone_armor2_CT_co.paa)
	};
	linkedItems[] = {QGHELMET(CT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SCT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (SCT)";
	uniformClass = QGUNIFORM(SCT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\SCT\Clone_armor1_SCT_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\SCT\Clone_armor2_SCT_co.paa)
	};
	linkedItems[] = {QGHELMET(SCT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SCT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(VCT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (VCT)";
	uniformClass = QGUNIFORM(VCT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\VCT\Clone_armor1_VCT_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\VCT\Clone_armor2_VCT_co.paa)
	};
	linkedItems[] = {QGHELMET(VCT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(VCT),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(WO4) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (WO4)";
	uniformClass = QGUNIFORM(WO4);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\WO4\Clone_armor1_WO4_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\WO4\Clone_armor2_WO4_co.paa)
	};
	linkedItems[] = {QGHELMET(WO4),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(WO4),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(WO3) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (WO3)";
	uniformClass = QGUNIFORM(WO3);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\WO3\Clone_armor1_WO3_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\WO3\Clone_armor2_WO3_co.paa)
	};
	linkedItems[] = {QGHELMET(WO3),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(WO3),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(WO2) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (WO2)";
	uniformClass = QGUNIFORM(WO2);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\WO2\Clone_armor1_WO2_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\WO2\Clone_armor2_WO2_co.paa)
	};
	linkedItems[] = {QGHELMET(WO2),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(WO2),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(WO1) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (WO1)";
	uniformClass = QGUNIFORM(WO1);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\WO1\Clone_armor1_WO1_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\WO1\Clone_armor2_WO1_co.paa)
	};
	linkedItems[] = {QGHELMET(WO1),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(WO1),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(WOC) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Warden Trooper (WOC)";
	uniformClass = QGUNIFORM(WOC);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Trooper\rank\WOC\Clone_armor1_WOC_co.paa),
		QPATHTOF(data\Uniforms\Trooper\rank\WOC\Clone_armor2_WOC_co.paa)
	};
	linkedItems[] = {QGHELMET(WOC),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(WOC),QGVEST(base_FS),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

// Clone Characters

class GUNIT(Trigger): GUNIT(base) {
	scope = 2;
	displayName = "[SOB] Clone Pilot (Trigger)";
	uniformClass = QGUNIFORM(Trigger);
	genericNames = "Trigger";

	editorPreview = QPATHTOF(data\ui\editorPreviews\pilot_trigger.jpg);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Trigger\Clone_armor1_Trigger_co.paa),
		QPATHTOF(data\uniforms\Trigger\Clone_armor2_Trigger_co.paa)
	};

	linkedItems[] = {QGHELMET(P1_Trigger),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(P1_Trigger),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Arrow): GUNIT(base) {
	scope = 2;
	displayName = "[SOB] Clone Pilot (Arrow)";
	uniformClass = QGUNIFORM(Arrow);
	genericNames = "Arrow";

	editorPreview = QPATHTOF(data\ui\editorPreviews\pilot_arrow.jpg);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Arrow\Clone_armor1_Arrow_co.paa),
		QPATHTOF(data\uniforms\Arrow\Clone_armor2_Arrow_co.paa)
	};

	linkedItems[] = {QGHELMET(P1_Arrow),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(P1_Arrow),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Bow): GUNIT(base) {
	scope = 2;
	displayName = "[SOB] Clone Pilot (Bow)";
	uniformClass = QGUNIFORM(Bow);
	genericNames = "Bow";

	editorPreview = QPATHTOF(data\ui\editorPreviews\pilot_bow.jpg);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Bow\Clone_armor1_Bow_co.paa),
		QPATHTOF(data\uniforms\Bow\Clone_armor2_Bow_co.paa)
	};

	linkedItems[] = {QGHELMET(P1_Bow),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(P1_Bow),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
