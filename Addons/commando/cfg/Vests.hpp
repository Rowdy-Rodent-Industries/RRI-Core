class GVEST(base) : ls_sob_commando_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest";

	GVAR(hasKatarn) = 1;
	GVAR(hasShield) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\RCVest.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
    class XtdGearInfo {
		model = QGVAR(vest);
		role = "Base";
		camo = "White";
	};
};

class GVEST(Cadet) : ls_sob_commando_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest (Cadet)";

	GVAR(hasShield) = 1;
	GVAR(shieldStrength) = 50;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\RCVest.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
    class XtdGearInfo {
		model = QGVAR(vest);
		role = "Cadet";
		camo = "White";
	};
};

class GVEST(sniper) : ls_sob_commando_sniper_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest (Sniper)";

	GVAR(hasShield) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\Sniper1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
    class XtdGearInfo {
		model = QGVAR(vest);
		role = "Sniper";
		camo = "White";
	};
};

class GVEST(tech) : ls_sob_commando_tech_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest (Tech)";

	GVAR(hasShield) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\Tech1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

    class XtdGearInfo {
		model = QGVAR(vest);
		role = "Tech";
		camo = "White";
	};
};

class GVEST(eod) : ls_sob_commando_eod_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest (EOD)";

	GVAR_CORE(pangolin,hasShield) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\Demo1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
    class XtdGearInfo {
		model = QGVAR(vest);
		role = "EOD";
		camo = "White";
	};
};

class GVEST(sl) : ls_sob_commando_sl_vest {
	author = AUTHOR;
	displayName = "[SOB] Katarn I Commando Vest (SL)";

	GVAR_CORE(pangolin,hasShield) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\SL1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
    class XtdGearInfo {
		model = QGVAR(vest);
		role = "SL";
		camo = "White";
	};
};
