class GVAR(Rocket_Base): 3AS_R_Mk40_AT
{
	hit = 500;
	indirectHit = 20;
	indirectHitRange = 3;
	caliber = 50;
	warheadName = "TandemHEAT";
};

class GVAR(HH12_cluster_Rocket): M_NLAW_AT_F {
	hit = 60;
	indirectHit = 20;
	indirectHitRange = 10;
	caliber = 50;
	maxspeed = 500;
	timeToLive = 10;
	thrustTime = 10;
	thrust = 100;
	fuseDistance=50;
	warheadName = "TandemHEAT";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitSpeed = 1000;
	submunitionParentSpeedCoef = 0;
	submunitionInitialOffset[] = {0, 0, 0};
	triggerOnImpact=1;
	deleteParentWhenTriggered=0;
	cost=500;
	aiAmmoUsageFlags="128 + 512";
	explosionSoundEffect="DefaultExplosion";
	canlock = 1;
	irlock = 1;
	laserLock = 1;
	lockType = 2;
	effectsMissileInit="";
	muzzleEffect="";
	submunitionAmmo[] = {"Mo_cluster_AP",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
	submunitionConeAngle = 30;
	submunitionConeType[] = {"poissonDisc",100};
	triggerDistance = 100;

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: IRSensorComponent
				{
					class AirTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=20;
						maxRange=3500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=150;
					angleRangeHorizontal=3.7;
					angleRangeVertical=2.3;
					maxTrackableATL=50;
				};
			};
		};
	};

	flightProfiles[]=
	{
		"Direct"
	};

	missileLockCone=7;
	missileKeepLockedCone=160;
	missileLockMaxDistance=4000;
	missileLockMinDistance=50;
	missileLockMaxSpeed=75;
	manualControl=0;
	missileManualControlCone=45;
	maxControlRange=2000;
	weaponLockSystem = "1 + 2 + 16";
};

class GVAR(HH12_rocket): M_NLAW_AT_F {
	hit = 700;
	indirectHit = 20;
	indirectHitRange = 3;
	caliber = 50;
	maxspeed = 500;
	timeToLive = 10;
	thrustTime = 10;
	thrust = 100;
	fuseDistance=50;
	warheadName = "TandemHEAT";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitSpeed = 1000;
	submunitionParentSpeedCoef = 0;
	submunitionInitialOffset[] = {0, 0, 0};
	triggerOnImpact=1;
	deleteParentWhenTriggered=0;
	cost=500;
	aiAmmoUsageFlags="128 + 512";
	explosionSoundEffect="DefaultExplosion";
	canlock = 1;
	irlock = 1;
	laserLock = 1;
	lockType = 2;
	effectsMissileInit="";
	muzzleEffect="";

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: IRSensorComponent
				{
					class AirTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=20;
						maxRange=3500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=150;
					angleRangeHorizontal=3.7;
					angleRangeVertical=2.3;
					maxTrackableATL=50;
				};
			};
		};
	};

	flightProfiles[]=
	{
		"Direct"
	};

	missileLockCone=7;
	missileKeepLockedCone=160;
	missileLockMaxDistance=4000;
	missileLockMinDistance=50;
	missileLockMaxSpeed=75;
	manualControl=0;
	missileManualControlCone=45;
	maxControlRange=2000;
	weaponLockSystem = "1 + 2 + 16";
};