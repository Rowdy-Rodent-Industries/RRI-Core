class GVAR(PX10): 3AS_PX10_REP_F
{
	author = AUTHOR;
	displayName = "[41st] PX-10";
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,trans);

	armor = 200;

	maxSpeed = 120;
};

class GVAR(PX10_Armoured): 3AS_PX10_REP_UP
{
	author = AUTHOR;
	displayName = "[41st] PX-10 Armoured"
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,trans);

	armor = 400;
	maxSpeed = 100;
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
};