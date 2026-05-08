class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(Shotgun_Base);
    class GAMMO(HP_Base);
    class GAMMO(Shotgun_HP);
    class GAMMO(dp23): GAMMO(Shotgun_Base)
    {
        hit = 16;
        caliber = 1.5;
    };

    class GAMMO(dp23_hp): GAMMO(Shotgun_HP){
        hit = 20;
        caliber = 2;
    };

    class GAMMO(dp23_slug): GAMMO(Base)
    {
        hit = 23;
        caliber = 4;
    };

    class GAMMO(dp23_hp_slug): GAMMO(HP_Base)
    {
        hit = 27;
        caliber = 5;
    };
};
