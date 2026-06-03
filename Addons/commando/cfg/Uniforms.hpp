class GUNIFORM(base) : ls_sob_commando_uniform {
	author = AUTHOR;
    displayName = "[SOB] Katarn-class Commando Armor";

	GVAR(hasKatarn) = 1;
	GVAR(isSuit) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\RCv1.paa);

	class ItemInfo : ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Base";
	};
};

class GUNIFORM(Sarge) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Sarge)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Sarge);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Sarge";
	};
};

class GUNIFORM(Imperial) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Imperial)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Imperial);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Imperial";
	};
};

// Camouflage
class GUNIFORM(Arctic) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Arctic Ops)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Arctic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Arctic";
	};
};

class GUNIFORM(Desert) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Desert Ops)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Desert);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Desert";
	};
};

class GUNIFORM(Jungle) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Jungle Ops)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Jungle);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Jungle";
	};
};

class GUNIFORM(Night) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Commando Armor (Night Ops)";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(Night);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Night";
	};
};

// MOS
class GUNIFORM(Cadet): GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Cadet Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(cadet);
		containerClass = "Supply120";
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Cadet";
	};
};

class GUNIFORM(eod) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Demolitionist Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(eod);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "EOD";
	};
};

class GUNIFORM(tech) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Technician Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(tech);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Tech";
	};
};

class GUNIFORM(sniper) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Sniper Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(sniper);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Sniper";
	};
};

class GUNIFORM(exotic) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Exotic Weapons Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(exotic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Exotic";
	};
};

class GUNIFORM(medic) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Medic Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Medic";
	};
};

class GUNIFORM(heavy) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Heavy Weapons Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(heavy);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Heavy";
	};
};

class GUNIFORM(sl) : GUNIFORM(base) {
	displayName = "[SOB] Katarn-class Squad Leader Commando Armor";

	class ItemInfo : ItemInfo {
		uniformClass = QGUNIT(sl);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "SL";
	};
};
