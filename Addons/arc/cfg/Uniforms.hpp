// Base
class GUNIFORM(base): JLTS_CloneArmor {
	scope = 1;
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Armor";

	picture = QPATHTOEF(equipment,trooper\data\ui\P2alt2v1.paa);

	ls_activeCamo_camoItem = QGUNIFORM(stealth);
	GVAR_CORE(equipment,hasKnife) = 1;
	GVAR_CORE(equipment,knife) = QGWEAPON(knife);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(alpha_base): GUNIFORM(base) {
	displayName = "[SOB] Alpha-ARC Armor";
};

class GUNIFORM(stealth): JLTS_CloneArmor {
	scope = 1;
	author = AUTHOR;
	displayName = "[SOB] ARC Trooper Armor (Stealth)";

	picture = QPATHTOEF(equipment,trooper\data\ui\P2alt2v1.paa);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(stealth_base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

// Ranks
class GUNIFORM(cadet): GUNIFORM(base) {
    scope = 2;
    displayName = "[SOB] ARC Cadet Armor";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo: ItemInfo {
		containerClass = "Supply90";
		uniformClass = QGUNIT(cadet);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Cadet";
	};
};

class GUNIFORM(trooper): GUNIFORM(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Armor";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(trooper);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Trooper";
	};
};

class GUNIFORM(demo): GUNIFORM(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Armor (Demo)";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(demo);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Demo";
	};
};

class GUNIFORM(medic): GUNIFORM(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Armor (Medic)";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Medic";
	};
};

class GUNIFORM(SL): GUNIFORM(base) {
    scope = 2;
    displayName = "[SOB] ARC Trooper Armor (Squad Leader)";

	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(sl);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "SL";
	};
};
