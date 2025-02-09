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

class GVAR(Arsenal): NATO_Box_Base
{
	scope = 2;
	scopeCurator = 2;

	author = AUTHOR;
	displayName = "[41st] Arsenal Box";

	editorCategory = QEGVAR(edcat,EC);
	editorSubCategory = QEGVAR(edsubcat,Supplies);

	disableInventory = 1;

	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CanisterFuel_F.jpg";//todo
	model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";//todo
	icon = "iconObject_5x2";//todo
	hiddenSelections[] = {"camo"};//todo
	hiddenSelectionsTextures[] = {"a3\structures_f\items\vessels\data\canisterfuel_co.paa"};//todo

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