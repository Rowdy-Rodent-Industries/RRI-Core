class GVAR(LAATC): 3as_laat_Base
{
	author = AUTHOR;
	displayName = "(41st) LAAT/C";
	displayNameShort = "(41st) LAAT/C";
	scope = 2;
	scopeCurator = 2;
	side = 1;

	faction = QEGVAR(faction,41st);
	crew="3AS_Clone_P2_Pilot";
	editorSubCategory = QGVAR(edsubcat_Heli);

	weapons[] = {
        "Laserdesignator_pilotCamera", QGVAR(LAAT_Cannon), "ls_weapon_CMFlareLauncher"
    };
	magazines[] = {
        "ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple",
		QGVAR(LAAT_Cannon_Mag),QGVAR(LAAT_Cannon_Mag),QGVAR(LAAT_Cannon_Mag),
        "Laser_Battery","Laser_Battery","Laser_Battery",
        "Laserbatteries"
    };

	maximumLoad = 2500;
	ace_cargo_space = 25;

	model="3AS\3AS_LAATC\3AS_LAAT_C.p3d";
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\laatc\Hull_co.paa),
		QPATHTOF(data\laatc\Wings_co.paa),
		QPATHTOF(data\laatc\Top_co.paa),
		"3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
	};

	class PilotCamera 
	{
		class OpticsIn 
		{
			class Wide
			{
				opticsDisplayName = "WFOV"; 
                initAngleX = 0; 
                minAngleX = -10; 
                maxAngleX = 90; 
                initAngleY = 0; 
                minAngleY = -90; 
                maxAngleY = 90; 
                initFov = "(30 / 120)"; 
                minFov = "(30 / 120)"; 
                maxFov = "(30 / 120)"; 
                directionStabilized = 1; 
                visionMode[] = {"Normal", "NVG", "Ti"}; 
                thermalMode[] = {0,1}; 
                gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; 
                opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"}; 
			};
		class Medium: Wide 
			{ 
                opticsDisplayName = "MFOV"; 
                initFov = "(15 / 120)"; 
                minFov = "(15 / 120)"; 
                maxFov = "(15 / 120)"; 
                gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d"; 
            }; 
        class Narrow: Wide
			{ 
                opticsDisplayName = "NFOV"; 
                initFov = "(3.75 / 120)"; 
                minFov = "(3.75 / 120)"; 
                maxFov = "(3.75 / 120)"; 
                gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d"; 
            }; 
			showMiniMapInOptics = 1; 
			showUAVViewInOptics = 0; 
			showSlingLoadManagerInOptics = 0; 
			minTurn = -180; 
			maxTurn = 180; 
			initTurn = 0; 
			minElev = -10; 
			maxElev = 90; 
			initElev = -10; 
			maxXRotSpeed = 0.3; 
			maxYRotSpeed = 0.3; 
			pilotOpticsShowCursor = 1; 
			controllable = 1; 
		};
	};

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};

	class components: components {
		class SensorsManagerComponent {
			class components {
				class IRSensorComponent: SensorTemplateIR {
					class AirTarget {
						minRange=100;
						maxRange=16000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=6000;
						maxRange=16000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=-1;
					};
					angleRangeHorizontal=180;
					angleRangeVertical=180;
					maxTrackableSpeed=800;
					componentType="IRSensorComponent";
					typeRecognitionDistance=2000;
					maxFogSeeThrough=0.995;
					color[]={1,0,0,1};
					allowsMarking=1;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=-1e10;
					maxSpeedThreshold=1e10;
					animDirection="";
					aimDown=0;
					minTrackableSpeed=-1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class VisualSensorComponent: SensorTemplateVisual {
					class AirTarget {
						minRange=100;
						maxRange=16000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=100;
						maxRange=16000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=-1;
					};
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					maxTrackableSpeed=100;
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
					minSpeedThreshold=-1e10;
					maxSpeedThreshold=1000;
					minTrackableSpeed=-1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType="PassiveRadarSensorComponent";
					class AirTarget {
						minRange=100;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=100;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					typeRecognitionDistance=4000;
					angleRangeHorizontal=360;
					angleRangeVertical=360;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=-1e10;
					maxSpeedThreshold=1000;
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
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget {
						minRange=5000;
						maxRange=10000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					typeRecognitionDistance=8000;
					angleRangeHorizontal=160;
					angleRangeVertical=180;
					groundNoiseDistanceCoef=0.2;
					componentType="ActiveRadarSensorComponent";
					maxGroundNoiseDistance=200;
					minSpeedThreshold=-1e10;
					maxSpeedThreshold=1000;
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
					angleRangeHorizontal=180;
					angleRangeVertical=180;
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
			UIPicture="3as\3AS_LAAT\LAATI\data\ui\pylon_laat.paa";
            class Pylons { 
                class PylonLeft1 { 
                    attachment = QGVAR(AA_Typhoon); 
                    priority = 1; 
                    hardpoints[] = {QGVAR(AA_Pylon)}; 
                    UIposition[] = {0.20, 0.1}; 
                }; 
                class PylonRight1: PylonLeft1 { 
                    mirroredMissilePos = 1; 
                    UIposition[] = {0.45, 0.1}; 
                }; 
                class PylonLeft2 { 
                    attachment = QGVAR(AA_Typhoon); 
                    priority = 2; 
                    hardpoints[] = {QGVAR(AA_Pylon)}; 
                    UIposition[] = {0.06, 0.35}; 
                }; 
                class PylonRight2: PylonLeft2 { 
                    mirroredMissilePos = 3; 
                    UIposition[] = {0.59, 0.35}; 
                }; 
            }; 
            class Presets { 
                class Empty {
                    displayName = "Empty"; 
                    attachment[] = {}; 
                }; 
                class Default { 
                    displayName = "Default"; 
                    attachment[] = {QGVAR(AA_Typhoon), QGVAR(AA_Typhoon), QGVAR(AGM_JackHammer), QGVAR(AGM_JackHammer)}; 
                };
            }; 
		};
	};
};