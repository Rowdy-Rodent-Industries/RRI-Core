class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(DC15S): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15S 80rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Standard-issue energy cell used by the DC-15S weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
        count = 80;
        initSpeed = 800;
        ammo = QGAMMO(DC15S);
        mass = 10;
    };

    class GMAG(DC15S_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15S 80rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power energy cell used by the DC-15S weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        initSpeed = 1200;
        ammo = QGAMMO(DC15S_HP);
        count = 80;
        mass = 10;
    };
};
