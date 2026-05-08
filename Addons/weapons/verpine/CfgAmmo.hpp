class CfgAmmo
{
    class BulletBase;
    class ammo_Penetrator_Base;
    class GAMMO(Verpine_Base): BulletBase {
        author = AUTHOR;

        caliber = 7.6;
        hit = 30;

        GVAR_CORE(pangolin,bypassShield) = 1;

        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_127x54_APDS";
        visibleFire = 1;
        audibleFire = 5;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 14;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 10;
        cost = 15;
        airLock = 1;
        typicalSpeed = 270;
        timeToLive = 6;
        model = QPATHTOF(verpine_projectile.p3d);
        tracerStartTime = 0.075;
        tracerEndTime = 1;
        airFriction = -0.00019568;
        tracerScale = 1.3;

        class CamShakeExplode {
            power = 2.23607;
            duration = 0.4;
            frequency = 20;
            distance = 6.7082;
        };

        class CamShakeHit {
            power = 15;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };

        ace_vehicle_damage_incendiary = 0.8;
        ACE_caliber = 12.954;
        ACE_bulletLength = 64.516;
        ACE_bulletMass = 48.6;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {1.05};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {750};
        ACE_barrelLengths[] = {436.88};
    };

    class GAMMO(Verpine): GAMMO(Verpine_Base) {};

    class GAMMO(Verpine_Improv): GAMMO(Verpine_Base) {
        hit = 10;
        caliber = 5;
    };

    class GAMMO(Verpine_APDS): GAMMO(Verpine_Base) {
        hit = 32;
        indirectHit = 17;
        indirectHitRange = 5;
        explosive = 0.6;

        submunitionAmmo = QGAMMO(Verpine_APDS_Penatrator);
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        fuseDistance = 3;

        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
        explosionSoundEffect = "DefaultExplosion";
        explosionEffects = "ExploAmmoExplosionPlaneCAS";
        craterEffects = "ExploAmmoCrater";
        soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss", 3.16228, 1, 1300};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss", 3.16228, 1, 1300};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss", 3.16228, 1, 1300};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss", 3.16228, 1, 1300};
        multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
        SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};

        class CamShakeExplode {
            power = 6;
            duration = 1;
            frequency = 20;
            distance = 67.8178;
        };

        class CamShakeHit {
            power = 30;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
    };

    class GAMMO(Verpine_Deraformine): GAMMO(Verpine_Base) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_MEDICAL;
        GVAR_CORE(medical,projectileMeds)[] = {"Deraformine",1};
    };

    class GAMMO(Verpine_Latheniol): GAMMO(Verpine_Base) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_MEDICAL;
        GVAR_CORE(medical,projectileMeds)[] = {"Latheniol",1};
    };

    class GAMMO(Verpine_Tracking): GAMMO(Verpine_Base) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_TRACKING;
    };

    class GAMMO(Verpine_Ion): GAMMO(Verpine_Base) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_ION;
    };

    class GAMMO(Verpine_Acid): GAMMO(Verpine_Base) {
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_ACID;
    };

    // Misc. Ammo
    class GAMMO(Verpine_APDS_Penatrator): ammo_Penetrator_Base {
        caliber = 2;
        hit = 45;
        indirectHit = 20;
        indirectHitRange = 5;
        explosive = 0.8;
        ace_vehicle_damage_incendiary = 0.8;
    };
};
