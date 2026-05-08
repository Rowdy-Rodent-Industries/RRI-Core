class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(Marksmen_HP);
        class GMAG(DC15LE): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15LE 20rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Standard-issue energy cell used by the DC-15LE weapon platform.";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
        count = 20;
        initSpeed = 950;
        ammo = QGAMMO(DC15LE);
        mass = 5;
    };

    class GMAG(DC15LE_HP): GMAG(Marksmen_HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15LE 20rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power energy cell used by the DC-15LE weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        count = 20;
        initSpeed = 1200;
        ammo = QGAMMO(DC15LE_HP);
        mass = 5;
    };
};
