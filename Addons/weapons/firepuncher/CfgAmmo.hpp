class CfgAmmo
{
    class GAMMO(base);
    class GAMMO(Firepuncher): GAMMO(base)
    {
        hit = 50;
        indirectHit = 5;
        indirectHitRange = 0;
        visibleFire = 5;
        audibleFire = 120;
        dangerRadiusBulletClose = 12;
        dangerRadiusHit = 16;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 12;
        visibleFireTime = 3;
        caliber = 7;
        typicalSpeed = 850;
    };

    class GAMMO(Firepuncher_Tracking): GAMMO(Firepuncher) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_TRACKING;
    };

    class GAMMO(Firepuncher_Ion): GAMMO(Firepuncher) {
        hit = 1;
        ls_weapons_ammoType = 2;
        ls_weapons_stunDuration = 10; // Time in seconds
        ls_weapons_ionEngineDamage = 0.1; // % of engine damage
        ls_weapons_ionFuelBurn = 0.1; // % of fuel to drain
    };
};
