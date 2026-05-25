class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(DLT19): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DLT-19 20rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-Issue energy cell used by the DLT-19 Weapon Platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Fieldsupport"};
        count = 20;
        initSpeed = 1200;
        ammo = QGAMMO(DLT19);
        mass = 10;
    };

    class GMAG(DLT19_Rail): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DLT-19 1rnd Rail Cell";
        displayNameShort = "Rail";
        descriptionShort = "Rail round used by the DLT-19 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Fieldsupport"};
        count = 1;
        initSpeed = 1500;
        ammo = QGAMMO(DLT19_Rail);
        mass = 15;
    };
};
