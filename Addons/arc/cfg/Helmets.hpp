// Base
class GHELMET(base): JLTS_CloneHelmetARC {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper Helmet";

    picture = QPATHTOF(data\ui\ARC1.paa);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    ls_activeCamo_camoItem = QGHELMET(stealth);

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;

    HELMET_ACE_HEARING;
};

class GHELMET(illum_base): JLTS_CloneHelmetARC_illum {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper Helmet";

    picture = QPATHTOF(data\ui\ARC1.paa);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    ls_activeCamo_camoItem = QGHELMET(stealth);

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;

    HELMET_ACE_HEARING;
};

class GHELMET(alpha_base): SEA_Helmet_P1_Base {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Alpha-ARC Helmet";
    subItems[] = {};

    picture = QPATHTOEF(equipment,trooper\data\ui\P1JT1.paa);

    ls_activeCamo_camoItem = QGHELMET(alpha_stealth);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

class GHELMET(alpha_illum): SEA_Helmet_P1_IllumBase {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Alpha-ARC Helmet";

    ls_activeCamo_camoItem = QGHELMET(alpha_stealth);

    picture = QPATHTOEF(equipment,trooper\data\ui\P1JT1.paa);

    subItems[] = {};

    class ItemInfo: ItemInfo {
		HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

class GHELMET(alpha_stealth): SEA_Helmet_P1_Base {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Alpha-ARC Helmet";
    subItems[] = {};

    picture = QPATHTOEF(equipment,trooper\data\ui\Rangefinder1.paa);

    hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa",
        "\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
        "\ls\core\addons\data\materials\activeCamo.rvmat"
	};

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

class GHELMET(stealth): JLTS_CloneHelmetARC {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] ARC Trooper Helmet";

    picture = QPATHTOF(data\ui\ARC1.paa);

    class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;

    HELMET_ACE_HEARING;
};

// Rank
class GHELMET(cadet): GHELMET(base) {
    scope = 2;
    displayName = "[SOB] ARC Cadet Helmet";
    // hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\clone_helmet_arc_cadet_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    ls_activeCamo_camoItem = QGHELMET(stealth);

    class XtdGearInfo {
        model = QGVAR(helmet);
        camo = "Cadet";
    };
};

class GHELMET(trooper): GHELMET(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Helmet";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\clone_helmet_arc_trooper_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(helmet);
        camo = "Trooper";
    };
};

class GHELMET(demo): GHELMET(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Helmet (Demo)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\clone_helmet_arc_demo_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(helmet);
        camo = "Demo";
    };
};

class GHELMET(medic): GHELMET(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Helmet (Medic)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\clone_helmet_arc_medic_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(helmet);
        camo = "Medic";
    };
};

class GHELMET(SL): GHELMET(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Helmet (Squad Leader)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\clone_helmet_arc_sl_co.paa)};

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class XtdGearInfo {
        model = QGVAR(helmet);
        camo = "SL";
    };
};
