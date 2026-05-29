// Base
class GUNIT(base): JLTS_Clone_P2_DC15A {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Clone Trooper";

    backpack = QGBACKPACK(belt_bag);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(eod_base): JLTS_Clone_P2_EOD {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Clone Trooper (EOD)";

    backpack = QGBACKPACK(eod);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

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
    displayName = "[SOB] Clone Trooper (Medic)";

    backpack = QGBACKPACK(medic);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

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
    displayName = "[SOB] Clone Trooper (NCO)";

    backpack = QGBACKPACK(RTO_pack);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(co_base): JLTS_Clone_P2_lieutenant {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Clone Trooper (CO)";

    backpack = QGBACKPACK(LR_attachment);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(mc_base): JLTS_Clone_P2_marshalcommander {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Clone Marshal Commander";

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

// Ranks
class GUNIT(CT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CT)";
	uniformClass = QGUNIFORM(CT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CT\clone_armor1_CT_co.paa),
		QPATHTOF(data\uniforms\rank\CT\clone_armor2_CT_co.paa)
	};
	linkedItems[] = {QGHELMET(CT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CR) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Clone Recruit";
	uniformClass = QGUNIFORM(CR);

	linkedItems[] = {QGHELMET(CR),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CR),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CT_EOD) : GUNIT(eod_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CT, EOD)";
	uniformClass = QGUNIFORM(CT_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CT_EOD\clone_armor1_CT_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\CT_EOD\clone_armor2_CT_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(CT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CT_Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CT, Medic)";
	uniformClass = QGUNIFORM(CT_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CT_Medic\clone_armor1_CT_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\CT_Medic\clone_armor2_CT_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(CT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SCT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (SCT)";
	uniformClass = QGUNIFORM(SCT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\SCT\clone_armor1_SCT_co.paa),
		QPATHTOF(data\uniforms\rank\SCT\clone_armor2_SCT_co.paa)
	};
	linkedItems[] = {QGHELMET(SCT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SCT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SCT_EOD) : GUNIT(eod_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (SCT, EOD)";
	uniformClass = QGUNIFORM(SCT_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\SCT_EOD\clone_armor1_SCT_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\SCT_EOD\clone_armor2_SCT_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(SCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SCT_Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (SCT, Medic)";
	uniformClass = QGUNIFORM(SCT_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\SCT_Medic\clone_armor1_SCT_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\SCT_Medic\clone_armor2_SCT_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(SCT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SCT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(VCT) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (VCT)";
	uniformClass = QGUNIFORM(VCT);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\VCT\clone_armor1_VCT_co.paa),
		QPATHTOF(data\uniforms\rank\VCT\clone_armor2_VCT_co.paa)
	};
	linkedItems[] = {QGHELMET(VCT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(VCT),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(VCT_EOD) : GUNIT(eod_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (VCT, EOD)";
	uniformClass = QGUNIFORM(VCT_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\VCT_EOD\clone_armor1_VCT_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\VCT_EOD\clone_armor2_VCT_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(VCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(VCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(VCT_Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (VCT, Medic)";
	uniformClass = QGUNIFORM(VCT_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\VCT_Medic\clone_armor1_VCT_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\VCT_Medic\clone_armor2_VCT_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(VCT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(VCT_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CSP) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CSP)";
	uniformClass = QGUNIFORM(CSP);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CSP\clone_armor1_CSP_co.paa),
		QPATHTOF(data\uniforms\rank\CSP\clone_armor2_CSP_co.paa)
	};
	linkedItems[] = {QGHELMET(CSP),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CSP),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CSP_EOD) : GUNIT(eod_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CSP, EOD)";
	uniformClass = QGUNIFORM(CSP_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CSP_EOD\clone_armor1_CSP_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\CSP_EOD\clone_armor2_CSP_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(VCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(VCT_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CSP_Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CSP, Medic)";
	uniformClass = QGUNIFORM(CSP_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CSP_Medic\clone_armor1_CSP_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\CSP_Medic\clone_armor2_CSP_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(CSP_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CSP_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CLC) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CLC)";
	uniformClass = QGUNIFORM(CLC);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CLC\clone_armor1_CLC_co.paa),
		QPATHTOF(data\uniforms\rank\CLC\clone_armor2_CLC_co.paa)
	};
	linkedItems[] = {QGHELMET(CLC),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CLC),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CLC_Medic) : GUNIT(medic_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CLC, Medic)";
	uniformClass = QGUNIFORM(CLC_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CLC_Medic\clone_armor1_CLC_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\CLC_Medic\clone_armor2_CLC_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(CLC_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CLC_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CLC_EOD) : GUNIT(eod_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CLC, EOD)";
	uniformClass = QGUNIFORM(CLC_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CLC_EOD\clone_armor1_CLC_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\CLC_EOD\clone_armor2_CLC_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(CLC_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CLC_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};


class GUNIT(CP) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CP)";
	uniformClass = QGUNIFORM(CP);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CP\clone_armor1_CP_co.paa),
		QPATHTOF(data\uniforms\rank\CP\clone_armor2_CP_co.paa)
	};
	linkedItems[] = {QGHELMET(CP),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CP),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CP_Medic) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CP, Medic)";
	uniformClass = QGUNIFORM(CP_Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CP_Medic\clone_armor1_CP_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\CP_Medic\clone_armor2_CP_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(CP_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CP_Medic),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CP_EOD) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CP, EOD)";
	uniformClass = QGUNIFORM(CP_EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CP_EOD\clone_armor1_CP_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\CP_EOD\clone_armor2_CP_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(CP_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CP_EOD),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CS) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CS)";
	uniformClass = QGUNIFORM(CS);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CS\clone_armor1_CS_co.paa),
		QPATHTOF(data\uniforms\rank\CS\clone_armor2_CS_co.paa)
	};
	linkedItems[] = {QGHELMET(CS),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CS),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CSM) : GUNIT(nco_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CSM)";
	uniformClass = QGUNIFORM(CSM);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CSM\clone_armor1_CSM_co.paa),
		QPATHTOF(data\uniforms\rank\CSM\clone_armor2_CSM_co.paa)
	};
	linkedItems[] = {QGHELMET(CSM),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CSM),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(CL) : GUNIT(co_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (CL)";
	uniformClass = QGUNIFORM(CL);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\CL\clone_armor1_CL_co.paa),
		QPATHTOF(data\uniforms\rank\CL\clone_armor2_CL_co.paa)
	};
	linkedItems[] = {QGHELMET(CL),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(CL),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Captain) : GUNIT(co_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (Captain)";
	uniformClass = QGUNIFORM(Captain);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\Captain\clone_armor1_Captain_co.paa),
		QPATHTOF(data\uniforms\rank\Captain\clone_armor2_Captain_co.paa)
	};
	linkedItems[] = {QGHELMET(Captain),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Captain),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Commander) : GUNIT(co_base) {
	scope = 1;
	displayName = "[SOB] Clone Trooper (Commander)";
	uniformClass = QGUNIFORM(Commander);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\Commander\clone_armor1_Commander_co.paa),
		QPATHTOF(data\uniforms\rank\Commander\clone_armor2_Commander_co.paa)
	};
	linkedItems[] = {QGHELMET(Commander),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Commander),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(elite) : GUNIT(base) {
	scope = 1;
	displayName = "[SOB] Elite Squad Trooper";
	uniformClass = QGUNIFORM(elite);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\Elite\clone_armor1_Elite_co.paa),
		QPATHTOF(data\uniforms\Elite\clone_armor2_Elite_co.paa)
	};
	linkedItems[] = {QGHELMET(elite),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(elite),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(holo): ls_gar_phase2Hologram_base {
	scope = 2;
	scopeCurator = 2;
    author = AUTHOR;
    displayName = "[SOB] Clone Trooper Hologram";

    backpack = "ls_droidBackpack_b1_antenna_hologram";

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;

	linkedItems[] = {"ls_gar_arcHologram_helmet","ls_gar_phase2Hologram_uniform",QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {"ls_gar_arcHologram_helmet","ls_gar_phase2Hologram_uniform",QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
