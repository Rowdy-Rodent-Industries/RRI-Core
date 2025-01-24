class GVAR(PX10): 3AS_PX10_REP_F
{
	author = AUTHOR;
	displayName = "[41st] PX-10";
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,trans);

	armor = 200;

	maxSpeed = 120;

	hiddenSelections[]=
	{
		"Camo",
		"camo2",
		"camo3",
		"camo_Fuel",
		"camo_repair"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\px10\px10cav_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
		QPATHTOF(data\px10\px10fuel_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
	};
};

class GVAR(PX10_Armoured): 3AS_PX10_REP_UP
{
	author = AUTHOR;
	displayName = "[41st] PX-10 Armoured";
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,trans);

	armor = 400;
	maxSpeed = 100;

	hiddenSelections[]=
	{
		"Camo",
		"camo2",
		"camo3",
		"camo_Fuel",
		"camo_repair"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\px10\px10cav_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
		QPATHTOF(data\px10\px10fuel_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
	};
};

class GVAR(PX10_R3): 3AS_PX10_REP_R3
{
	author = AUTHOR;
	displayName = "[41st] PX-10 R3";
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,trans);

	ace_repair_canRepair=1;
	ace_rearm_defaultSupply=100000;
	ace_refuel_fuelCargo=-10;

	hiddenSelections[]=
	{
		"Camo",
		"camo2",
		"camo3",
		"camo_Fuel",
		"camo_repair"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\px10\px10cav_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
		QPATHTOF(data\px10\px10fuel_co.paa),
		"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
	};
};