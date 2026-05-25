class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(causality_base): GAMMO(Base)
    {
        hit = 40;
        caliber = 7;
        indirecthit = 10;
        indirectHitRange = 2;
        explosive = 0.6;
    };

    class GAMMO(causality_precision): GAMMO(HP_Base)
    {
        hit = 30;
        caliber = 6;
        indirecthit = 10;
        indirectHitRange = 0;
        explosive = 0.4;
    };

    class GAMMO(causality_rail): GAMMO(HP_Base)
    {
        GVAR_CORE(weapons_core,railStrength) = 700;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_RAIL;
    };
};
