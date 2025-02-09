class GVAR(Rho_Transport): 3AS_Rho_Crate_REP_Transport
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] Rho Transport Crate";

	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,static);

	ace_cargo_space = 30;
};

class GVAR(Rho_Barracks): 3AS_Rho_Crate_REP_Barracks //Make Respawn Vehicle
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] Rho Barracks Crate";

	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,static);

	ace_cargo_space = 30;

	animationList[]=
		{
			"HideBarracks",
			0,
			"HideSeats",
			1,
			"HideDoor",
			0
		};
		textureList[]=
		{
			"Republic",
			1,
			"Medical",
			0,
			"Imperial",
			0
		};

	class ACE_Actions: ACE_Actions {
		class ACE_MainActions: ACE_MainActions {
			position = "[0,10,3]";
			distance = 10;
			displayName = "Crate Intereactions";
			condition = "true";
			class GVAR(Crate_Controls) {
				displayName = "FOB Options";
				statement = "";
				exceptions[] = {};
				showDisabled = 0;
				priority = 1;

				class updateRespawn {
					displayName = "<t color='#006da3'>Update Respawn Position</t>";
					condition = QEGVAR(common,respawnUpdateEnabled);
					statement = QUOTE([position _target] call EFUNC(common,updateRespawn));
				};
			};
		};
	};
};

class GVAR(Rho_Medical): 3AS_Rho_Crate_REP_Medical // Make Medical Vehicle
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] Rho Medical Crate";

	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,static);
};