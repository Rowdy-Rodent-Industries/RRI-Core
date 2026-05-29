class GBACKPACK(arc): B_Kitbag_rgr {
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Backpack";
    maximumLoad = BACKPACK_MAXLOAD;

	model = QPATHTOF(data\backpacks\arc_backpack.p3d);
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\arc\camo1_co.paa),
		QPATHTOF(data\backpacks\arc\camo2_co.paa)
	};
	ls_activeCamo_camoItem = QEGBACKPACK(equipment_arc,stealth);

	picture = QPATHTOF(data\ui\ARCBackpack.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasTaser) = 1;
	GVAR_CORE(mm9,hasMM9) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};
};

class GBACKPACK(arc_noBracer): GBACKPACK(arc) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Backpack (Cadet)";
    maximumLoad = 280;

	model = QPATHTOF(data\backpacks\arc_backpack.p3d);
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\arc\camo1_co.paa),
		""
	};

	ls_activeCamo_camoItem = QEGBACKPACK(equipment_arc,stealth_cadet);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasTaser) = 0;
	GVAR_CORE(mm9,hasMM9) = 0;
};

class GBACKPACK(arc_tech): B_Kitbag_rgr {
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Tech Backpack";
    maximumLoad = BACKPACK_MAXLOAD;

	model = QPATHTOF(data\backpacks\rri_arctech_backpack.p3d);
	hiddenSelections[] = {"camo1", "camo2","emissive"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\arc_tech\camo1_co.paa),
		QPATHTOF(data\backpacks\arc\camo2_co.paa),
		QPATHTOF(data\backpacks\arc_tech\camo1_co.paa)
	};
	ls_activeCamo_camoItem = QEGBACKPACK(equipment_arc,stealth_tech);

	picture = QPATHTOF(data\ui\ARCBackpack.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasTaser) = 1;
	GVAR_CORE(mm9,hasMM9) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};
};

class GBACKPACK(arc_tech_noBracer): GBACKPACK(arc_tech) {
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Tech Backpack (Cadet)";
    maximumLoad = 280;

	model = QPATHTOF(data\backpacks\rri_arctech_backpack.p3d);
	hiddenSelections[] = {"camo1","camo2","emissive"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\arc_tech\camo1_co.paa),
		"",
		QPATHTOF(data\backpacks\arc_tech\camo1_co.paa)
	};
	ls_activeCamo_camoItem = QEGBACKPACK(equipment_arc,stealth_tech_cadet);

	picture = QPATHTOF(data\ui\ARCBackpack.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasTaser) = 0;
	GVAR_CORE(mm9,hasMM9) = 0;
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};
};

class GBACKPACK(fsb): B_Kitbag_rgr {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Field Support Backpack";
	maximumLoad = BACKPACK_MAXLOAD;

	picture = QPATHTOF(data\ui\FS Backpack.paa); 
	model = QPATHTOF(data\backpacks\field_support_backpack.p3d);

	hiddenSelections[] = {"camo", "buttons", "stretcher"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\fs\camo_co.paa),QPATHTOF(data\backpacks\fs\camo_co.paa),""};

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = LR_RANGE;
	tf_subtype = "digital_lr";

	GVAR_CORE(fortify,canFortify) = 1;
	GVAR_CORE(fortify,availablePresets)[] = { "Backpack_Default", 250 };
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(medical_stretcher,texture) = QPATHTOEF(statics,stretcher\data\stretcher_co.paa);
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
};

class GBACKPACK(jt12): B_Kitbag_rgr {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] JT-12";
    maximumLoad = BACKPACK_MAXLOAD;

	model = QPATHTOF(data\backpacks\rri_jt12.p3d);
	picture = QPATHTOF(data\ui\JT12.paa);
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\jt12\base\jumpack_co.paa)
	};

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	NSM_jumppack_is_jumppack = 1;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 120;
	NSM_jumppack_recharge = 6;
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] = {{"effect1",{0,0.6,1}},{"effect2",{0,0.6,1}}};
	NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
	NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
	NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
    NSM_jumppack_jump_types[]=
    {
        {
            "Short Jump",
            {15,5,30,0,1,0}
        },
        {
            "Forward Jump",
            {12,20,50,0,0,0}
        }
    };
};

class GBACKPACK(jt12_rocket): GBACKPACK(jt12) {
	scope = 2;
	displayName = "[SOB] JT-12 (Rocket)";

	model = QPATHTOF(data\backpacks\rri_jt12_rocket.p3d);
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\backpacks\jt12\rocket\jumppack_co.paa),
		QPATHTOF(data\backpacks\jt12\rocket\Rocket_CO.paa)
	};
};

class GBACKPACK(trooper): B_Kitbag_rgr {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Trooper Backpack";
	maximumLoad = BACKPACK_MAXLOAD;

	picture = QPATHTOF(data\ui\CloneBackpack1.paa);
	model = QPATHTOF(data\backpacks\rri_trooper_bp.p3d);

	hiddenSelections[] = {"camo","flap"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\trooper\base\camo1_co.paa),QPATHTOF(data\backpacks\trooper\base\camo1_co.paa)};
};

class GBACKPACK(eod): GBACKPACK(trooper) {
	displayName = "[SOB] Clone Trooper Backpack (EOD)";
	scope = 2;

	model = QPATHTOF(data\backpacks\rri_eod_bp.p3d);

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\trooper\eod\camo1_co.paa),QPATHTOF(data\backpacks\trooper\eod\camo1_co.paa)};
};

class GBACKPACK(medic): GBACKPACK(trooper) {
	displayName = "[SOB] Clone Trooper Backpack (Medic)";
	scope = 2;

	model = QPATHTOF(data\backpacks\rri_medic_bp.p3d);

	hiddenSelections[] = {"camo"}; // todo
	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\trooper\medic\camo1_co.paa),QPATHTOF(data\backpacks\trooper\medic\camo1_co.paa)};

	// class XtdGearInfo {
	// 	model = QGVAR(trooper);
	// 	camo = "Medic";
	// };
};

class GBACKPACK(rto): GBACKPACK(trooper) {
	displayName = "[SOB] Clone Trooper Backpack (RTO)";
	scope = 2;

	model = QPATHTOF(data\backpacks\rri_rto_bp.p3d); 

	hiddenSelections[] = {"camo","screen"}; 
	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\trooper\rto\camo1_co.paa),QPATHTOF(data\backpacks\trooper\rto\camo1_co.paa)};
	hiddenSelectionsMaterials[] = {QPATHTOF(data\backpacks\trooper\rto\camo1.rvmat),QPATHTOF(data\backpacks\trooper\rto\camo1.rvmat)};
};
