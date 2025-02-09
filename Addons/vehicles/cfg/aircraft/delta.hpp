class GVAR(Delta7): 3AS_Delta7_Base_F
{
	scope = 2;
	scopecurator = 2;

	author = AUTHOR;
	displayName = "[41st] Delta-7";
	displayNameShort = "[41st] Delta-7";

	crew = "3AS_Clone_P2_Pilot";

	side = 1;
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,Fixed);

	weapons[] = {QGVAR(AA_Cannon), "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
	magazines[] = {
        QGVAR(AA_Cannon_Mag), QGVAR(AA_Cannon_Mag), QGVAR(AA_Cannon_Mag),
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple",
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple",
        "Laserbatteries"
    };

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
	soundSetSonicBoom[]=
	{
		"Plane_Fighter_SonicBoom_SoundSet",
		1.50,
		0.75,
		150
	};

	ace_cargo_space = 15;
	ace_cargo_hasCargo = 1;
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
						minRange=6000;
						maxRange=6000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget {
						minRange=6000;
						maxRange=6000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					angleRangeHorizontal=180;
					angleRangeVertical=180;
					maxTrackableSpeed=400;
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
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					minTrackableSpeed=-1e+010;
					minTrackableATL=-1e+010;
					maxTrackableATL=1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType="PassiveRadarSensorComponent";
					class AirTarget {
						minRange=16000;
						maxRange=16000;
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
					typeRecognitionDistance=8000;
					angleRangeHorizontal=180;
					angleRangeVertical=180;
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
            UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";

            class pylons {
                class pylons1 {
                    hardpoints[] = {QGVAR(AGM_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AA_Pylon),QGVAR(Stealth_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 10;
                    maxweight = 300;
                    UIposition[] = {0.6, 0.45};
                };

                class pylons2: pylons1 {
                    UIposition[] = {0.05, 0.45};
                    mirroredMissilePos = 1;
                };

                class pylons3: pylons1 {
                    hardpoints[] = {QGVAR(AGM_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AA_Pylon),QGVAR(Stealth_Pylon)};
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
                    hardpoints[] = {QGVAR(AGM_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AA_Pylon),QGVAR(Stealth_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 7;
                    maxweight = 5000;
                    UIposition[] = {0.5, 0.25};
                };

                class pylons6: pylons5 {
                    UIposition[] = {0.15, 0.25};
                    mirroredMissilePos = 5;
                };

                class Pylons7: pylons6 {
                    hardpoints[] = {QGVAR(AGM_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AA_Pylon),QGVAR(Stealth_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 5;
                    maxweight = 4000;
                    UIposition[] = {0.325, 0.15};
                };
            };

            class presets {
                class empty {
                    displayName = "Empty";
                    attachment[] = {};
                };
				class Default {
				displayName = "Default";
				attachment[] = {QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon)};
				};
            };
        };
    };

	memoryPointLMissile="konec hlavne";
    memoryPointRMissile="konec hlavne1";
    memoryPointLRocket="konec hlavne";
    memoryPointRRocket="konec hlavne1";

    airBrake = 55;
    airBrakeFrictionCoef = 60;
};