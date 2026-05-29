class GHELMET(base) : ls_sob_commando_helmet {
	author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Helmet";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\helmet_Base_co.paa),QPATHTOF(data\helmets\helmet_Base_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"commando"};

	picture = QPATHTOF(data\ui\Commando1.paa);

	GVAR_CORE(intercom,hasIntercom) = 1;
	GVAR_CORE(katarnOS,isHelmet) = 1;
	GVAR_CORE(katarnOS,isHUD) = 1;
    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;

	ace_hearing_protection = HELMET_HEARING_PROTECTION;
    ace_hearing_lowerVolume = HELMET_HEARING_MUFFLING;

    class ItemInfo: ItemInfo {
		mass = 10;

        HELMET_PROTECTION;
	};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Base";
	};
};

class GHELMET(Sarge) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Sarge)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\helmet_Sarge_co.paa),QPATHTOF(data\helmets\helmet_Sarge_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Sarge";
	};
};

class GHELMET(Imperial) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Imperial)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\helmet_Imperial_co.paa),QPATHTOF(data\helmets\helmet_Imperial_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Imperial";
	};
};

// Camouflage
class GHELMET(Arctic) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Arctic Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Camouflage\helmet_Arctic_co.paa),QPATHTOF(data\helmets\Camouflage\helmet_Arctic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Arctic";
	};
};

class GHELMET(Desert) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Desert Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Camouflage\helmet_Desert_co.paa),QPATHTOF(data\helmets\Camouflage\helmet_Desert_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Desert";
	};
};

class GHELMET(Jungle) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Jungle Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Camouflage\helmet_Jungle_co.paa),QPATHTOF(data\helmets\Camouflage\helmet_Jungle_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Jungle";
	};
};

class GHELMET(Night) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Night Ops)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Camouflage\helmet_Night_co.paa),QPATHTOF(data\helmets\Camouflage\helmet_Night_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Night";
	};
};

// MOS
class GHELMET(Cadet): GHELMET(base) {
	displayName = "[SOB] Katarn I Commando Helmet (Cadet)";

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Cadet";
	};
};

class GHELMET(eod) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Demolitionist)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_eod_co.paa),QPATHTOF(data\helmets\mos\helmet_eod_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "EOD";
	};
};

class GHELMET(tech) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Technician)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_tech_co.paa),QPATHTOF(data\helmets\mos\helmet_tech_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Tech";
	};
};

class GHELMET(sniper) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Sniper)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_sniper_co.paa),QPATHTOF(data\helmets\mos\helmet_sniper_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Sniper";
	};
};

class GHELMET(exotic) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Exotic Weapons)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_exotic_co.paa),QPATHTOF(data\helmets\mos\helmet_exotic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Exotic";
	};
};

class GHELMET(medic) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Medic)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_medic_co.paa),QPATHTOF(data\helmets\mos\helmet_medic_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Medic";
	};
};

class GHELMET(heavy) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Heavy Weapons)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_heavy_co.paa),QPATHTOF(data\helmets\mos\helmet_heavy_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Heavy";
	};
};

class GHELMET(sl) : GHELMET(base) {
    displayName = "[SOB] Katarn I Commando Helmet (Squad Leader)";
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\mos\helmet_sl_co.paa),QPATHTOF(data\helmets\mos\helmet_sl_co.paa)};

    class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "SL";
	};
};
