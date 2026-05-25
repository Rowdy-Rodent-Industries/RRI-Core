class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DLT19): GAMMO(Base)
    {
        hit = 30;
        caliber = 5;
    };

    class GAMMO(DLT19_Rail): GAMMO(Base)
    {
        hit = 40;
        caliber = 7;
        indirecthit = 10;
        indirecthitrange = 2;
        explosive = 0.6;
        GVAR_CORE(weapons_core,railStrength) = 700;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_RAIL;
    };
};
