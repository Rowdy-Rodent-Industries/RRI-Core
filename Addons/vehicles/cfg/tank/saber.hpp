class GVAR(TX130_Base): 3as_saber_01_Base
{
	author = AUTHOR;
	displayName = "[41st] TX-130";
	faction = QEGVAR(faction,41st);
	editorSubCategory = QEGVAR(edsubcat,Tanks);

	side =1;
	scope = 2;
	scopeCurator = 2;

	weapons[] = {"ls_weapon_CMFlareLauncher","TruckHorn2"};
	Magazines[] = {"ls_mag_240rnd_CMFlare_blue"};

	ace_cargo_space = 10;
    maxSpeed = 100;
    enginePower = 1850;
    peakTorque = 7000;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\tx130\saber_hull_co.paa),
		QPATHTOF(data\tx130\saber_weapons_co.paa)
	};

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
		};
	};

	class Turrets:Turrets
	{
		class MainTurret_bottom: MainTurret_bottom
		{
			weapons[] = 
			{
				QGVAR(Saber_Cannon)
			};
			magazines[] = 
			{
				QGVAR(Saber_HEAT),
				QGVAR(Saber_HEAT),
				QGVAR(Saber_HEAT)
			};
		};
		class Mainturret_top: Mainturret_top
		{
			weapons[]=
            {
                "WM_KB50B",
                "SmokeLauncher"
            };
            magazines[]=
            {
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "WM_KB50B_Mag",
                "SmokeLauncherMag"
            };
		};
	};

	class Components: Components {
            class IRSensorComponent: IRSensorComponent {
                class AirTarget {
                    minRange = 500;
                    maxRange = 15000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                };
                class GroundTarget {
                    minRange = 500;
                    maxRange = 12000;
                    objectDistanceLimitCoef = 1;
                    viewDistanceLimitCoef = 1;
                };

                maxTrackableSpeed = 100;
            };

            class VisualSensorComponent: VisualSensorComponent {
                class AirTarget {
                    minRange = 500;
                    maxRange = 15000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = 1;
                };
                class GroundTarget {
                    minRange = 500;
                    maxRange = 12000;
                    objectDistanceLimitCoef = 1;
                    viewDistanceLimitCoef = 1;
                };

                maxTrackableSpeed = 100;
            };

            class ActiveRadarSensorComponent: ActiveRadarSensorComponent {
                class AirTarget {
                    minRange = 0;
                    maxRange = 0;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
                class GroundTarget {
                    minRange = 0;
                    maxRange = 0;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
            };

            class PassiveRadarSensorComponent: PassiveRadarSensorComponent {
                class AirTarget {
                    minRange = 32000;
                    maxRange = 32000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
                class GroundTarget {
                    minRange = 24000;
                    maxRange = 24000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };

                typeRecognitionDistance = 16000;
            };

            class LaserSensorComponent: LaserSensorComponent {
                class AirTarget {
                    minRange = 6000;
                    maxRange = 6000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
                class GroundTarget {
                    minRange = 6000;
                    maxRange = 6000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
            };

            class NVSensorComponent: NVSensorComponent {
                class AirTarget {
                    minRange = 6000;
                    maxRange = 6000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
                class GroundTarget {
                    minRange = 6000;
                    maxRange = 6000;
                    objectDistanceLimitCoef = -1;
                    viewDistanceLimitCoef = -1;
                };
            };
        };
};

class GVAR(TX130_Recon): 3AS_Saber_03_Base
{
	author = AUTHOR;
	displayName = "[41st] TX-130 (Recon)";
	faction = QEGVAR(faction,41st);
	editorSubCategory = QEGVAR(edsubcat,Tanks);
	side = 1;
	scope = 2;

	weapons[] = {"ls_weapon_CMFlareLauncher","TruckHorn2"};
	Magazines[] = {"ls_mag_240rnd_CMFlare_blue"};

	ace_cargo_space = 10;
    maxSpeed = 140;
    enginePower = 2000;
    peakTorque = 7000;

	editorPreview="\3AS\3AS_Saber\images\3AS_Saber_M1Recon.jpg";
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\tx130\saber_hull_co.paa),
		QPATHTOF(data\tx130\saber_weapons_scout_co.paa)
	};
	hiddenSelectionsMaterials[]=
	{
		"3AS\3AS_Saber\data\Saberhull.rvmat",
		"3AS\3AS_Saber\data\Saberweapons_scout.rvmat"
	};

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
		};
	};
};

class GVAR(TX130_Super): 3as_saber_01_Base
{
	author = AUTHOR;
	displayName = "[41st] TX-130 (Super)";
	faction = QEGVAR(faction,41st);
	editorSubCategory = QEGVAR(edsubcat,Tanks);
	side = 1;
	scope = 2;

	weapons[] = {"TruckHorn2","ls_weapon_CMFlareLauncher"};
    magazines[] = {"ls_mag_240rnd_CMFlare_blue"};

	model="3as\3as_saber\model\tcw_tx130_super.p3d";

	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\tx130\saber_hull_co.paa),
		QPATHTOF(data\tx130\saber_weapons_co.paa)
	};

	ace_cargo_space = 20;
	maxSpeed = 95;
    enginePower = 1450;
    peakTorque = 5200;

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
		};
	};

	class Turrets: Turrets
	{
		// delete MainTurret_bottom;
		class Mainturret_super: Mainturret_top
		{
			body="MainTurret_Super";
			gun="Maingun_Super";
			animationSourceBody="MainTurret_Super";
			animationSourceGun="Maingun_Super";
			weapons[] = 
			{
				QGVAR(Super_Cannon)
			};
			magazines[] = 
			{
				QGVAR(Super_AP),
				QGVAR(Super_AP)
			};
			minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minElev=-10;
				maxElev=30;
				initElev=0;
				proxytype="CPGunner";
				gunnername="Gunner";
				proxyIndex=2;
				gunnerAction="Saber_Driver";
				gunnerInAction="Saber_Driver";
				forceHideGunner=1;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerRightHandAnimName="konec hlavne3";
				gunnerLeftHandAnimName="konec hlavne3";
				soundAttenuationTurret="HeliAttenuationGunner";
				memoryPointGun[]=
				{
					"usti hlavne3",
					"usti hlavne4"
				};
				memoryPointGunnerOptics="SuperSabergunnerview";
				gunnerOpticsEffect[]={};
				gunnerHasFlares=1;
		};
	};

	class Components: Components {
		class IRSensorComponent: IRSensorComponent {
			class AirTarget {
				minRange = 500;
				maxRange = 15000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = 1;
			};
			class GroundTarget {
				minRange = 500;
				maxRange = 12000;
				objectDistanceLimitCoef = 1;
				viewDistanceLimitCoef = 1;
			};

			maxTrackableSpeed = 100;
		};

		class VisualSensorComponent: VisualSensorComponent {
			class AirTarget {
				minRange = 500;
				maxRange = 15000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = 1;
			};
			class GroundTarget {
				minRange = 500;
				maxRange = 12000;
				objectDistanceLimitCoef = 1;
				viewDistanceLimitCoef = 1;
			};

			maxTrackableSpeed = 100;
		};

		class ActiveRadarSensorComponent: ActiveRadarSensorComponent {
			class AirTarget {
				minRange = 0;
				maxRange = 0;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
			class GroundTarget {
				minRange = 0;
				maxRange = 0;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
		};

		class PassiveRadarSensorComponent: PassiveRadarSensorComponent {
			class AirTarget {
				minRange = 32000;
				maxRange = 32000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
			class GroundTarget {
				minRange = 24000;
				maxRange = 24000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};

			typeRecognitionDistance = 16000;
		};

		class LaserSensorComponent: LaserSensorComponent {
			class AirTarget {
				minRange = 6000;
				maxRange = 6000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
			class GroundTarget {
				minRange = 6000;
				maxRange = 6000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
		};

		class NVSensorComponent: NVSensorComponent {
			class AirTarget {
				minRange = 6000;
				maxRange = 6000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
			class GroundTarget {
				minRange = 6000;
				maxRange = 6000;
				objectDistanceLimitCoef = -1;
				viewDistanceLimitCoef = -1;
			};
		};
	};
};