class GNVG(chip) : JLTS_NVG_droid_chip_1 {
	author = AUTHOR;
	displayName = "[SOB] Katarn Mk1 Visor Chip";
	modelOptics = "-";
	picture = QPATHTOF_JLTSC(data\ui\nvg_chip_2_ui_ca.paa);
	visionMode[] = {"Normal","NVG", "TI"};
	thermalMode[] = {0,1};

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando","pilot"};

    class ItemInfo: ItemInfo {
		mass = 20;
	};
};

class GNVG(visor): ls_sob_commando_visor_nvg {
	author = AUTHOR;
	displayName = "[SOB] Commando NV Visor";
	modelOptics = "-";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};

	picture = QPATHTOF(data\ui\CommandoVisor1.paa);

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};
};

class GNVG(antenna): ls_sob_commando_antenna_nvg {
	author = AUTHOR;
	displayName = "[SOB] Commando Helmet Antenna";
	modelOptics = "-";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};

	picture = QPATHTOF(data\ui\CommandoNVG1.paa);

	GVAR_CORE(katarnOS,isNV) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};
};
