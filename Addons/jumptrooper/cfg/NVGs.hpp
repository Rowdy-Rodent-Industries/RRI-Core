//base
class GNVG(Visor): JLTS_CloneNVG {
	displayName = "[SOB] JumpTrooper Macrobinoculars";
	// hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
	modelOptics = "-";

	picture = QPATHTOEF(equipment,trooper\data\ui\Rangefinder1.paa);

    class XtdGearInfo {
		model = QGVAR(nvg);
		camo = "MacroBinoculars";
	};
};

class GNVG(Rangefinder): SEA_P1_Rangefinder {
	displayName = "[SOB] JumpTrooper Rangefinder";
	// hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
	modelOptics = "-";

	picture = QPATHTOEF(equipment,trooper\data\ui\Rangefinder1.paa);

    class XtdGearInfo {
		model = QGVAR(nvg);
		camo = "Rangefinder";
	};
};
