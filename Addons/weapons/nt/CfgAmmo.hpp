class CfgAmmo
{
    class B_127x108_Ball;
    class JLTS_ammo_Grenade_EMP;
    class GAMMO(NT_HE): B_127x108_Ball {
        ACE_caliber = 20.27;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.67};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {820};
        ACE_barrelLengths[] = {1000};

        caliber = 20;
        typicalSpeed = 200;

        hit = 185;
        indirectHit = 185;
        indirectHitRange = 7;
        explosive = 0.9;

        visibleFire = 32;
        audibleFire = 1500;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 20;
        dangerRadiusHit = 60;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
        cost = 20;

        airfriction = 0;
        fuseDistance = 0;
        airlock = 1;
        coefgravity = 0;

        tracerScale = 20;
        tracerStartTime = 0.05;
        tracerEndTime = 20;

        deflecting = 0;

        model = QPATHTOEF(weapons,core\data\effects\laser\red\mti_laser_red.p3d);
        effectfly = QEGVAR(weapons_core,Rifle_red_Tracer); 

        SoundSetExplosion[] = {QGVAR(NTExp_SoundSet)};
    };

    class GAMMO(NT_AP): B_127x108_Ball {
        ACE_caliber = 50;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.67};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {950};
        ACE_barrelLengths[] = {1000};

        warheadName = "TandemHEAT";
        submunitionAmmo = "ammo_Penetrator_Rocket_03_AP";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;

        caliber = 80;
        typicalSpeed = 950;

        hit = 600;
        indirectHit = 50;
        indirectHitRange = 3;
        explosive = 0.1;

        visibleFire = 32;
        audibleFire = 1500;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 16;
        dangerRadiusHit = 40;
        suppressionRadiusBulletClose = 10;
        suppressionRadiusHit = 14;
        cost = 50;

        airfriction = 0;
        fuseDistance = 0;
        airlock = 1;
        coefgravity = 0;

        tracerScale = 20;
        tracerStartTime = 0.05;
        tracerEndTime = 20;

        deflecting = 0;

        model = QPATHTOEF(weapons,core\data\effects\laser\green\mti_laser_green.p3d);
        effectfly = QEGVAR(weapons_core,Rifle_Green_Tracer); 
        SoundSetExplosion[] = {QGVAR(NTExp_SoundSet)};
    };

    class GAMMO(NT_Precision): B_127x108_Ball {
        ACE_caliber = 40;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.67};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {820};
        ACE_barrelLengths[] = {1000};

        caliber = 40;
        typicalSpeed = 800;

        hit = 100;
        indirectHit = 35;
        indirectHitRange = 0;
        explosive = 0;

        visibleFire = 32;
        audibleFire = 1500;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 20;
        dangerRadiusHit = 60;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
        cost = 20;

        airfriction = 0;
        fuseDistance = 0;
        airlock = 1;
        coefgravity = 0;

        tracerScale = 20;
        tracerStartTime = 0.05;
        tracerEndTime = 20;

        deflecting = 0;

        model = QPATHTOEF(weapons,core\data\effects\laser\blue\mti_laser_blue.p3d);
        effectfly = QEGVAR(weapons_core,Rifle_Blue_Tracer);
        // ExplosionEffects = QEGVAR(weapons_core,Plasma_Impact);
        // cratereffects = QEGVAR(weapons_core,Plasma_Impact);
    };

    class GAMMO(nt_emp): JLTS_ammo_Grenade_EMP { // todo: replace this eventually
        author = AUTHOR;
        indirectHitRange = 20;
        coefgravity = 0;
        model = QPATHTOEF(weapons,core\data\effects\laser\blue\mti_laser_blue.p3d);
        effectfly = QEGVAR(weapons_core,Rifle_Blue_Tracer);
    };
};
