class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(HPB): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] HPB 150rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-issue energy cell used by the HPB weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Jumptrooper"};
        ammo = QGAMMO(hpb_base);
        count = 150;
        initSpeed=1200;
        mass = 10;
    };

    class GMAG(hpb_underbarrel): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] HPB Scattershot Cell";
        displayNameShort = "ScatterShot";
        descriptionShort = "Standard-issue Scatter-Shot cell used by the HPB weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Jumptrooper"};
        ammo = QGAMMO(hpb_scatter);
        count = 10;
        initSpeed=1000;
    };
};
