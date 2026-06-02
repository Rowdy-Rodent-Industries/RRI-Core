//NVGS
class GFACEWEAR(visor): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Commando NV Visor";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\equipment\nvgs\commando\ls_nvg_clone_commando_visor.p3d";

    GVAR_CORE(equipment,hideFacewear) = 1;

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "Visor White";
    };
};

//Vests

class GFACEWEAR(base_Commando): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Katarn I Commando Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    // hiddenSelectionsTextures[] =

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "Vest";
    };
};

class GFACEWEAR(sniper_Commando): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Katarn I Commando Vest (Sniper)";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_sniper.p3d";
    hiddenSelections[] = {"illum","camo1"};
	hiddenSelectionsTextures[]=
    {
        "\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa"
    };

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "Sniper";
    };
};

class GFACEWEAR(tech_commando): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Katarn I Commando Vest (Tech)";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_tech.p3d";
    hiddenSelections[] = {"camo1"};

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "Tech";
    };
};

class GFACEWEAR(eod_commando): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Katarn I Commando Vest (EOD)";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_eod.p3d";

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "EOD";
    };
};

class GFACEWEAR(sl_Commando): GFACEWEAR(base) {
    scope = 2;
    displayName = "[SOB] Katarn I Commando Vest (SL)";
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

    model="\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_sl.p3d";

    class XtdGearInfo {
        model = QGVAR(FW_Commando);
        camo = "SL";
    };
};
