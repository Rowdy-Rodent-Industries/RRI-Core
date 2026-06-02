class GNVG(alpha_range): JLTS_CloneNVGRange {
	scope = 2;
	displayName = "[SOB] Alpha-ARC Rangefinder";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

	visionMode[] = {"Normal","NVG", "TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	model = "\JLTS_AE\SEA_Rangefinder_Off.p3d";
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder_Alpha_White_co.paa)};

	picture = QPATHTOEF(equipment,trooper\data\ui\Rangefinder1.paa);

	ls_activeCamo_camoItem = QGNVG(alpha_range_stealth);

    class ItemInfo: ItemInfo {
		uniformModel = "\JLTS_AE\SEA_Rangefinder_On.p3d";
		modelOff = "\JLTS_AE\SEA_Rangefinder_Off.p3d";
	};

    class XtdGearInfo {
		model = QGVAR(alpha_nvg);
		camo = "White";
	};
};

class GNVG(alpha_range_stealth): GNVG(alpha_range) {
	scope = 1;
	displayName = "[SOB] Alpha-ARC Rangefinder (Stealth)";

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

class GNVG(alpha_NCO): GNVG(alpha_range) {
	displayName = "[SOB] Alpha-ARC Rangefinder (NCO)";

	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder_Alpha_NCO_co.paa)};

    class XtdGearInfo {
		model = QGVAR(alpha_nvg);
		camo = "NCO";
	};
};

class GNVG(alpha_CS): GNVG(alpha_range) {
	displayName = "[SOB] Alpha-ARC Rangefinder (CS)";

	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder_Alpha_CS_co.paa)};

    class XtdGearInfo {
		model = QGVAR(alpha_nvg);
		camo = "CS";
	};
};

class GNVG(alpha_CL): GNVG(alpha_range) {
	displayName = "[SOB] Alpha-ARC Rangefinder (CL)";

	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder_Alpha_CL_co.paa)};

    class XtdGearInfo {
		model = QGVAR(alpha_nvg);
		camo = "CL";
	};
};

class GNVG(alpha_macro): JLTS_CloneNVG {
	scope = 2;
	displayName = "[SOB] Alpha-ARC Macrobinocular";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

	visionMode[] = {"Normal","NVG", "TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	model = "\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\MacroBinocular_Alpha_co.paa)};
	picture = QPATHTOEF(equipment,trooper\data\ui\Macrobinocs1.paa);

	ls_activeCamo_camoItem = QGNVG(alpha_macro_stealth);

    class ItemInfo: ItemInfo {
		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
		modelOff = "\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
		hiddenSelections[] = {"camo"};
	};

    class XtdGearInfo {
		model = QGVAR(alpha_nvg);
		camo = "Macrobinocular";
	};
};

class GNVG(alpha_macro_stealth): GNVG(alpha_macro) {
	scope = 1;
	displayName = "[SOB] Alpha-ARC Macrobinocular (Stealth)";

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

class GNVG(range): JLTS_CloneNVGRange {
	scope = 2;
	displayName = "[SOB] ARC Trooper Rangefinder";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
	modelOptics = "-";

	picture = QPATHTOEF(equipment,trooper\data\ui\Rangefinder1.paa);

	ls_activeCamo_camoItem = QGNVG(range_stealth);

	hiddenSelectionsTextures[] = { QPATHTOF(data\NVGs\Clone_nvg_range_ARC_co.paa) };

	class XtdGearInfo {
		model = QGVAR(arc_range);
		camo = "Rangefinder";
	};
};

class GNVG(range_stealth): GNVG(range) {
	scope = 1;
	displayName = "[SOB] ARC Trooper Rangefinder (Stealth)";

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};
