// Base
class GUNIFORM(base): JLTS_CloneArmor {
	scope = 0;
	author = AUTHOR;
	displayName = "[SOB] Warden Armor";
	GVAR_CORE(equipment,hasKnife) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport","pilot"};

	picture = QPATHTOEF(trooper,data\ui\P2alt2v1.paa);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(Trooper): GUNIFORM(base) {
    scope = 0;
	displayName = "[SOB] Warden Armor (Trooper)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(Trooper);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Trooper";
	};
};

class GUNIFORM(Medic): GUNIFORM(base) {
    scope = 0;
	displayName = "[SOB] Warden Armor (Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		camo = "Medic";
	};
};

// Rank Variants

class GUNIFORM(CT) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (CT)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CT);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CT";
	};
};

class GUNIFORM(SCT) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (SCT)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(SCT);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "SCT";
	};
};

class GUNIFORM(VCT) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (VCT)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(VCT);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "VCT";
	};
};

class GUNIFORM(WO1) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (WO1)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(WO1);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "WO1";
	};
};

class GUNIFORM(WO2) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (WO2)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(WO2);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "WO2";
	};
};

class GUNIFORM(WO3) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (WO3)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(WO3);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "WO3";
	};
};

class GUNIFORM(WO4) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (WO4)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(WO4);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "WO4";
	};
};

class GUNIFORM(WOC) : GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Warden Armor (WOC)";

	class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(WOC);
	};

	class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "WOC";
	};
};




