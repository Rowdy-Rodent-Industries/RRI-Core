class CfgAmmo
{
    class GAMMO(Orange);
    class GAMMO(HP_Base);
    class GAMMO(EE2): GAMMO(Orange)
    {
        hit = 18;
        caliber = 2;
    };

    class GAMMO(EE2_HP): GAMMO(HP_Base)
    {
        hit = 24;
        caliber = 3;
    };
};
