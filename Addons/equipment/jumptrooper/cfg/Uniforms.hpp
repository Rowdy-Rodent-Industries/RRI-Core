//base
class GUNIFORM(base): JLTS_CloneArmor {
	scope = 1;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Armor";
	GVAR_CORE(equipment,hasKnife) = 1;
	GVAR_CORE(equipment,knife) = QGWEAPON(knife);
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

	picture = QPATHTOEF(equipment,trooper\data\ui\P2alt2v1.paa);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

//Ranks
class GUNIFORM(Cadet): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Cadet Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(Cadet);
		containerClass = "Supply120";
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Cadet";
	};
};

class GUNIFORM(Trooper): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(Trooper);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Trooper";
	};
};

class GUNIFORM(TL): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper TeamLead Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(TL);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Teamlead";
	};
};

class GUNIFORM(SL): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Squadlead Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(SL);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "SquadLead";
	};
};

class GUNIFORM(Medic): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper Medic Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(Medic);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Medic";
	};
};

class GUNIFORM(EOD): GUNIFORM(base) {
	scope = 2;
	author = AUTHOR;
	displayName = "[SOB] Jump Trooper EOD Armor";

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(EOD);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "EOD";
	};
};
