class CfgAmmo
{
    class MissileBase;
	class M_NLAW_AT_F: MissileBase
	{
		class Components;
	};
    class M_Titan_AA;
    class GAMMO(Penetrator_Base);
    class GAMMO(RPSHP_AT): M_NLAW_AT_F {
        hit = 1075;
        indirectHit = 20;
        indirectHitRange = 3;
        caliber = 65;
        maxspeed = 500;
        timeToLive = 10;
        thrustTime = 10;
        thrust = 100;
        fuseDistance=50;
        effectsMissile=QEGVAR(weapons_core,Missile_Trail_Blue_nolight);
        warheadName = "TandemHEAT";
        submunitionAmmo = QGAMMO(RPS_HP_SUB);
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, 0};
        triggerOnImpact=1;
        deleteParentWhenTriggered=0;
        cost=500;
        aiAmmoUsageFlags="640";
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
                    class IRSensorComponent: SensorTemplateIR
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
        weaponLockSystem = "19";
    };

    class GAMMO(RPSHP_AA): M_Titan_AA {
        hit = 700;
        indirectHit = 20;
        indirectHitRange = 3;
        caliber = 20;
        maxSpeed = 1200;
        typicalSpeed = 1000;
        cmimmunity = 0.7;
    };

    class GAMMO(RPS_HP_SUB): GAMMO(Penetrator_Base)
    {
        hit = 1075;
    };
};
