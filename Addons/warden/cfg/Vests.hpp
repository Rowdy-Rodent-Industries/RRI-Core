class GVEST(base_FS): JLTS_CloneVestSuspender {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Warden Suspenders (Black)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};

    class XtdGearInfo {
		model = QGVAR(vest);
		camo = "Black";
	};
};

class GVEST(white_FS): JLTS_CloneVestSuspender_white {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Warden Suspenders (White)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};

    class XtdGearInfo {
		model = QGVAR(vest);
		camo = "White";
	};
};

class GVEST(Grey_FS): JLTS_CloneVestSuspender_41_Gree {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Warden Suspenders (Grey)";
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};

    class XtdGearInfo {
		model = QGVAR(vest);
		camo = "Grey";
	};
};
