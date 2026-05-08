class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(DC15X): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15X 15rnd Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "High-Power energy cell for the DC-15X platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};
        ammo = QGAMMO(DC15X);
        initSpeed = 1000;
        mass = 7;
        count = 15;
    };
    class GMAG(DC15X_Deraformine): GMAG(DC15X) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15X 1rnd Deraformine A-I";
        displayNameShort = "A-I (Deraformine)";
        descriptionShort = "Deraformine filled Auto-Injector";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};
        ammo = QGAMMO(DC15X_Deraformine);
        count = 1;
        initSpeed = 1000;
        mass = 4;
    };

    class GMAG(DC15X_Latheniol): GMAG(DC15X) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15X 1rnd Latheniol A-I";
        displayNameShort = "A-I (Latheniol)";
        descriptionShort = "Latheniol filled Auto-Injector";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};
        ammo = QGAMMO(DC15X_Latheniol);
        count = 1;
        initSpeed = 1000;
        mass = 4;
    };

    class GMAG(DC15X_Tranq): GMAG(DC15X) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15X 15rnd Tranquilizer Cell";
        displayNameShort = "Tranquilizer";
        descriptionShort = "Special tranquilizer cell for the DC-15X platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};
        initSpeed = 650;
        ammo = QGAMMO(Stun);
        count = 15;
        mass = 10;
    };
};
