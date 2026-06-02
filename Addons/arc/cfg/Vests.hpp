// Base
class GVEST(alpha_base): JLTS_CloneVestOfficer2 {
	scope = 1;
    author = AUTHOR;
	displayName = "[SOB] Alpha-ARC Vest";

	ls_activeCamo_camoItem = QGVEST(alpha_stealth);

	picture = QPATHTOEF(equipment,trooper\data\ui\Pltvest1.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
};

class GVEST(alpha_stealth): JLTS_CloneVestOfficer2 {
	scope = 1;
    author = AUTHOR;
	displayName = "[SOB] Alpha-ARC Vest";

	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};

	picture = QPATHTOEF(equipment,trooper\data\ui\Pltvest1.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
};

class GVEST(alpha_brigade): JLTS_CloneVestOfficer {
	scope = 1;
    author = AUTHOR;
	displayName = "[SOB] Alpha-ARC Vest 2";

	ls_activeCamo_camoItem = QGVEST(alpha_stealth);

	picture = QPATHTOEF(equipment,trooper\data\ui\Pltvest1.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
};

// Ranks
class GVEST(cadet): JLTS_CloneVestARCCadet {
	author = AUTHOR;
    displayName = "[SOB] ARC Cadet Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

	picture = QPATHTOF(data\ui\ARC Vest1.paa);

	ls_activeCamo_camoItem = QGVEST(Stealth_cadet);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = 7;
				PassThrough = 0.3;
			};
			class Legs {
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = 0.3;
			};
			class Arms {
				hitpointName = "HitArms";
				armor = 7;
				passThrough = 0.3;
			};
		};
	};

	class XtdGearInfo {
		model = QGVAR(vest);
		camo = "Cadet";
	};
};

class GVEST(Stealth_cadet): JLTS_CloneVestARCCadet {
	scope = 1;
	displayName = "[SOB] ARC Cadet Vest (Stealth)";
	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = 7;
				PassThrough = 0.3;
			};
			class Legs {
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = 0.3;
			};
			class Arms {
				hitpointName = "HitArms";
				armor = 7;
				passThrough = 0.3;
			};
		};
	};
};

class GVEST(trooper): JLTS_CloneVestARC {
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

	picture = QPATHTOF(data\ui\ARC Vest1.paa);

	ls_activeCamo_camoItem = QGVEST(stealth);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

		VEST_PROTECTION;
	};

	class XtdGearInfo {
		model = QGVAR(vest);
		camo = "Trooper";
	};
};

class GVEST(stealth): GVEST(trooper) {
	scope = 1;
    displayName = "[SOB] ARC Trooper Vest (Stealth)";
    hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};

    class XtdGearInfo {
        model = QGVAR(vest);
        camo = "Demo";
    };
};

class GVEST(demo): GVEST(trooper) {
    displayName = "[SOB] ARC Trooper Vest (Demo)";
    hiddenSelectionsTextures[] = { QPATHTOF(data\vests\clone_vest_arc_demo_co.paa) };

    class XtdGearInfo {
        model = QGVAR(vest);
        camo = "Demo";
    };
};

class GVEST(medic): GVEST(trooper) {
    displayName = "[SOB] ARC Trooper Vest (Medic)";
    hiddenSelectionsTextures[] = { QPATHTOF(data\vests\clone_vest_arc_medic_co.paa) };

    class XtdGearInfo {
        model = QGVAR(vest);
        camo = "Medic";
    };
};

class GVEST(tl): GVEST(trooper) {
    displayName = "[SOB] ARC Trooper Vest (Team Leader)";
    hiddenSelectionsTextures[] = { QPATHTOF(data\vests\clone_vest_arc_tl_co.paa) };

    class XtdGearInfo {
        model = QGVAR(vest);
        camo = "TL";
    };
};

class GVEST(sl): GVEST(trooper) {
    displayName = "[SOB] ARC Trooper Vest (Squad Leader)";
    hiddenSelectionsTextures[] = { QPATHTOF(data\vests\clone_vest_arc_sl_co.paa) };

    class XtdGearInfo {
        model = QGVAR(vest);
        camo = "SL";
    };
};
