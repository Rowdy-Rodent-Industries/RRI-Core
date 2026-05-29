// Base
class GUNIFORM(base): JLTS_CloneArmor {
	scope = 1;
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Armor";
	GVAR_CORE(equipment,hasKnife) = 1;
	GVAR_CORE(equipment,knife) = QGWEAPON(knife);
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

	picture = QPATHTOF(data\ui\P2alt2v1.paa);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(mc_base): JLTS_CloneArmorMC {
	scope = 1;
	author = AUTHOR;
	displayName = "[SOB] Clone Marshal Commander Armor";
	GVAR_CORE(equipment,hasKnife) = 1;
	GVAR_CORE(equipment,knife) = QGWEAPON(knife);
	GVAR_CORE(arsenal,whitelists)[] = {"trooper"};

	picture = QPATHTOF(data\ui\P2alt2v1.paa);

    class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(mc_base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

// Ranks
class GUNIFORM(CR): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Recruit Armor";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CR);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CR";
        mos = "base";
	};
};

class GUNIFORM(CT): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CT)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CT);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CT";
        mos = "base";
	};
};

class GUNIFORM(CT_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CT, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CT_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CT";
        mos = "eod";
	};
};

class GUNIFORM(CT_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CT, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CT_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CT";
        mos = "medic";
	};
};

class GUNIFORM(SCT): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (SCT)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(SCT);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "SCT";
        mos = "base";
	};
};

class GUNIFORM(SCT_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (SCT, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(SCT_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "SCT";
        mos = "eod";
	};
};

class GUNIFORM(SCT_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (SCT, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(SCT_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "SCT";
        mos = "medic";
	};
};

class GUNIFORM(VCT): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (VCT)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(VCT);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "VCT";
        mos = "base";
	};
};

class GUNIFORM(VCT_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (VCT, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(VCT_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "VCT";
        mos = "eod";
	};
};

class GUNIFORM(VCT_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (VCT, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(VCT_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "VCT";
        mos = "medic";
	};
};

class GUNIFORM(CSP): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CSP)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CSP);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CSP";
        mos = "base";
	};
};

class GUNIFORM(CSP_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CSP, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CSP_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CSP";
        mos = "eod";
	};
};

class GUNIFORM(CSP_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CSP, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CSP_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CSP";
        mos = "medic";
	};
};

class GUNIFORM(CLC): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CLC)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CLC);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CLC";
        mos = "base";
	};
};

class GUNIFORM(CLC_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CLC, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CLC_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CLC";
        mos = "medic";
	};
};

class GUNIFORM(CLC_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CLC, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CLC_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CLC";
        mos = "eod";
	};
};

class GUNIFORM(CP): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CP)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CP);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CP";
        mos = "base";
	};
};

class GUNIFORM(CP_Medic): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CP, Medic)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CP_Medic);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CP";
        mos = "medic";
	};
};

class GUNIFORM(CP_EOD): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CP, EOD)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CP_EOD);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CP";
        mos = "eod";
	};
};

class GUNIFORM(CS): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CS)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CS);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CS";
		mos = "base";
	};
};

class GUNIFORM(CSM): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CSM)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CSM);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CSM";
		mos = "base";
	};
};

class GUNIFORM(CL): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (CL)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(CL);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "CL";
		mos = "base";
	};
};

class GUNIFORM(Captain): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (Captain)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(Captain);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "Captain";
		mos = "base";
	};
};

class GUNIFORM(Commander): GUNIFORM(base) {
    scope = 2;
	displayName = "[SOB] Clone Trooper Armor (Commander)";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(Commander);
	};

    class XtdGearInfo {
		model = QGVAR(uniform);
		rank = "Commander";
		mos = "base";
	};
};

class GUNIFORM(elite): GUNIFORM(base) {
	scope = 2;
	displayName = "[SOB] Elite Squad Trooper Armor";

    class ItemInfo: ItemInfo {
		uniformClass = QGUNIT(elite);
	};
};
