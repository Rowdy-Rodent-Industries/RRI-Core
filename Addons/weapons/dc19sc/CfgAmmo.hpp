class Cfgammo
{
    class GAMMO(Base);
    class GAMMO(DC19): GAMMO(Base) {
        hit = 15;
        caliber = 1.5;
    };

    class GAMMO(Hackshot): GAMMO(Base) {
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_HACKSHOT;
        caliber = 1;
        hit = 1;
    };
};
