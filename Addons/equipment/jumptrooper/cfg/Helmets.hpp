//Base Versions
class GHELMET(p1_base): SEA_Helmet_P1_Base {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet";

    subItems[] = {};

	picture = QPATHTOEF(equipment,trooper\data\ui\P1JT1.paa);

    class ItemInfo: ItemInfo {
		HELMET_PROTECTION;
    };

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

    HELMET_ACE_HEARING;

    hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\rank\P1_Helmet_Cadet_co.paa),
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
};

class GHELMET(p1_illum_base): SEA_Helmet_P1_IllumBase {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet";

    subItems[] = {};

    class ItemInfo: ItemInfo {
		HELMET_PROTECTION;
    };

    GVAR_CORE(catTabe_core,hasHelmetCam) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"jumptrooper"};

    HELMET_ACE_HEARING;

    hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\rank\P1_Helmet_Cadet_co.paa),
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
};

//Ranks
class GHELMET(Cadet): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (Cadet)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_Cadet_co.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Cadet";
	};
};

class GHELMET(Trooper): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (Trooper)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_Trooper_CO.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Trooper";
	};
};

class GHELMET(TL): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (TL)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_TL_CO.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "TL";
	};
};

class GHELMET(SL): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (SL)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_SL_CO.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "SL";
	};
};

class GHELMET(Medic): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (Medic)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_Medic_CO.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "Medic";
	};
};

class GHELMET(EOD): GHELMET(p1_base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] JumpTrooper P1 Helmet (EOD)";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\helmets\rank\P1_Helmet_EOD_CO.paa),
		"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
	};

	class XtdGearInfo {
		model = QGVAR(helmet);
		camo = "EOD";
	};
};
