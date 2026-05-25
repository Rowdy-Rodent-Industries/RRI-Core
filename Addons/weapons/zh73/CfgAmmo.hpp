class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(zh73): GAMMO(Base)
    {
        hit = 16;
        caliber = 2;
		coefGravity = 0;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = 30;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
    };

    class GAMMO(zh73_lr): GAMMO(Base)
    {
        hit = 22;
        caliber = 4;
		coefGravity = 0;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = 30;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
    };
};
