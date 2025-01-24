class GVAR(BLTB): BTL_Base
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] BLT-B Y-Wing";
	displayNameShort = "[41st] BLT-B Y-Wing";

	side = 1;
	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,Fixed);

	weapons[] = {QGVAR(AG_Cannon), "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
	magazines[] = {
        QGVAR(AG_Cannon_Mag), QGVAR(AG_Cannon_Mag),
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", 
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", 
        "Laserbatteries" 
    };

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
		};
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
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			defaultDisplay="EmptyDisplay";
			class Components
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType="MinimapDisplayComponent";
					resource="RscCustomInfoMiniMap";
				};
				class VehicleDriverDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Driver";
				};
				class VehicleMissileDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay
				{
					componentType="SensorsDisplayComponent";
					range[]={8000,2000,4000,16000,30000};
					resource="RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
			defaultDisplay="SensorDisplay";
			class Components {
				class EmptyDisplay {
					componentType="EmptyDisplayComponent";
				};
				class MinimapDisplay {
					componentType="MinimapDisplayComponent";
					resource="RscCustomInfoMiniMap";
				};
				class VehicleDriverDisplay {
					componentType="TransportFeedDisplayComponent";
					source="Driver";
				};
				class VehicleMissileDisplay {
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay {
					componentType="SensorsDisplayComponent";
					range[]={8000,2000,4000,16000,30000};
					resource="RscCustomInfoSensors";
				};
			};
		};
		class TransportPylonsComponent {
			UIPicture = QPATHTOF(data\ui\BTLB_3den_ca.paa);
			class pylons {
				// bomb bay
				class pylons0 {
					hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(Bomb_Shinies);
					priority = 10;
					maxweight = 2500;
					UIposition[] = {0.325, 0.45};
				};

				// aa
				class pylons1: pylons0 {
					hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
					priority = 10;
					maxweight = 2500;
					UIposition[] = {0.45, 0.15};
				};

				class pylons2: pylons1 {
					UIposition[] = {0.2, 0.15};
					mirroredMissilePos = 2;
				};

				// universal pylons
				class pylons3: pylons1 {
					hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
					priority = 9;
					maxweight = 2500;
					UIposition[] = {0.45, 0.25};
				};

				class pylons4: pylons3 {
					UIposition[] = {0.2, 0.25};
					mirroredMissilePos = 4;
				};

				class pylons5: pylons1 {
					hardpoints[] = {QGVAR(Rock_Pylon),QGVAR(Harm_Pylon), QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon),QGVAR(AGM_Heavy_Pylon),QGVAR(Bomb_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
					priority = 7;
					maxweight = 5000;
					UIposition[] = {0.45, 0.35};
				};

				class pylons6: pylons5 {
					UIposition[] = {0.2, 0.35};
					mirroredMissilePos = 6;
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
	htMin=60;
	htMax=1800;
	afMax=200;
	mfMax=100;
	mFact=0;
	tBody=0;
	radartype=4;
	lockdetectionsystem="2 + 8 + 4";
	canlock = 2;
	allowTabLock = 1;
	incommingmissliedetectionsystem=16;
	acceleration=200;
	maxSpeed=550;
	landingAoa="6 * 3.1415 / 180";
	landingSpeed=215;
	stallSpeed=50;
	stallWarningTreshold=0.1;
	armor=200;
	armorStructured=1;
	envelope[]={0.2,1,2.5,4.8000002,6,7,7.5,7.5,7.5,7,6.4000001,5.5999999,4.0999999,3.7,3.3,3,2.5,2,1.5};
	draconicForceXCoef=6;
	draconicForceYCoef=1.5;
	draconicForceZCoef=6.5;
	draconicTorqueXCoef=2.0999999;
	draconicTorqueYCoef=3;
	angleOfIndicence=0.079999998;
	airFriction0[]={75,50,12};
	airFriction1[]={75,50,12};
	airFriction2[]={75,50,12};
	altNoForce=13000;
	altFullForce=10000;
	elevatorCoef[]={0.69999999,0.80000001,0.89999998,1,1.1,1.2,1.2,1.3,1.25,1.2,1.15,1.1,1};
	elevatorSensitivity=1.1;
	elevatorControlsSensitivityCoef=3.5;
	aileronCoef[]={0.5,0.69999999,1,1,1.2,1.15,1.1};
	aileronSensitivity=2.2;
	aileronControlsSensitivityCoef=3;
	rudderCoef[]={1.6,2,2,2.9000001,2.8,2,1};
	rudderInfluence=0.89999998;
	rudderControlsSensitivityCoef=6;
	thrustCoef[]={1.8,1.9,1.95,2,2.5,3,3.5,2.5,2,1.7,1.5,1.1,1,1,1};
	irScanRangeMin=10;
	irScanRangeMax=10000;
	irScanToEyeFactor=8;
	fuelCapacity=2000;
	wheelSteeringSensitivity=1.5;
	maxOmega=2000;
	airBrake=90;
	airBrakeFrictionCoef=75;
	flaps=1;
	flapsFrictionCoef=0.31999999;
	gearsUpFrictionCoef=0.60000002;
	airFrictionCoefs0[]={0,0,0};
	airFrictionCoefs1[]={0.1,0.5,0.0066};
	airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
	memoryPointLRocket="P Raketa";
	memoryPointRRocket="L Raketa";
	cost=10000000;
	type="VAir";
	threat[]={0.2,0.69999999,0.89999998};
};