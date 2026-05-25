class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(Marksmen_HP);

    class GMAG(DW32S): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DW-32S 20rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-issue energy cell used by the DW-32S weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
        ammo = QGAMMO(DW32S);
        count = 20;
        mass = 8;
    };

    class GMAG(DW32S_HP): GMAG(Marksmen_HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DW-32S 20rnd High Power Energy Cell";
        displayNameShort = "High Power Energy";
        descriptionShort = "High-Power energy cell used by the DW-32S weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
        ammo = QGAMMO(DW32S_HP);
        count = 20;
        mass = 8;
    };
};
