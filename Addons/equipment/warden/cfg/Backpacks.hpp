class EGBACKPACK(equipment_custom,fsb);
class GBACKPACK(fsb_trooper): EGBACKPACK(equipment_custom,fsb) {
  scope = 2;
  displayName = "[SOB] Warden Logistics Backpack (Trooper)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\fs-b\camo_Trooper_co.paa),QPATHTOF(data\backpacks\fs-b\camo_co.paa),""};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

  class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Trooper";
	};
};

class GBACKPACK(fsb_medic): EGBACKPACK(equipment_custom,fsb) {
  scope = 2;
  displayName = "[SOB] Warden Logistics Backpack (Medic)";
  hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\fs-b\camo_Medic_co.paa),QPATHTOF(data\backpacks\fs-b\camo_co.paa),""};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

  class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Medic";
	};
};

class GBACKPACK(sp_base): JLTS_Clone_jumppack_mc {
    scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Warden Pilot Survival Pack";

	maximumLoad = BACKPACK_MAXLOAD;

	picture = QPATHTOEF(equipment,trooper\data\ui\Chickenwang1.paa);

	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = LR_RANGE;
	tf_subtype = "digital_lr";

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"pilot"};

	class XtdGearInfo {
		model = QGVAR(sp);
		camo = "base";
	};
};

class GBACKPACK(sp_xray): GBACKPACK(sp_base) {
	displayName = "[SOB] Warden Pilot Survival Pack (X-Ray)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Clone_jumppack_XRay_Pilot_co.paa)};

	class XtdGearInfo {
		model = QGVAR(sp);
		camo = "xray";
	};
};

class GBACKPACK(sp_lead): GBACKPACK(sp_base) {
	displayName = "[SOB] Warden Pilot Survival Pack (Lead)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\Clone_jumppack_Flight_Lead_co.paa)};

	class XtdGearInfo {
		model = QGVAR(sp);
		camo = "lead";
	};
};

class GBACKPACK(cpas): ls_backpack_hawkbat {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] CPAS Harness";
    maximumLoad = 0;
    mass = 120;

    GVAR_CORE(aircraft,cpas_isRig) = 1;
    GVAR_CORE(aircraft,cpas_parachuteClass) = "ls_misc_hawkbatSteerable_parachute";
	GVAR_CORE(arsenal,whitelists)[] = {"common"};
};
