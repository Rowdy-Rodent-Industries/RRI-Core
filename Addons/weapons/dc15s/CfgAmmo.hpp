class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15S): GAMMO(Base)
    {
        hit = 12;
        caliber = 1;
    };

    class GAMMO(DC15S_HP): GAMMO(HP_Base)
    {
        hit = 14;
        caliber = 2;
    };
};
