class CfgAmmo
{
    class GAMMO(Stun);
    class GAMMO(Ion);
    class GAMMO(40mm_Inert_Base);
    class GAMMO(40mm_Smoke_Base_Impact);
    //class GAMMO(mm9_AT): GAMMO(40mm_AP) {
    class MissileBase;
    class GAMMO(mm9_AT): MissileBase {
        model = QPATHTOF(rri_mm9_missile.p3d);

        CraterEffects="ExploAmmoCrater";
        explosionEffects="ExploAmmoExplosion";
        effectsMissileInit = "";
        effectsMissile=QEGVAR(weapons_core,Missle_Trail_Blue);

        SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        soundHit1[] = { "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wav", 3.1622777, 1, 1500};
        soundHit2[] = { "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wav", 3.1622777, 1, 1500};
        soundHit3[] = { "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wav", 3.1622777, 1, 1500};
        soundHit4[] = { "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wav", 3.1622777, 1, 1500};
        multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
        whistleDist=16;

        irLock = 0;
        laserLock = 0;
        airLock = 0;
        manualControl = 0;
        timeToLive = 30;

        hit = 600;
        indirectHit = 25;
        indirectHitRange = 2;
        warheadName = "AP";

        maxSpeed = 1000;
        thrust = 55;
        thrustTime = 20;
        initTime = 0;
        airFriction = 0.1;
        sideAirFriction = 0.1;

        class ace_missileguidance {
            enabled = 2;

            pitchRate = 180;
            yawRate = 180;

            canVanillaLock = 0;
            stabilityCoefficent = 0;

            // Guidance type for munitions
            defaultSeekerType = QGVAR_CORE(mm9,seeker);
            seekerTypes[] = {QGVAR_CORE(mm9,seeker)};

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            defaultNavigationType = QGVAR_CORE(mm9,nav);
            navigationTypes[] = { QGVAR_CORE(mm9,nav) };

            seekerAngle = 120;
            seekerAccuracy = 1;

            seekerMinRange = 1;
            seekerMaxRange = 3000;

            // Attack profile type selection
            defaultAttackProfile = QGVAR_CORE(mm9,attackProfile);
            attackProfiles[] = {QGVAR_CORE(mm9,attackProfile)};
        };
    };

    class GAMMO(mm9_stun): GAMMO(mm9_AT) {
        hit = 0.1;
        indirectHit = 0.1;
        indirectHitRange = 1;

        class ace_missileguidance: ace_missileguidance {
            enabled = 2;
        };

        submunitionAmmo = QGAMMO(mm9_stun_deploy);
        triggerOnImpact = 1;
        CraterEffects = "";
        explosionEffects = "GrenadeExplosion";
    };

    class GAMMO(mm9_stun_deploy): GAMMO(Stun) {
        // todo: think about doing aoe effects later??
    };

    class GAMMO(mm9_ion): GAMMO(mm9_AT) {
        hit = 0.1;
        indirectHit = 0.1;
        indirectHitRange = 1;

        class ace_missileguidance: ace_missileguidance {
            enabled = 2;
        };

        submunitionAmmo = QGAMMO(mm9_ion_deploy);
        triggerOnImpact = 1;
        CraterEffects = "";
        explosionEffects = "GrenadeExplosion";
    };

    class GAMMO(mm9_ion_deploy): GAMMO(Ion) {
        // todo: think about doing aoe effects later??
    };

    class GAMMO(mm9_smoke): GAMMO(mm9_AT) {
        hit = 0.1;
        indirectHit = 0.1;
        indirectHitRange = 1;

        class ace_missileguidance: ace_missileguidance {
            enabled = 2;
        };

        submunitionAmmo = QGAMMO(mm9_smoke_deploy);
        triggerOnImpact = 1;
        CraterEffects = "";
        explosionEffects = "GrenadeExplosion";
    };

    class GAMMO(mm9_smoke_deploy): GAMMO(40mm_Smoke_Base_Impact)
    {
        model = QPATHTOF(rri_mm9_missile.p3d);
    };

    class GAMMO(mm9_dumb): GAMMO(mm9_AT) {
        hit = 0.1;
        indirectHit = 0.1;
        indirectHitRange = 1;

        class ace_missileguidance: ace_missileguidance {
            enabled = 2;
        };

        submunitionAmmo = QGAMMO(mm9_dumb_deploy);
        triggerOnImpact = 1;
        CraterEffects = "";
        explosionEffects = "GrenadeExplosion";
    };

    class GAMMO(mm9_dumb_deploy): GAMMO(40mm_Inert_Base)
    {
        model = QPATHTOF(rri_mm9_missile.p3d);
    };
};
