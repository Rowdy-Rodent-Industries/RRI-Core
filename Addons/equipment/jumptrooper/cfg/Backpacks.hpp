class GBACKPACK(base): EGBACKPACK(equipment_custom,jt12) {
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12";
    maximumLoad = BACKPACK_MAXLOAD;
	
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = LR_RANGE;
	tf_subtype = "digital_lr";

	NSM_jumppack_is_jumppack = 1;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 120;
	NSM_jumppack_recharge = 6;

	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "Base";
	};
};

class GBACKPACK(Cadet): GBACKPACK(base)
{
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12 (Cadet)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Jumpack_cdt_CO.paa)};
	maximumLoad = 280;
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 1;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 1;
	NSM_jumppack_is_jumppack = 1;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 60;
	NSM_jumppack_recharge = 6;

	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "Cadet";
	};
};

class GBACKPACK(TL): GBACKPACK(base)
{
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12 (TL)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Jumpack_tl_CO.paa)};
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "TL";
	};
};

class GBACKPACK(SL): GBACKPACK(base)
{
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12 (SL)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Jumpack_sl_CO.paa)};
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "SL";
	};
};

class GBACKPACK(Medic): GBACKPACK(base)
{
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12 (Medic)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Jumpack_medic_CO.paa)};
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "Medic";
	};
};

class GBACKPACK(EOD): GBACKPACK(base)
{
	author = AUTHOR;
	displayName = "[SOB] JumpTrooper JT-12 (EOD)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Jumpack_eod_CO.paa)};
	GVAR_CORE(equipment,hasSmokeDeploy) = 1;
	GVAR_CORE(equipment,smokeCharges) = 3;
	GVAR_CORE(equipment,hasPopperDeploy) = 1;
	GVAR_CORE(equipment,popperCharges) = 3;
	class XtdGearInfo {
		model = QGVAR(jumppack);
		camo = "EOD";
	};
};
