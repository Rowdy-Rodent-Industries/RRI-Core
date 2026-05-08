class CfgAmmo {
    class B_338_Ball;
    class G_40mm_HE;
    class G_40mm_Smoke;
    class G_40mm_SmokeRed;
    class G_40mm_SmokeGreen;
    class G_40mm_SmokeYellow;
    class G_40mm_SmokePurple;
    class G_40mm_SmokeBlue;
    class G_40mm_SmokeOrange;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;
    class ammo_Penetrator_Base;
    class RocketBase;

    class GAMMO(Base): B_338_Ball
    {
        author = AUTHOR;
        model = QPATHTOF(data\effects\laser\blue\mti_laser_blue.p3d);
        cartridge = "";
        lightcolor[] = {0.25,0.25,0.5};
        flaresize = 3;
        tracerscale = 0.9;
        effectflare = "FlareShell";
        tracerstarttime = 0.05;
        tracerendtime = 30;
        initTime = 0;
        nvgonly = 0;
        airlock = 1;
        irtarget = 1;
        effectfly = QGVAR(Rifle_Blue_Tracer);
        brightness = 1000;
        timetolive = 20;
        airfriction = 0;
        coefgravity = 0;
        deflecting = 0;
        explosionEffects  = QGVAR(Plasma_Impact);
        craterEffects = QGVAR(Plasma_Impact);
        caliber = 1;
        hit = 10;
        dangerRadiusHit=12;
		dangerRadiusBulletClose=8;
		suppressionRadiusHit=8;
		suppressionRadiusBulletClose=6;
        aiAmmoUsageFlags=64;
        #include "sounds/hitsounds.hpp"
        class HitEffects
        {
            default_mat = QGVAR(Plasma_Impact);
            Hit_Foliage_Banana = QGVAR(Plasma_Impact);
            Hit_Foliage_Dead = QGVAR(Plasma_Impact);
            Hit_Foliage_green = QGVAR(Plasma_Impact);
            Hit_Foliage_Green_big = QGVAR(Plasma_Impact);
            Hit_Foliage_Palm = QGVAR(Plasma_Impact);
            Hit_Foliage_Pine = QGVAR(Plasma_Impact);
            hitBuilding = QGVAR(Plasma_Impact);
            hitConcrete = QGVAR(Plasma_Impact);
            hitFoliage = QGVAR(Plasma_Impact);
            hitGlass = QGVAR(Plasma_Impact);
            hitGlassArmored = QGVAR(Plasma_Impact);
            hitGroundHard = QGVAR(Plasma_Impact);
            hitGroundRed = QGVAR(Plasma_Impact);
            hitGroundSoft = QGVAR(Plasma_Impact);
            hitHay = QGVAR(Plasma_Impact);
            hitMan = QGVAR(Plasma_Impact);
            hitMetal = QGVAR(Plasma_Impact);
            hitMetalPlate = QGVAR(Plasma_Impact);
            hitPlastic = QGVAR(Plasma_Impact);
            hitRubber = QGVAR(Plasma_Impact);
            hitTyre = QGVAR(Plasma_Impact);
            hitVirtual = QGVAR(Plasma_Impact);
            hitWater = QGVAR(Plasma_Impact);
            hitWood = QGVAR(Plasma_Impact);
        };
    };

    class GAMMO(HP_Base): B_338_Ball
    {
        author = AUTHOR;
        model = QPATHTOF(data\effects\laser\yellow\mti_laser_yellow.p3d);
        cartridge = "";
        lightcolor[] = {0.25,0.25,0.5};
        flaresize = 5;
        tracerscale = 0.9;
        effectflare = "FlareShell";
        tracerstarttime = 0.05;
        tracerendtime = 30;
        initTime = 0;
        nvgonly = 0;
        airlock = 1;
        irtarget = 1;
        effectfly = QGVAR(Rifle_Yellow_Tracer);
        brightness = 1000;
        timetolive = 20;
        airfriction = 0;
        coefgravity = 0;
        deflecting = 0;
        explosionEffects  = QGVAR(Plasma_Impact_HP);
        craterEffects = QGVAR(Plasma_Impact_HP);
        caliber = 1;
        hit = 10;
        typicalSpeed = 1200;
        dangerRadiusHit=12;
		dangerRadiusBulletClose=8;
		suppressionRadiusHit=8;
		suppressionRadiusBulletClose=6;
        aiAmmoUsageFlags=64;
        simulation = "shotBullet";
        #include "sounds/hitsounds.hpp"
        class HitEffects
        {
            default_mat = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_Banana = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_Dead = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_green = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_Green_big = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_Palm = QGVAR(Plasma_Impact_HP);
            Hit_Foliage_Pine = QGVAR(Plasma_Impact_HP);
            hitBuilding = QGVAR(Plasma_Impact_HP);
            hitConcrete = QGVAR(Plasma_Impact_HP);
            hitFoliage = QGVAR(Plasma_Impact_HP);
            hitGlass = QGVAR(Plasma_Impact_HP);
            hitGlassArmored = QGVAR(Plasma_Impact_HP);
            hitGroundHard = QGVAR(Plasma_Impact_HP);
            hitGroundRed = QGVAR(Plasma_Impact_HP);
            hitGroundSoft = QGVAR(Plasma_Impact_HP);
            hitHay = QGVAR(Plasma_Impact_HP);
            hitMan = QGVAR(Plasma_Impact_HP);
            hitMetal = QGVAR(Plasma_Impact_HP);
            hitMetalPlate = QGVAR(Plasma_Impact_HP);
            hitPlastic = QGVAR(Plasma_Impact_HP);
            hitRubber = QGVAR(Plasma_Impact_HP);
            hitTyre = QGVAR(Plasma_Impact_HP);
            hitVirtual = QGVAR(Plasma_Impact_HP);
            hitWater = QGVAR(Plasma_Impact_HP);
            hitWood = QGVAR(Plasma_Impact_HP);
        };
    };

    class GAMMO(Shotgun_Base): GAMMO(Base)
    {
        simulationStep=9.9999997e-005;
        submunitionConeType[]=
		{
			"poissondisc",
			9
		};
		submunitionConeAngle=0.5;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
        submunitionAmmo = QGAMMO(Shotgun_Sub);
    };

    class GAMMO(Shotgun_HP): GAMMO(HP_Base)
    {
        simulationStep=9.9999997e-005;
        submunitionConeType[]=
		{
			"poissondisc",
			9
		};
		submunitionConeAngle=0.5;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
        submunitionAmmo = QGAMMO(Shotgun_Sub_HP);
    };

    class GAMMO(Shotgun_Sub): GAMMO(Base)
    {
        deflecting=2;
    };

    class GAMMO(Shotgun_Sub_HP): GAMMO(HP_Base)
    {
        deflecting=2;
    };

    class GAMMO(Orange): GAMMO(Base)
    {
        model = QPATHTOF(data\effects\laser\orange\mti_laser_orange.p3d);
        effectfly = QGVAR(Rifle_Orange_Tracer);
    };

    class GAMMO(Red): GAMMO(Base)
    {
        model = QPATHTOF(data\effects\laser\red\mti_laser_red.p3d);
        effectfly = QGVAR(Rifle_Red_Tracer);
    };

    class GAMMO(Yellow): GAMMO(Base)
    {
        model = QPATHTOF(data\effects\laser\yellow\mti_laser_yellow.p3d);
        effectfly = QGVAR(Rifle_Yellow_Tracer);
    };

    class GAMMO(Green): GAMMO(Base)
    {
        model = QPATHTOF(data\effects\laser\Green\mti_laser_Green.p3d);
        effectfly = QGVAR(Rifle_Green_Tracer);
    };

    class GAMMO(Beanbag): GAMMO(Base)
    {
        hit = 1;
        indirectHot = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_BEANBAG;
    };

    class GAMMO(Stealth): GAMMO(Base)
    {
        caliber = 3;
		hit = 40;
		model = "";
		lightcolor[] = {1,0.37,0};
		tracerscale = 0.2;
		brightness = 100;
		effectfly = "";

        audibleFire = 1;
        visibleFire = 1;
    };

    class GAMMO(Rocket_Base): RocketBase
    {
        hit=150;
		indirectHit=28;
		indirectHitRange=3;
		warheadName="TandemHEAT";
		submunitionAmmo=QGAMMO(Rocket_Sub);
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=1;
		cost=100;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=140;
		initTime=0;
		thrustTime=0.1;
		thrust=500;
		fuseDistance=10;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
        model = QPATHTOEF(props,munitions\mti_heat_missile.p3d);
		effectsMissile=QGVAR(Missle_Trail_Blue);
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="640";
		irLock=0;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=0;
    };

    class GAMMO(Penetrator_Base): ammo_Penetrator_Base
    {
        model="\A3\weapons_f\empty";
		caliber=40;
		warheadName="HEAT";
		hit=300;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		typicalSpeed=1000;
		timeToLive=0.2;
		simulationStep=0.050000001;
		airFriction=-0.28;
		deflecting=0;
		deflectionDirDistribution=0;
		penetrationDirDistribution=0;
		aiAmmoUsageFlags="640";
		dangerRadiusHit=60;
		suppressionRadiusHit=30;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactMetalSabotSmall";
			hitGlassArmored="ImpactMetalSabotSmall";
			hitWood="ImpactMetalSabotSmall";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactMetalSabotSmall";
			hitPlastic="ImpactMetalSabotSmall";
			hitRubber="ImpactMetalSabotSmall";
			hitTyre="ImpactMetalSabotSmall";
			hitConcrete="ImpactMetalSabotSmall";
			hitMan="ImpactMetalSabotSmall";
			hitGroundSoft="ImpactMetalSabotSmall";
			hitGroundRed="ImpactMetalSabotSmall";
			hitGroundHard="ImpactMetalSabotSmall";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactMetalSabotSmall";
		};
		whistleOnFire=1;
		whistleDist=14;
    };

    class GAMMO(Rocket_Sub): GAMMO(Penetrator_Base)
    {
        caliber = 40;
        warheadName = "TandemHEAT";
        hit = 800;
    };


    //Stuns
    class GAMMO(Stun): B_338_Ball {
        scope = 2;
        author = AUTHOR;
        effectfly = QGVAR(Rifle_Blue_Tracer);

        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_STUN;

        hit = 1;
        caliber = 0.869565;
        explosive = 0.1;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadusHit = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 30;
        timeToLive = 6;
        airFriction = -0.00130094;
        coefgravity = 0.01;

        audiblefire = 35;
        waterFriction = -0.30000001;
        explosionEffects = "";
        // cratereffects = QGVAR(Plasma_Impact);

        ACE_caliber = 1;
        ACE_damageType = "ropeburn";
        ACE_bulletLength = 23.011999;
        ACE_bulletMass = 0.005;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.200001, -26.440001,
            -23.76, -21,
            -17.540001, -13.1,
            -7.9499998, -1.62,
            6.2399998, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.15099999};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {
            723, 764,
            796, 825,
            843, 866,
            878, 892,
            906, 915,
            922, 900
        };
        ACE_barrelLengths[] = {
            210.82001, 238.75999,
            269.23999, 299.72,
            330.20001, 360.67999,
            391.16, 419.10001,
            449.57999, 480.06,
            508, 609.59998
        };
    };

    class GAMMO(Ion): B_338_Ball {
        scope = 2;
        author = AUTHOR;
        effectfly = QGVAR(Rifle_Blue_Tracer);

        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_ION;

        hit = 1;
        caliber = 0.869565;
        explosive = 0.1;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadusHit = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 30;
        timeToLive = 6;
        airFriction = -0.00130094;
        coefgravity = 0.01;

        audiblefire = 35;
        waterFriction = -0.30000001;
        explosionEffects = "";
        // cratereffects = QGVAR(Plasma_Impact);

        ACE_caliber = 1;
        ACE_damageType = "ropeburn";
        ACE_bulletLength = 23.011999;
        ACE_bulletMass = 0.005;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.200001, -26.440001,
            -23.76, -21,
            -17.540001, -13.1,
            -7.9499998, -1.62,
            6.2399998, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.15099999};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {
            723, 764,
            796, 825,
            843, 866,
            878, 892,
            906, 915,
            922, 900
        };
        ACE_barrelLengths[] = {
            210.82001, 238.75999,
            269.23999, 299.72,
            330.20001, 360.67999,
            391.16, 419.10001,
            449.57999, 480.06,
            508, 609.59998
        };
    };
};
