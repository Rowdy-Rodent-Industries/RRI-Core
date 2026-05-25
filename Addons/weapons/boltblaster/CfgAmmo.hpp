class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(Shotgun_Base);
    class GAMMO(HP_Base);
    class GAMMO(Shotgun_HP);
    class GAMMO(boltbaster): GAMMO(Shotgun_Base)
    {
        hit = 20;
        caliber = 3;
    };

    class GAMMO(boltbaster_hp): GAMMO(Shotgun_HP){
        hit = 22;
        caliber = 5;
    };

    class GAMMO(boltbaster_slug): GAMMO(Base)
    {
        hit = 26;
        caliber = 5;
    };

    class GAMMO(boltbaster_hp_slug): GAMMO(HP_Base)
    {
        hit = 30;
        caliber = 7;
    };
};
