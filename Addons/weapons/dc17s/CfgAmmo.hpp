class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC17S): GAMMO(Base)
    {
        hit = 11;
        caliber = 1.5;
    };

    class GAMMO(DC17S_ARC): GAMMO(HP_Base)
    {
        hit = 16;
        caliber = 2.5;
    };

    class GAMMO(DC17_mc3c): GAMMO(DC17S) {
        hit = 15;
        caliber = 1.45;

        model = "ls_weapons_core\Effects\laser_yellow.p3d";
        effectfly = "ls_plasma_yellow";
    };
};
