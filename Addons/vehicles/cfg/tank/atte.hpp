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
				"3AS_ATTE_Turret",
				"SmokeLauncher"
			};
			magazines[]=
			{
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"SmokeLauncherMag"
			};
		};
		class MainTurretBack: MainTurretBack
		{
			weapons[]=
			{
				"3AS_ATTE_Turret",
				"SmokeLauncher"
			};
			magazines[]=
			{
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"3AS_250Rnd_ATTE_30mm_MP_shells",
				"SmokeLauncherMag"
			};
		};
	};

	hiddenselections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo11"
	};
	hiddenselectionstextures[]=
	{
		QPATHTOF(data\atte\41st_ATTE_Shell_co.paa),
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
		QPATHTOF(data\atte\41st_ATTE_Legs_co.paa),
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
		"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
	};

	maxSpeed = 60;
	peakTorque= 300000;
	enginePower = 10000;
};

// class GVAR(ATJT): 3AS_ATJT_Base
// {
// 	scope = 2;
// 	author = AUTHOR;
// 	displayName = "[41st] AT-TE";

// 	faction = QEGVAR(faction,41st);
// 	editorSubcategory = QEGVAR(edsubcat,leg);
// 	weapons[] = {"ls_weapon_CMFlareLauncher"};
// 	Magazines[] = {"ls_mag_240rnd_CMFlare_blue"};

// 	model="3AS\3AS_ATTE\model\3AS_ATJT.p3d";

// 	// hiddenselections[]=
// 	// {
// 	// 	"camo1",
// 	// 	"camo2",
// 	// 	"camo3",
// 	// 	"camo4",
// 	// 	"camo5"
// 	// };
// 	// hiddenselectionstextures[]=
// 	// {
// 	// 	QPATHTOF(data\atte\41st_ATTE_Shell_co.paa),
// 	// 	"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
// 	// 	"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
// 	// 	QPATHTOF(data\atte\41st_ATTE_Legs_co.paa),
// 	// 	"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
// 	// 	"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
// 	// };
// };