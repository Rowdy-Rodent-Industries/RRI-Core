class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(Bowcaster_Base): GAMMO(Base) {
        hit = 45;
        indirectHit = 3;
        indirectHitRange = 0;
        model = QPATHTOEF(weapons,core\data\effects\laser\green\rri_laser_green.p3d);
        lightcolor[] = {0.25, 0.5, 0.25};
        effectfly = QEGVAR(weapons_core,Rifle_Green_Tracer);
        cartridge = "";

        visibleFire = 5;
        dangerRadiusBulletClose = 12;
        dangerRadiusHit = 16;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 12;
        visibleFireTime = 3;
        cost = 5;

        airLock = 1;
        caliber = 4;
        typicalSpeed = 620;
        tracerStartTime = 0.05;
        tracerEndTime = 10;
        flaresize = 5;
        ace_vehicle_damage_incendiary = 0.3;
        timeToLive = 10;
        tracerScale = 1.3;
        ACE_caliber = 12.979;
        audibleFire = 15;
        initTime = 0;
        nvgonly = 0;
        irtarget = 1;
        brightness = 1000;
        airfriction = 0;
        coefgravity = 0;
        deflecting = 0;

        class CamShakeExplode {
            power = 3.60555;
            duration = 0.8;
            frequency = 20;
            distance = 10.8167;
        };
        
        class CamShakeHit {
            power = 13;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        
        class CamShakeFire {
            power = 1.5878;
            duration = 0.8;
            frequency = 20;
            distance = 34.8712;
        };
        
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };

    class GAMMO(Bowcaster_Heavy): GAMMO(Bowcaster_Base) {
        hit = 55;
        indirectHit = 12;
        indirectHitRange = 6;
        explosive = 0.6;
        caliber = 2.4;

        model = QPATHTOEF(weapons,core\data\effects\laser\red\rri_laser_red.p3d); 
        lightcolor[] = {0.5, 0.25, 0.25};
        effectfly = QEGVAR(weapons_core,Rifle_Red_Tracer);

        cost = 20;
        visibleFire = 32;
        audibleFire = 100;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 20;
        dangerRadiusHit = 60;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;

        tracerScale = 2.5;

        airlock = 1;
        aiAmmoUsageFlags = "192";

        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01.wss", 1.77828, 1, 1600};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02.wss", 1.77828, 1, 1600};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03.wss", 1.77828, 1, 1600};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04.wss", 1.77828, 1, 1600};
        multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
        SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};

        ace_vehicle_damage_incendiary = 0.1;
        typicalSpeed = 620;
        airFriction = -0.00065098;

        class CamShakeExplode {
            power = 6;
            duration = 1;
            frequency = 20;
            distance = 67.4164;
        };

        class CamShakeHit {
            power = 30;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        
        class CamShakeFire {
            power = 4.0878;
            duration = 1;
            frequency = 20;
            distance = 50;
        };
        
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
};
