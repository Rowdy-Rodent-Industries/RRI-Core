class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(valken38x): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Valken-38X 10rnd Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "High-power energy cell used by the Valken-38X weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Trooper","Fieldsupport"};
        ammo = QGAMMO(valken38x);
        initSpeed=1000;
        mass = 10;
        count = 10;
    };
    class GMAG(Base);
    class GMAG(valken39y): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Valken-39Y 200rnd Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "High-power energy cell used by the Valken-39Y weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Trooper","Fieldsupport"};
        ammo = QGAMMO(valken39y);
        initSpeed=1000;
        mass = 25;
        count = 200;
    };
};
