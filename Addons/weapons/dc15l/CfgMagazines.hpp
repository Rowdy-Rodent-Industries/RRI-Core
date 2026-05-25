class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(DC15L): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15L 200rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Low-Power Energy cell used by the DC-15L weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
        count = 200;
        initSpeed = 800;
        ammo = QGAMMO(DC15L);
        mass = 20;
    };

    class GMAG(DC15L_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15L 200rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power energy cell used by the DC-15L weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        initSpeed = 1200;
        ammo = QGAMMO(DC15L_HP);
        count = 200;
        mass = 20;
    };
};
