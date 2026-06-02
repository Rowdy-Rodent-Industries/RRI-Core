class GFACEWEAR(alpha_range): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Alpha-ARC Rangefinder";

    model = "\3AS\3AS_Characters\Clones\Headgear\3as_P1_RangeFinder.p3d";
	hiddenSelectionsTextures[] = { QPATHTOF(data\NVGs\RangeTop_Alpha_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(FW);
        camo = "AlphaRangefinder";
    };
};

class GFACEWEAR(range): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Rangefinder";

    hiddenSelectionsTextures[] = { QPATHTOF(data\NVGs\Clone_nvg_range_ARC_co.paa) };
    model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(FW);
        camo = "Rangefinder";
    };
};

class GFACEWEAR(Alpha_Macro): GFACEWEAR(base) {
	scope = 2;
	displayName = "[SOB] Alpha-ARC Macrobinocular";

	model = "\3AS\3AS_Characters\Clones\Headgear\3as_P1_MacroBino.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = { QPATHTOF(data\NVGs\MacroBinocular_Alpha_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(FW);
        camo = "AlphaMacro";
    };
};


