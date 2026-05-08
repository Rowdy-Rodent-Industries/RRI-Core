class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15L): GAMMO(Base)
    {
        hit = 12;
        caliber = 1.7;
    };

    class GAMMO(DC15L_HP): GAMMO(HP_Base)
    {
        hit = 14;
        caliber = 2.7;
    };
};
