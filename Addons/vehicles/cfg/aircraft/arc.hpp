class GVAR(ARC_170): 3as_arc_170_base {
	scope = 2;
	author = AUTHOR;
	displayName = "(41st) ARC-170";
	displayNameShort = "(41st) ARC-170";

	crew = "3AS_Clone_P2_Pilot";

	side = 1;
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,Fixed);

	hiddenselectionstextures[]=
	{
		"3as\3AS_ARC170\Data\units\101st_Main_Frame_CO.paa",
		"3as\3AS_ARC170\Data\units\101st_Wings_Engines_CO.paa",
		"3as\3AS_ARC170\Data\units\101st_Guns_CO.paa"
	};

	weapons[] = {QGVAR(ARC_Cannon), QGVAR(Heavy_Cannon),"ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};

    magazines[] = {
        QGVAR(ARC_Cannon_Mag), QGVAR(ARC_Cannon_Mag),
		QGVAR(Heavy_Cannon_Mag),QGVAR(Heavy_Cannon_Mag),QGVAR(Heavy_Cannon_Mag),
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple",
        "Laserbatteries"
    };

	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.25;
				minFov = 0.25;
				maxFov = 0.25;
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti","NVG"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {};
			};
			class Medium: Wide
			{
				opticsDisplayName = "MFOV";
				initFov = 0.1;
				minFov = 0.1;
				maxFov = 0.1;
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow: Wide
			{
				initFov = 0.02;
				minFov = 0.02;
				maxFov = 0.02;
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			class Close: Wide
			{
				initFov = 0.005;
				minFov = 0.005;
				maxFov = 0.005;
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -360;
		maxTurn = 360;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		maxMouseXRotSpeed = 0.5;
		maxMouseYRotSpeed = 0.5;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};

	acceleration=350;
	maxSpeed=950;
	armor=250;

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(supplies,FuelCanister),1);
		};
	};

	class Components: Components {
		class SensorsManagerComponent {
			class Components {
				class IRSensorComponent: SensorTemplateIR {
					class AirTarget {
						minRange=4000;
						maxRange=4000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget {
						minRange=6000;
						maxRange=6000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					angleRangeHorizontal=360;
					angleRangeVertical=3600;
					maxTrackableSpeed=600;
					componentType="IRSensorComponent";
					typeRecognitionDistance=2000;
					maxFogSeeThrough=0.995;
					color[]={1,0,0,1};
					allowsMarking=1;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					animDirection="";
					aimDown=0;
					minTrackableSpeed=-1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class VisualSensorComponent: SensorTemplateVisual {
					class AirTarget {
						minRange=8000;
						maxRange=8000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget {
						minRange=8000;
						maxRange=8000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					maxTrackableSpeed=1200;
					aimDown=1;
					animDirection="";
					componentType="VisualSensorComponent";
					nightRangeCoef=0;
					maxFogSeeThrough=0.94;
					color[]={1,1,0.5,0.80000001};
					typeRecognitionDistance=2000;
					allowsMarking=1;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					minTrackableSpeed=-1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType="PassiveRadarSensorComponent";
					class AirTarget {
						minRange=10000;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=10000;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					typeRecognitionDistance=4000;
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					animDirection="";
					aimDown=0;
					color[]={0.5,1,0.5,0.5};
					minTrackableSpeed=-1e+010;
					maxTrackableSpeed=1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
					allowsMarking=0;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
					class AirTarget {
						minRange=5000;
						maxRange=5000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=5000;
						maxRange=5000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					typeRecognitionDistance=8000;
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					groundNoiseDistanceCoef=0.2;
					componentType="ActiveRadarSensorComponent";
					maxGroundNoiseDistance=200;
					minSpeedThreshold=30;
					maxSpeedThreshold=40;
					color[]={0,1,1,1};
					allowsMarking=1;
					animDirection="";
					aimDown=0;
					minTrackableSpeed=-1e+010;
					maxTrackableSpeed=1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class LaserSensorComponent: SensorTemplateLaser {
					componentType="LaserSensorComponent";
					class AirTarget {
						minRange=6000;
						maxRange=6000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=6000;
						maxRange=6000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					typeRecognitionDistance=0;
					color[]={1,1,1,0};
					allowsMarking=1;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					animDirection="";
					aimDown=0;
					minTrackableSpeed=-1e+010;
					maxTrackableSpeed=1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class NVSensorComponent: SensorTemplateNV {
					componentType="NVSensorComponent";
					color[]={1,1,1,0};
					typeRecognitionDistance=0;
					class AirTarget {
						minRange=8000;
						maxRange=8000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=8000;
						maxRange=8000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					angleRangeHorizontal=90;
					angleRangeVertical=90;
					allowsMarking=1;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					animDirection="";
					aimDown=0;
					minTrackableSpeed=-1e+010;
					maxTrackableSpeed=1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
			};
		};
        class TransportPylonsComponent {
            UIPicture = "3as\3as_arc170\data\plane_arc_pylon_ca.paa";
            class pylons {
                class pylons1 {
                    hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(Bomb_Shinies);
                    priority = 10;
                    maxweight = 2500;
                    UIposition[] = {0.5, 0.25};
                };

                class pylons2: pylons1 {
                    UIposition[] = {0.15, 0.25};
                    mirroredMissilePos = 1;
                };

                class pylons3: pylons1 {
                    hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 9;
                    maxweight = 2500;
                    UIposition[] = {0.55, 0.35};
                };

                class pylons4: pylons3 {
                    UIposition[] = {0.1, 0.35};
                    mirroredMissilePos = 3;
                };

                class pylons5: pylons1 {
                    hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 7;
                    maxweight = 5000;
                    UIposition[] = {0.6, 0.45};
                };

                class pylons6: pylons5 {
                    UIposition[] = {0.05, 0.45};
                    mirroredMissilePos = 5;
                };
			};

            class presets {
                class empty {
                    displayName = "Empty";
                    attachment[] = {};
                };
				class Default {
				displayName = "Default";
				attachment[] = {QGVAR(Bomb_Shinies),QGVAR(Bomb_Shinies),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon)};
				};
            };
        };
    };

	class Turrets {};
};