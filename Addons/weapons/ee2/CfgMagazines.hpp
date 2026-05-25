class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(EE2): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] EE-2 45rnd Magazine";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard Energy Cell used by the EE-2 Rifle";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper","Commando"};
        count = 45;
        initSpeed = 800;
        ammo = QGAMMO(EE2);
        mass = 10;
    };
    class GMAG(EE2_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] EE-2 45rnd HP Magazine";
        displayNameShort = "High Power";
        descriptionShort = "High Power Cell used by the EE-2 Rifle";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper"};

        initSpeed = 1200;
        ammo = QGAMMO(EE2_HP);
        count = 45;
        mass = 10;
    };
};
