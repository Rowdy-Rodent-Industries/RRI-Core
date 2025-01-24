class GVAR(ATAP): 3as_ATAP_base
{
	author = AUTHOR;
	displayName = "[41st] AT-AP";
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,leg);

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\atap\hull_co.paa),
		QPATHTOF(data\atap\weapons_and_decals_co.paa),
		QPATHTOF(data\atap\legs_co.paa)
	};

	class Turrets: Turrets 
	{
		class MainTurret1: MainTurret1
		{
			weapons[] = 
			{
				QGVAR(ATTE_Top_Cannon)
			};
			magazines[] = 
			{
				QGVAR(ATTE_AP),
				QGVAR(ATTE_AP)
			};
		};
		class MainTurretTop: MainTurretTop
		{
			weapons[] = 
			{
				QGVAR(ATAP_Cannon)
			};
			magazines[] = 
			{
				QGVAR(ATAP_HEAT),
				QGVAR(ATAP_HEAT),
				QGVAR(ATAP_HEAT)
			};
		};
		class MainTurretBottom: MainTurretBottom
		{
			weapons[] = 
			{
				"3AS_ATAP_PD_Turret",
                "SmokeLauncher"
			};
			magazines[] = 
			{
				"3AS_500Rnd_ATAP_PD_Mag",
                "3AS_500Rnd_ATAP_PD_Mag",
                "3AS_500Rnd_ATAP_PD_Mag",
                "3AS_500Rnd_ATAP_PD_Mag",
                "3AS_500Rnd_ATAP_PD_Mag",
                "3AS_500Rnd_ATAP_PD_Mag",
                "SmokeLauncherMag"
			};
		};
	};
};