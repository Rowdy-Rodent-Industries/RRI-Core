class GVAR(ATTE): 3AS_ATTE_Base 
{
	scope = 2;
	author = AUTHOR;
	displayName = "[41st] AT-TE";

	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,leg);
	weapons[] = {"ls_weapon_CMFlareLauncher"};
	Magazines[] = {"ls_mag_240rnd_CMFlare_blue"};

	ace_cargo_space = 50;

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
			CARGO_XX(EGVAR(static,Ressuply_Base),2);
			CARGO_XX(EGVAR(static,Ressuply_Ammo),2);
		};
	};

	armor=800;

	class Turrets: Turrets
	{
		class MainTurretTop: MainTurretTop
		{
			weapons[]=
			{
				QGVAR(ATTE_Top_Cannon),
				"SmokeLauncher"
			};
			magazines[]=
			{
				QGVAR(ATTE_AP),
				QGVAR(ATTE_AP),
				QGVAR(ATTE_HE),
				QGVAR(ATTE_HE),
				"SmokeLauncherMag"
			};
		};
		class MainTurretFront: MainTurretFront
		{
			weapons[]=
			{
				"SmokeLauncher"
			};
			magazines[]=
			{
				"SmokeLauncherMag"
			};
		};
		class MainTurretBack: MainTurretBack
		{
			weapons[]=
			{
				"SmokeLauncher"
			};
			magazines[]=
			{
				"SmokeLauncherMag"
			};
		};
	};

	maxSpeed = 60;
	peakTorque= 300000;
	enginePower = 10000;
};