class CfgAmmo
{
    class GAMMO(Shotgun_HP);
    class GAMMO(HP_Base);
    class GAMMO(hpb_base): GAMMO(HP_Base)
    {
        hit = 40;
        caliber = 7;
        indirecthit = 10;
    };
    class GAMMO(hpb_scatter): GAMMO(Shotgun_HP)
    {
        hit = 25;
        caliber = 7;
        indirecthit = 10;
    };
};
