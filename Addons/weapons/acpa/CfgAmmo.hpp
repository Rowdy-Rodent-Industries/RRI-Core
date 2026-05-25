class CfgAmmo
{
    class GAMMO(Shotgun_Base);
    class GAMMO(HP_Base);
    class GAMMO(acpa): GAMMO(Shotgun_Base)
    {
        hit = 20;
    caliber = 2.5;
    };

    class GAMMO(acpa_slug): GAMMO(HP_Base)
    {
        hit = 23;
    caliber = 4;
    };
};
