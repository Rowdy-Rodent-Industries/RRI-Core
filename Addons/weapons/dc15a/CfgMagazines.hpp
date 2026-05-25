class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(DC15A): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15A 60rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Standard-issue energy cell used by the DC-15A weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC"};
        count = 60;
        initSpeed = 800;
        ammo = QGAMMO(DC15A);
    };

    class GMAG(DC15A_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15A 60rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power energy cell used by the DC-15A weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        initSpeed = 1200;
        ammo = QGAMMO(DC15A_HP);
        count = 60;
        mass = 10;
    };
};
