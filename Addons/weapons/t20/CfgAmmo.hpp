class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(t20): GAMMO(Base)
    {
        hit = 17;
        caliber = 3;

        dangerRadiusBulletClose = 14;
        dangerRadiusHit = 30;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
    };
};
