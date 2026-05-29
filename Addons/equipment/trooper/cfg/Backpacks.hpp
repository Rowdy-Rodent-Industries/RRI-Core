class GBACKPACK(base): EGBACKPACK(equipment_custom,trooper) {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Backpack";
    maximumLoad = BACKPACK_MAXLOAD;

	picture = QPATHTOF(data\ui\CloneBackpack1.paa);

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Base";
	};
};

class GBACKPACK(eod): EGBACKPACK(equipment_custom,eod) {
	displayName = "[SOB] Clone Trooper Backpack (EOD)";

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "EOD";
	};
};

class GBACKPACK(medic): EGBACKPACK(equipment_custom,medic) {
	displayName = "[SOB] Clone Trooper Backpack (Medic)";

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Medic";
	};
};

class GBACKPACK(RTO): EGBACKPACK(equipment_custom,rto) {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Backpack (RTO)";
	maximumLoad = BACKPACK_MAXLOAD;
	tf_range = LR_RANGE;

	picture = QPATHTOF(data\ui\CloneBackpack1.paa);

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "RTO";
	};
};

class GBACKPACK(RTO_Clear): GBACKPACK(RTO) {
	displayName = "[SOB] Clone Trooper Backpack (RTO, Invisible)";
	model = "\A3\Weapons_F\empty.p3d";

	class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "RTO_Clear";
	};
};

class GBACKPACK(belt_bag): JLTS_Clone_belt_bag {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Belt Bag";
    maximumLoad = BACKPACK_MAXLOAD;

	picture = QPATHTOF(data\ui\CloneBackpack1.paa);

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "Belt";
	};
};

class GBACKPACK(RTO_pack): JLTS_Clone_RTO_pack {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Mini RTO Pack";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\RTO Pack\Clone_RTO_pack_co.paa)};
    maximumLoad = BACKPACK_MAXLOAD;
	tf_range = LR_RANGE;
	picture = QPATHTOF(data\ui\CloneBackpack1.paa);

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "RTO_pack";
	};
};

class GBACKPACK(RTO_pack_dark_grey): GBACKPACK(RTO_pack) {
	displayName = "[SOB] Clone Trooper Mini RTO Pack (Dark Grey)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\RTO Pack\Clone_RTO_pack_Dark_Grey_co.paa)};

	GVAR_CORE(katarnOS,hasBeacon) = 1;

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "RTO_pack_dark_grey";
	};
};

class GBACKPACK(LR_attachment): JLTS_Clone_LR_attachment {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Mini LR Attachment";
    maximumLoad = BACKPACK_MAXLOAD;
	tf_range = LR_RANGE;

	picture = QPATHTOF(data\ui\CloneBackpack1.paa);

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class XtdGearInfo {
		model = QGVAR(backpack);
		camo = "LR_attachment";
	};
};

class GBACKPACK(droppack): EGBACKPACK(equipment_custom,jt12) {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper JT-12 Droppack";
	maximumLoad = 0;
	hiddenSelectionsTextures[] = {QPATHTOF(data\Backpacks\droppack\Jumpack_CO.paa)};

	GVAR_CORE(katarnOS,hasBeacon) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"common"};
};
