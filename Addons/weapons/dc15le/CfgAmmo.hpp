class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15LE): GAMMO(Base)
    {
        hit = 18;
        caliber = 2;
    };

    class GAMMO(DC15LE_HP): GAMMO(HP_Base)
    {
        hit = 20;
        caliber = 3;
    };
};
