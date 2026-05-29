class H_HelmetO_ViperSP_hex_F;
class HeadgearItem;
class GHELMET(Tanker): H_HelmetO_ViperSP_hex_F
{
	author = AUTHOR;
	scope = 2;
	displayName = "[SOB] Tanker Helmet";
	model = QPATHTOF(data\helmets\rri_tanker_helmet.p3d);
	picture = QPATHTOF(data\ui\Tanker Helmet.paa);
	hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\Helmets\tanker\helmet.rvmat),QPATHTOF(data\Helmets\tanker\visor.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Helmets\tanker\Helmet_CO.paa),QPATHTOF(data\Helmets\tanker\Visor_CO.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = QPATHTOF(data\helmets\rri_tanker_helmet.p3d);
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};

class GHELMET(Tanker2): H_HelmetO_ViperSP_hex_F
{
	author = AUTHOR;
	scope = 1;
	displayName = "[SOB] Tanker2 Helmet";
	model = QPATHTOF(data\helmets\rri_tanker_helmet.p3d);
	picture = QPATHTOF(data\ui\Tanker Helmet.paa);
	hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\helmets\tanker2\helmet.rvmat),QPATHTOF(data\helmets\tanker2\visor.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\tanker2\Helmet_co.paa),QPATHTOF(data\helmets\tanker2\Visor_co.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = QPATHTOF(data\helmets\rri_tanker_helmet.p3d);
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};

class GHELMET(tanker_Illum): GHELMET(Tanker)
{
	author = AUTHOR;
	scope = 1;
	displayName = "[SOB] Tanker Helmet";
	hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\Helmets\tanker\helmet.rvmat),"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Helmets\tanker\Helmet_CO.paa),QPATHTOF(data\Helmets\tanker\Visor_CO.paa)};
};

class GHELMET(knight): H_HelmetO_ViperSP_hex_F
{
	author = AUTHOR;
	scope = 2;
	displayName = "[SOB] Knight Helmet";
	model = QPATHTOF(data\helmets\rri_knight_helmet.p3d);
	// picture = QPATHTOF(data\ui\knightHelmet.paa); todo
	hiddenSelections[] = {"Camo1","Visor"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\helmets\knight\helmet.rvmat),QPATHTOF(data\helmets\knight\helmet.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\knight\Camo1_CO.paa),QPATHTOF(data\helmets\knight\Camo1_CO.paa)};

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		hiddenSelections[] = {"Camo1","Visor"};
		uniformModel = QPATHTOF(data\helmets\rri_knight_helmet.p3d);
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};

class GHELMET(jt): H_HelmetO_ViperSP_hex_F
{
	author = AUTHOR;
	scope = 2;
	displayName = "[SOB] Jumptrooper Helmet";
	model = QPATHTOF(data\helmets\rri_jthelmet.p3d);
	picture = QPATHTOF(data\ui\JTHelmet.paa);
	hiddenSelections[] = {"Camo1","Visor"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\helmets\jthelmet\camo1.rvmat),QPATHTOF(data\helmets\jthelmet\camo1.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\jthelmet\camo1_co.paa),QPATHTOF(data\helmets\jthelmet\camo1_co.paa)};

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		hiddenSelections[] = {"Camo1","Visor"};
		uniformModel = QPATHTOF(data\helmets\rri_jthelmet.p3d);
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};

class GHELMET(jt_glow): H_HelmetO_ViperSP_hex_F
{
	author = AUTHOR;
	scope = 1;
	displayName = "[SOB] Jumptrooper Helmet";
	model = QPATHTOF(data\helmets\rri_jthelmet.p3d);
	picture = QPATHTOF(data\ui\JTHelmet.paa);
	hiddenSelections[] = {"Camo1","Visor"};
    hiddenSelectionsmaterials[] = {QPATHTOF(data\helmets\jthelmet\camo1.rvmat),QPATHTOF(data\helmets\jthelmet\camo1.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\jthelmet\camo1_co.paa),QPATHTOF(data\helmets\jthelmet\camo1_co.paa)};

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		hiddenSelections[] = {"Camo1","Visor"};
		uniformModel = QPATHTOF(data\helmets\rri_jthelmet.p3d);
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};
