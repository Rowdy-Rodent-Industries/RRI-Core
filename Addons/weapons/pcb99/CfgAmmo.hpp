class CfgAmmo
{
    class GAMMO(Base);

    class GAMMO(pcb): GAMMO(Base) {
        hit = 800;
        indirectHit = 35;
        indirectHitRange = 3;
        caliber = 25;
        typicalSpeed = 1500;
        effectfly = QEGVAR(weapons_core,Rifle_White_Tracer);
        model = QPATHTOEF(weapons,core\data\effects\laser\white\mti_laser_white.p3d);
        explosionEffects = "ExploAmmoExplosionPlaneCAS";
        craterEffects = "ExploAmmoCrater";
        soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss", 3.16228, 1, 1300};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss", 3.16228, 1, 1300};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss", 3.16228, 1, 1300};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss", 3.16228, 1, 1300};
        multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
        SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
    };
};
