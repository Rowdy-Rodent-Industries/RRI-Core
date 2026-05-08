class CfgMagazines {
    class GMAG(HP);
    class GMAG(dp24): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DP-24 30rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power Energy cell used by the DP-24 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        ammo = QGAMMO(dp24);
        initSpeed = 1000;
        mass = 10;
        count = 30;
    };
};
