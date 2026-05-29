
// Base Variants
class GHELMET(Trooper) : EGHELMET(equipment_trooper,p2_base) {
	scope = 0;
	displayName = "[SOB] Warden P2 Helmet (CT)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\helmets\Clone_helmet_P2_fs_co.paa)
	};

	picture = QPATHTOEF(equipment,trooper\data\ui\P2Spec1.paa);

	// class XtdGearInfo {
	// 	model = QGVAR(helmet);
	// 	rank = "CT";
	// 	camo = "P2";
	// };
};

class GHELMET(Medic) : EGHELMET(equipment_trooper,base) {
	scope = 0;
	displayName = "[SOB] Field Support Helmet (Medic)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\helmets\SpecOpsHelmet_FS_Medic_CO.paa),
		"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\LR_Antenna_co.paa",
		QPATHTOF(data\helmets\SpecOpsHelmet_FS_Medic_CO.paa)
	};

	// class XtdGearInfo {
	// 	model = QGVAR(helmet);
	// 	type = "Trooper";
	// 	camo = "Medic";
	// };
};

class GHELMET(tanker_base) : EGHELMET(equipment_custom,Tanker) {
	scope = 0;
	displayName = "[SOB] Field Support Tanker Helmet (Trooper)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Clone_helmet_tanker_fs_co.paa),QPATHTOEF(equipment,custom\data\helmets\tanker\Visor_CO.paa)};

	picture = QPATHTOEF(equipment,trooper\data\ui\P2Spec1.paa);

	// class XtdGearInfo {
	// 	model = QGVAR(helmet);
	// 	type = "Tanker";
	// 	camo = "Trooper";
	// };
};

class GHELMET(tanker_Medic) : EGHELMET(equipment_custom,Tanker) {
	scope = 0;
	displayName = "[SOB] Field Support Tanker Helmet (Medic)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Clone_helmet_tanker_medic_co.paa),QPATHTOEF(equipment,custom\data\helmets\tanker\Visor_CO.paa)};

	// class XtdGearInfo {
	// 	model = QGVAR(helmet);
	// 	type = "Tanker";
	// 	camo = "Medic";
	// };
};

class GHELMET(P1_base): LSEA_Helmet_Pilot_P1_Base {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Warden Pilot Helmet P1";
	subItems[] = {};

	picture = QPATHTOF(data\ui\P1pilot1.paa);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;
	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"pilot"};
};

class GHELMET(P1_illum_base): LSEA_Helmet_Pilot_P1_Base_Illum {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Warden Pilot Helmet P1";
	subItems[] = {};

	picture = QPATHTOF(data\ui\P1pilot1.paa);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;
	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"pilot"};
};

// Rank Versions Tanker

class GHELMET(tanker_CT) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (CT)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_CT_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "CT";
		camo = "Tanker";
	};
};

class GHELMET(tanker_SCT) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (SCT)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_SCT_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "SCT";
		camo = "Tanker";
	};
};

class GHELMET(tanker_VCT) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (VCT)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_VCT_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "VCT";
		camo = "Tanker";
	};
};

class GHELMET(tanker_WO1) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (WO1)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_WO1_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO1";
		camo = "Tanker";
	};
};

class GHELMET(tanker_WO2) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (WO2)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_WO2_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO2";
		camo = "Tanker";
	};
};

class GHELMET(tanker_WO3) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (WO3)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_WO3_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO3";
		camo = "Tanker";
	};
};

class GHELMET(tanker_WO4) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (WO4)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_WO4_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO4";
		camo = "Tanker";
	};
};

class GHELMET(tanker_WOC) : GHELMET(tanker_base) {
	scope = 2;
	displayName = "[SOB] Warden Tanker Helmet (WOC)";
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\rank\TankerHelmet_WOC_co.paa)
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WOC";
		camo = "Tanker";
	};
};

//Rank Pilot
class GHELMET(pilot_CT): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (CT)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\CT\PilotHelmet_CT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\CT\PilotHelmet_LifeSupport_CT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\CT\PilotHelmet_CT_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "CT";
		camo = "Pilot";
	};
};

class GHELMET(pilot_SCT): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (SCT)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\SCT\PilotHelmet_SCT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\SCT\PilotHelmet_LifeSupport_SCT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\SCT\PilotHelmet_SCT_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "SCT";
		camo = "Pilot";
	};
};

class GHELMET(pilot_VCT): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (VCT)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\VCT\PilotHelmet_VCT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\VCT\PilotHelmet_LifeSupport_VCT_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\VCT\PilotHelmet_VCT_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "VCT";
		camo = "Pilot";
	};
};

class GHELMET(pilot_WO4): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (WO4)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\WO4\PilotHelmet_WO4_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO4\PilotHelmet_LifeSupport_WO4_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO4\PilotHelmet_WO4_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO4";
		camo = "Pilot";
	};
};

class GHELMET(pilot_WO3): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (WO3)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\WO3\PilotHelmet_WO3_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO3\PilotHelmet_LifeSupport_WO3_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO3\PilotHelmet_WO3_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO3";
		camo = "Pilot";
	};
};

class GHELMET(pilot_WO2): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (WO2)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\WO2\PilotHelmet_WO2_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO2\PilotHelmet_LifeSupport_WO2_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO2\PilotHelmet_WO2_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO2";
		camo = "Pilot";
	};
};

class GHELMET(pilot_WO1): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (WO1)";

	hiddenSelectionsTextures[] = {

		QPATHTOF(data\Helmets\P1_Ranks\WO1\PilotHelmet_WO1_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO1\PilotHelmet_LifeSupport_WO1_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WO1\PilotHelmet_WO1_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WO1";
		camo = "Pilot";
	};
};

class GHELMET(pilot_WOC): GHELMET(P1_base) {
    scope = 2;
	displayName = "[SOB] Warden Pilot Helmet P1 (WOC)";

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Helmets\P1_Ranks\WOC\PilotHelmet_WOC_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WOC\PilotHelmet_LifeSupport_WOC_co.paa),
		QPATHTOF(data\Helmets\P1_Ranks\WOC\PilotHelmet_WOC_co.paa),
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		rank = "WOC";
		camo = "Pilot";
	};
};
