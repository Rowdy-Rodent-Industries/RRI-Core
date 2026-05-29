// Base
class GBACKPACK(base): ls_sob_commando_backpack {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_co.paa)};
    maximumload = BACKPACK_MAXLOAD;
    scope = 2;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\CommandoBackpack1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,isBackpack) = 1;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasSquadShield) = 1;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Base";
	};
};

class GBACKPACK(Cadet): ls_sob_commando_backpack {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Backpack (Cadet)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_co.paa)};
    maximumload = 280;
    scope = 2;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\CommandoBackpack1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,isBackpack) = 1;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasSquadShield) = 0;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Cadet";
	};
};



class GBACKPACK(eod_base): ls_sob_commando_eod_backpack {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando EOD Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_co.paa)};
    maximumload = BACKPACK_MAXLOAD;
    scope = 2;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\CommandoBackpack1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,isBackpack) = 1;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasSquadShield) = 1;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "EOD";
	};
};

class GBACKPACK(rto_base): ls_sob_commando_rto_backpack {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando RTO Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_co.paa)};
    maximumload = BACKPACK_MAXLOAD;
    scope = 2;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\CommandoBackpack1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,isBackpack) = 1;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasSquadShield) = 1;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "RTO";
	};
};

class GBACKPACK(tech_base) : ls_sob_commando_tech_backpack {
	scope = 2;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Tech Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_co.paa),QPATHTOF(data\Backpacks\backpack_Base_tech_co.paa)};
    maximumload = BACKPACK_MAXLOAD;

	picture = QPATHTOF(data\ui\CommandoBackpack1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,isBackpack) = 1;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(katarnOS,hasSquadShield) = 1;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Tech";
	};
};

// MOS
class GBACKPACK(eod): GBACKPACK(eod_base) {
	displayName = "[SOB] Katarn I Commando Demolitionist Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\mos\backpack_eod_co.paa),QPATHTOF(data\Backpacks\mos\backpack_eod_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_EOD";
	};
};

class GBACKPACK(tech): GBACKPACK(tech_base) {
	displayName = "[SOB] Katarn I Commando Technician Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_tech_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_tech_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_tech_tech_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_Tech";
	};
};

class GBACKPACK(sniper): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Sniper Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_sniper_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_sniper_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_Sniper";
	};
};

class GBACKPACK(exotic): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Exotic Weapons Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_exotic_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_exotic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_Exotic";
	};
};

class GBACKPACK(medic): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Medic Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_medic_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_medic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_Medic";
	};
};

class GBACKPACK(heavy): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Heavy Weapons Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_heavy_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_Heavy_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_Heavy";
	};
};

class GBACKPACK(sl): GBACKPACK(rto_base) {
	displayName = "[SOB] Katarn I Commando Squad Leader Backpack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\MOS\backpack_SL_co.paa),QPATHTOF(data\Backpacks\MOS\backpack_SL_co.paa)};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "SOB_SL";
	};
};

class GBACKPACK(Sarge): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Sarge)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Sarge_co.paa),QPATHTOF(data\Backpacks\backpack_Sarge_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Sarge";
	};
};

// Imperial
class GBACKPACK(Imperial): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Imperial)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Imperial_co.paa),QPATHTOF(data\Backpacks\backpack_Imperial_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Imperial";
	};
};

class GBACKPACK(eod_Imperial): GBACKPACK(eod_base) {
	displayName = "[SOB] Katarn I Commando EOD Backpack (Imperial)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Imperial_co.paa),QPATHTOF(data\Backpacks\backpack_Imperial_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Imperial_EOD";
	};
};

class GBACKPACK(rto_Imperial): GBACKPACK(rto_base) {
	displayName = "[SOB] Katarn I Commando RTO Backpack (Imperial)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Imperial_co.paa),QPATHTOF(data\Backpacks\backpack_Imperial_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Imperial_RTO";
	};
};

class GBACKPACK(tech_Imperial): GBACKPACK(tech_base) {
	displayName = "[SOB] Katarn I Commando Tech Backpack (Imperial)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\backpack_Imperial_co.paa),QPATHTOF(data\Backpacks\backpack_Imperial_co.paa),QPATHTOF(data\Backpacks\backpack_Imperial_tech_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Imperial_Tech";
	};
};

// Camouflage
class GBACKPACK(Arctic): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Arctic Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Camouflage\backpack_Arctic_co.paa),QPATHTOF(data\Backpacks\Camouflage\backpack_Arctic_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Arctic";
	};
};

class GBACKPACK(Desert): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Desert Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Camouflage\backpack_Desert_co.paa),QPATHTOF(data\Backpacks\Camouflage\backpack_Desert_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Desert";
	};
};

class GBACKPACK(Jungle): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Jungle Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Camouflage\backpack_Jungle_co.paa),QPATHTOF(data\Backpacks\Camouflage\backpack_Jungle_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Jungle";
	};
};

class GBACKPACK(Night): GBACKPACK(base) {
	displayName = "[SOB] Katarn I Commando Backpack (Night Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Camouflage\backpack_Night_co.paa),QPATHTOF(data\Backpacks\Camouflage\backpack_Night_co.paa)};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Night";
	};
};
