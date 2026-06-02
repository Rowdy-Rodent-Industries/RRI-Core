//base
class GVEST(base): JLTS_CloneVestAirborne {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Vest";

	vestType = "Rebreather";

	// hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	picture = QPATHTOEF(equipment,trooper\data\ui\heavyvest.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(vest);
        camo = QUOTE(Trooper);
    };
};

class GVEST(Cadet): JLTS_CloneVestAirborne {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Cadet Vest";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"","MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = "Supply150";
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(vest);
        camo = QUOTE(Cadet);
    };
};

class GVEST(NCO): JLTS_CloneVestAirborneNCO {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper NCO Vest";

	vestType = "Rebreather";

	// hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",QPATHTOF(data\vests\Clone_SOB_AB_SL_vest_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(vest);
        camo = QUOTE(NCO);
    };
};

class GVEST(Medic): GVEST(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Medic Vest";

	vestType = "Rebreather";

	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",QPATHTOF(data\vests\Clone_SOB_AB_Medic_vest_co.paa)};

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(vest);
        camo = QUOTE(Medic);
    };
};

class GVEST(EOD): GVEST(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper EOD Vest";

	vestType = "Rebreather";

	hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",QPATHTOF(data\vests\Clone_SOB_AB_EOD_vest_co.paa)};

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(vest);
        camo = QUOTE(EOD);
    };
};
