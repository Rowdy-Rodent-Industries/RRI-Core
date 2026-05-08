class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15C): GAMMO(Base)
    {
        hit = 13;
        caliber = 1;
    };

    class GAMMO(DC15C_HP): GAMMO(HP_Base)
    {
        hit = 14;
        caliber = 2;
    };
};
