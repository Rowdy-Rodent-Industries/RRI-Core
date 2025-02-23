class GVAR(FuelCanister): Items_base_F
{
	scope = 2;
	scopeCurator = 2;

	author = AUTHOR;
	displayName = "[41st] Fuel Canister";

	editorCategory = QEGVAR(edcat,EC);
	editorSubCategory = QEGVAR(edsubcat,Supplies);

	disableInventory = 1;

	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CanisterFuel_F.jpg";
	model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
	icon = "iconObject_5x2";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"a3\structures_f\items\vessels\data\canisterfuel_co.paa"};

	placement = "vertical";
	mapSize = 1;
	destrType = "DestructDefault";
	armor = 30;
	fireResistance = 0.1;
	explosionShielding = 0.1;
	damageResistance = 0.004;
	supplyRadius = 20;
	transportFuel = 800;
	eden = 1;
	damageHalf[] = {};
	damageFull[] = {};

	ace_cargo_canLoad = 1;
	ace_cargo_size = 5;

	ace_refuel_fuelCargo = 100;
	ace_refuel_hooks[] = {{0,0,.7},{0,0,.7}};
	ace_repair_canRepair=1;
	ace_rearm_defaultSupply=1000;

	ace_dragging_canCarry = 1;
	ace_dragging_canDrag = 1;
	ace_dragging_dragPosition[] = {0, 1.5, 0};
	ace_dragging_carryPosition[] = {0, 1.5, 0};
};

class GVAR(Arsenal): RRI_Crate
{
	scope = 2;
	scopeCurator = 2;

	author = AUTHOR;
	displayName = "[41st] Arsenal Box";

	editorCategory = QEGVAR(edcat,EC);
	editorSubCategory = QEGVAR(edsubcat,Supplies);

	disableInventory = 1;

	hiddenSelections[] = {"camo"};//todo
	hiddenSelectionsTextures[] = {QPATHTOF(data\crate\Crate_arsenal_co.paa)};

	ace_cargo_canLoad = 1;
	ace_cargo_size = 5;

	class UserActions
	{
		class Arsenal
		{
			displayName = "ACE Arsenal";
			position = "camera";
			radius = 5;
			priority = 1;
			condition = "True";
			statement="[player, player, true] call ace_arsenal_fnc_openBox;";
			onlyForPlayer=1;
			hideOnUse=1;
		};
	};
};

class GVAR(Banner_Base): 3AS_FOB_Banner_Prop
{
	model="3AS\3AS_structures\FOB\Banner.p3d";
	displayName="[41st] Banner";

	editorCategory = QEGVAR(edcat,EC);
	editorSubCategory = QEGVAR(edsubcat,Props);

	hiddenSelections[]=
	{
		"Camo1"
	};
	scope=1;
	scopeCurator=1;
	hiddenSelectionsTextures[]=
	{
		"3AS\3AS_structures\FOB\data\Rep_Banner_CO.paa"
	};
};

class GVAR(Banner_Sarlacc): GVAR(Banner_Base)
{
	displayName = "[41st] Sarlacc Banner";
	scope = 2;

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\banner\Sarlacc_banner_co.paa)
	};
};

class GVAR(Banner_Mykal): GVAR(Banner_Base)
{
	displayName = "[41st] Mykal Banner";
	scope = 2;

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\banner\Mykal_banner_co.paa)
	};
};