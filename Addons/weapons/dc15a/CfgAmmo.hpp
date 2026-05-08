class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15A): GAMMO(Base)
    {
        hit = 14;
        caliber = 1.5;
    };

    class GAMMO(DC15A_HP): GAMMO(HP_Base)
    {
        hit = 16;
        caliber = 2.5;
    };
};
