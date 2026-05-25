class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DW32S): GAMMO(Base)
    {
        hit = 16;
        caliber = 2;
    };

    class GAMMO(DW32S_HP): GAMMO(HP_Base)
    {
        hit = 22;
        caliber = 2.5;
    };
};
