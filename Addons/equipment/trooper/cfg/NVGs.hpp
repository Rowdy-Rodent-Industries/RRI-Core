class GNVG(macro_grey): JLTS_CloneNVG {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Macrobinoculars (Grey)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_co.paa)};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\Macrobinocs1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_macro);
		camo = "Grey";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","arc","fieldsupport"};
};

class GNVG(macro_white): JLTS_CloneNVG {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Macrobinoculars (White)";
    modelOptics = "-";

	picture = QPATHTOF(data\ui\Macrobinocs1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_macro);
		camo = "White";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","arc","fieldsupport"};
};

class GNVG(macro_NCO): GNVG(macro_grey) {
	displayName = "[SOB] Clone Trooper Macrobinoculars (NCO)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_macro);
		camo = "NCO";
	};
};

class GNVG(macro_Medic): GNVG(macro_grey) {
	displayName = "[SOB] Clone Trooper Macrobinoculars (Medic)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_Medic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_macro);
		camo = "Medic";
	};
};

class GNVG(macro_EOD): GNVG(macro_grey) {
	displayName = "[SOB] Clone Trooper Macrobinoculars (EOD)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_EOD_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_macro);
		camo = "EOD";
	};
};

class GNVG(spec_grey): JLTS_CloneNVG_spec {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (Grey)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_co.paa)};
	visionMode[] = {"Normal","NVG"};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\Macrobinocs1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_spec);
		camo = "Grey";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","arc","fieldsupport"};
};

class GNVG(spec_white): JLTS_CloneNVG_spec {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (White)";
	visionMode[] = {"Normal","NVG"};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\Macrobinocs1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_spec);
		camo = "White";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};
};

class GNVG(spec_NCO): GNVG(spec_white) {
	displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (NCO)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_spec);
		camo = "NCO";
	};
};

class GNVG(spec_Medic): GNVG(spec_white) {
	displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (Medic)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_Medic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_spec);
		camo = "Medic";
	};
};

class GNVG(spec_EOD): GNVG(spec_white) {
	displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (EOD)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_EOD_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_spec);
		camo = "EOD";
	};
};

class GNVG(Range_grey): JLTS_CloneNVGRange {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Rangefinder (Grey)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_co.paa)};
	visionMode[] = {"Normal","NVG"};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\Rangefinder1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_range);
		camo = "Grey";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};
};

class GNVG(Range_white): JLTS_CloneNVGRange {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Rangefinder (White)";
	visionMode[] = {"Normal","NVG"};
    modelOptics = "-";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_White_co.paa)};

	picture = QPATHTOF(data\ui\Rangefinder1.paa);

    class ItemInfo: ItemInfo {
		mass = 20;
	};

    class XtdGearInfo {
		model = QGVAR(nvg_range);
		camo = "White";
	};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};
};

class GNVG(Range_NCO): GNVG(Range_grey) {
	displayName = "[SOB] Clone Trooper Rangefinder (NCO)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_NCO_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_range);
		camo = "NCO";
	};
};

class GNVG(Range_Medic): GNVG(Range_grey) {
	displayName = "[SOB] Clone Trooper Rangefinder (Medic)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_Medic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_range);
		camo = "Medic";
	};
};

class GNVG(Range_EOD): GNVG(Range_grey) {
	displayName = "[SOB] Clone Trooper Rangefinder (EOD)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_EOD_co.paa)};

    class XtdGearInfo {
		model = QGVAR(nvg_range);
		camo = "EOD";
	};
};

class GNVG(Visor_Command): JLTS_CloneNVGCC {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Command Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {5,6};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\CommandVisor1.paa);


	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class ItemInfo: ItemInfo {
		mass = 20;
	};
};

class GNVG(Visor_MC): JLTS_CloneNVGMC {
	author = AUTHOR;
	displayName = "[SOB] Clone Marshal Commander Visor";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\MC Visor\Clone_nvg_visor_co.paa)};
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {4,5};
    modelOptics = "-";

	picture = QPATHTOF(data\ui\MarshalVisor1.paa);

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

	class ItemInfo: ItemInfo {
		mass = 20;
	};
};

class GNVG(Chip): JLTS_NVG_droid_chip_1 {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper NVG Chip";
	modelOptics = "-";

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    class ItemInfo: ItemInfo {
		uniformModel = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		modelOff = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		mass = 20;
	};
};
