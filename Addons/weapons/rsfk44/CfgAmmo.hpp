class CfgAmmo
{
    class GAMMO(Orange);
    class GAMMO(RSFK): GAMMO(Orange) {
        hit = 45;
        caliber = 2.6;

        visibleFire = 8;
        audibleFire = 120;

        dangerRadiusBulletClose = 12;
        dangerRadiusHit = 16;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 12;

        cartridge = "FxCartridge_127";
        typicalSpeed = 880;
        tracerScale = 1.3;
    };
};
