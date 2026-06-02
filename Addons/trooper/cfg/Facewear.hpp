//MacroBinoculars up
class GFACEWEAR(macro_Grey): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Macrobinoculars (Grey)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Macrobinoculars";
        color = "Grey";
    };
};

class GFACEWEAR(macro_white) : GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Macrobinoculars (White)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Macrobinoculars";
        color = "White";
    };
};

class GFACEWEAR(macro_NCO): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Macrobinoculars (NCO)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Macrobinoculars";
        color = "NCO";
    };
};

class GFACEWEAR(macro_medic): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Macrobinoculars (Medic)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_Medic_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Macrobinoculars";
        color = "Medic";
    };
};

class GFACEWEAR(macro_EOD): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Macrobinoculars (EOD)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_EOD_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Macrobinoculars";
        color = "EOD";
    };
};

//Macrobinocs On
class GFACEWEAR(spec_grey): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (Grey)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Specialist Macrobinoculars";
        color = "Grey";
    };
};

class GFACEWEAR(spec_white): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (White)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Specialist Macrobinoculars";
        color = "White";
    };
};

class GFACEWEAR(spec_NCO): GFACEWEAR(base) {

    scope = 2;
    displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (NCO)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_NCO_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Specialist Macrobinoculars";
        color = "NCO";
    };
};

class GFACEWEAR(spec_Medic): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (Medic)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_Medic_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Specialist Macrobinoculars";
        color = "Medic";
    };
};

class GFACEWEAR(spec_EDO): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Specialist Macrobinoculars (EOD)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\NVG Visor\Clone_nvg_EOD_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "Specialist Macrobinoculars";
        color = "EOD";
    };
};

//Rangefinders
class GFACEWEAR(Range_grey): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Rangefinder (Grey)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "RangeFinder";
        color = "Grey";
    };
};

class GFACEWEAR(Range_White): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Rangefinder (White)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_White_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "RangeFinder";
        color = "White";
    };
};

class GFACEWEAR(Range_NCO): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Rangefinder (NCO)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_NCO_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "RangeFinder";
        color = "NCO";
    };
};

class GFACEWEAR(Range_Medic): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Rangefinder (Medic)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_Medic_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "RangeFinder";
        color = "Medic";
    };
};

class GFACEWEAR(Range_EOD): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Trooper Rangefinder (EOD)";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\Rangefinder\Clone_nvg_range_EOD_co.paa)};

    class XtdGearInfo {
        model = QGVAR(FW_Trooper);
        style = "RangeFinder";
        color = "EOD";
    };
};

//Commander Visor
class GFACEWEAR(Visor_Command): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Commander Visor";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa"};
};

class GFACEWEAR(Visor_MC): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Marshal Commander Visor";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
	hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\MC Visor\Clone_nvg_visor_co.paa)};
};

class GFACEWEAR(Heavy_Vest): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Clone Heavy Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

    model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
    picture = QPATHTOF(data\ui\heavyvest.paa);
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"","MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
};

	class GFACEWEAR(bags_belt): GFACEWEAR(base) {
		author = AUTHOR;
		displayname = "[SOB] Belt Bag (Belt)";

        GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

		model = "\MRC\JLTS\characters\CloneArmor\CloneBeltBag.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_belt_bag_ui_ca.paa";

		mass = 4;
		identityTypes[] = {"NoGlasses",0};
	};

	class GFACEWEAR(bags_both): GFACEWEAR(bags_belt) {
		displayname = "[SOB] Belt Bag (Both)";

        GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

		model = "\ls\core\addons\characters_clone_legacy\backpacks\bag\ls_gar_beltBag_backpack.p3d";
		picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_bag_ca.paa";
	};

	class GFACEWEAR(bags_leg): GFACEWEAR(bags_both) {
		displayname = "[SOB] Belt Bag (Leg)";

        GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {};
	};
