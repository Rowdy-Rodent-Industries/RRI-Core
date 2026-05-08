class CfgAmmo
{
    class BulletBase;
    class GAMMO(HP_Base);
    class GAMMO(br_he): BulletBase {
        hit = 32;
        indirectHit = 17;
        indirectHitRange = 5;
        explosive = 0.6;
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        fuseDistance = 3;
        cartridge = "";
        visibleFire = 1;
        audibleFire = 5;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 14;
        cost = 15;
        airLock = 1;
        typicalSpeed = 270;
        timeToLive = 6;
        tracerStartTime = 0.075;
        tracerEndTime = 1;
        tracerScale = 1.3;
        airfriction = 0;
        coefgravity = 0;
        deflecting = 0;

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

    class GAMMO(br_rifle): GAMMO(HP_Base) {
        hit = 20;
        caliber = 4;
    };
};
