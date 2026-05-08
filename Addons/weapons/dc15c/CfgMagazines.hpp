class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(Buck);
    class GMAG(DC15C): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15C 60rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Standard-issue energy cell used by the DC-15C weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
        count = 60;
        initSpeed = 600;
        ammo = QGAMMO(DC15C);
        mass = 10;
    };

    class GMAG(DC15C_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15C 60rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power energy cell used by the DC-15C weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        initSpeed = 1200;
        ammo = QGAMMO(DC15C_HP);
        count = 60;
        mass = 10;
    };

    class GMAG(UGL_Shotty): GMAG(Buck) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] UGL Shotgun 6rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Low-power energy cell in scatter configuration used by the UGL Shotgun platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport"};
        ammo = QGAMMO(Shotgun_Base);
        count = 6;
        mass = 6;
    };
};
