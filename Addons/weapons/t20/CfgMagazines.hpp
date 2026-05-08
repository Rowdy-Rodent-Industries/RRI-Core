class CfgMagazines {
    class GMAG(Base);
    class GMAG(t20): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] T-20 120rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-issue energy cell used by the T-20 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper"};
        ammo = QGAMMO(t20);
        count = 120;
        mass = 20;
    };

};
