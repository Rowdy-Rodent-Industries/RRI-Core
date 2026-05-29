class GVEST(base): JLTS_CloneVestHolster {
	author = AUTHOR;
	displayName = "[SOB] Clone Trooper Holster";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	vestType = "Rebreather";

	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa)};

	picture = QPATHTOF(data\ui\Holster1.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(Holster);
    };
};

// Heavy Vest (SCT/VCT)
class GVEST(Heavy): JLTS_CloneVestAirborne {
	author = AUTHOR;
	displayName = "[SOB] Clone Heavy Vest";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"","MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	picture = QPATHTOF(data\ui\heavyvest.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		hiddenSelections[] = {"camo1","camo2"};

        VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(SCT);
    };
};

// Clone Specialist
class GVEST(CSP): JLTS_CloneVestRecon {
	author = AUTHOR;
    displayName = "[SOB] Clone Specialist Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	picture = QPATHTOF(data\ui\Specialistvest1.paa);

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

        VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(CSP);
    };
};

// Clone Lance Corporal
class GVEST(CLC): JLTS_CloneVestReconNCO {
	author = AUTHOR;
    displayName = "[SOB] Clone Lance Corporal Vest";
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	picture = QPATHTOF(data\ui\Sergeant Vest1.paa);

	vestType = "Rebreather";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

        VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(CLC);
    };
};

// Clone Corporal
class GVEST(CP): JLTS_CloneVestKama {
	author = AUTHOR;
	displayName = "[SOB] Clone Corporal Kama";
	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	picture = QPATHTOF(data\ui\Kama1.paa);

	vestType = "Rebreather";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(CP);
    };
};

// Clone Sergeant
class GVEST(CS): JLTS_CloneVestReconOfficer {
	displayName = "[SOB] Clone Sergeant Vest";
	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa),QPATHTOF_JLTSE(CloneArmor\data\Clone_vest_heavy_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	vestType = "Rebreather";

	picture = QPATHTOF(data\ui\Kama1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

        VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(CS);
    };
};

// Platoon
class GVEST(PlatoonCommand): JLTS_CloneVestOfficer2 {
	author = AUTHOR;
	displayName = "[SOB] Clone Platoon Command Vest";
	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	vestType = "Rebreather";

	picture = QPATHTOF(data\ui\Pltvest1.paa);

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS_CMD;
		mass = 80;

        VEST_PROTECTION_OFFICER;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(Platoon);
    };
};

// Company
class GVEST(CompanyCommand): JLTS_CloneVestOfficer {
	author = AUTHOR;
	displayName = "[SOB] Clone Company Command Vest";
	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\clone_vest_officer_SOB_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot","FieldSupport"};

	vestType = "Rebreather";

	picture = QPATHTOF(data\ui\CmpnyVest1.paa);

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS_CMD;
		mass = 80;

		VEST_PROTECTION_OFFICER;
	};
    class XtdGearInfo {
        model = QGVAR(rank_vest);
        camo = 	QUOTE(Company);
    };
};

class GVEST(mc): JLTS_CloneVestKama {
    author = AUTHOR;
	displayName = "[SOB] Clone Marshal Commander kama";
	hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Clone_vest_Corporal_Rat_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"trooper","pilot"};

	vestType = "Rebreather";
	ls_activeCamo_camoItem = QGVEST(mc_stealth);

	picture = QPATHTOF(data\ui\Holster1.paa);

	GVAR_CORE(pangolin,hasShield) = 1;

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS_CMD;
		mass = 80;

		VEST_PROTECTION_OFFICER;
	};
};

class GVEST(mc_stealth): GVEST(mc) {
	scope = 1;
	displayName = "[SOB] Clone Marshal Commander Holster (Stealth)";
	hiddenSelectionsTextures[] = {
		"\ls\core\addons\data\textures\blank_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};
