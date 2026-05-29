class CfgAmmo {
	class MissileBase;
	class M_NLAW_AT_F: MissileBase
	{
		class Components;
	};
    class M_Titan_AA;
    class GAMMO(Penetrator_Base);
    class GAMMO(plx_at): M_NLAW_AT_F {
        // model=QPATHTOEF(props,munitions\rri_cluster_missile.p3d);
		hit=1500;
		indirectHit=20;
		indirectHitRange=2;
		explosive=1;
		warheadName="HE";
		submunitionAmmo = QGAMMO(plx_sub);
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=500;
		aiAmmoUsageFlags="640";
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="";
		muzzleEffect="";
		simulationStep=0.0020000001;
		initTime=0;
		trackOversteer=1.5;
		trackLead=0.89999998;
		timeToLive=22;
		maneuvrability=20;
		airFriction=0.085000001;
		sideAirFriction=1;
		maxSpeed=250;
		typicalSpeed=160;
		thrustTime=25;
		thrust=45;
		fuseDistance=50;
		effectsMissile=QEGVAR(weapons_core,Missle_Trail_Blue);
		whistleDist=4;
		airLock=1;
		irLock=1;
		lockType=2;
		missileLockCone=4.5;
		missileKeepLockedCone=160;
		missileLockMaxDistance=2000;
		missileLockMinDistance=50;
		missileLockMaxSpeed=35;
		manualControl=1;
		missileManualControlCone=45;
		maxControlRange=2000;
		weaponLockSystem="18";
		cmImmunity=0.40000001;
		flightProfiles[]=
		{
			"Direct",
			"TopDown"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=150;
			descendDistance=180;
			minDistance=180;
			ascendAngle=30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=50;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=50;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=3.7;
						angleRangeVertical=2.3;
						maxTrackableATL=50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
    };

    class GAMMO(plx_AA): M_Titan_AA {
        hit = 450;
        indirectHit = 30;
        indirectHitRange = 3;
        caliber = 20;
        maxSpeed = 1200;
        typicalSpeed = 1000;
        cmimmunity = 0.7;
    };

    class GAMMO(plx_sub): GAMMO(Penetrator_Base)
    {
        hit = 800;
    };
};
