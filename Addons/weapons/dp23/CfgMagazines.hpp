class CfgMagazines {
    class GMAG(Base);
    class GMAG(Buck);
    class GMAG(Slug);
    class GMAG(dp23_buck): GMAG(Buck) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DP-23 20rnd Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Low-power energy cell in scatter configuration used by the DP-23 scatterblaster platform";
        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","Commando"};
        ammo = QGAMMO(dp23);
        count = 20;
        mass = 6;
    };

    class GMAG(dp23_hp_buck): GMAG(Buck) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DP-23 20rnd High Power Scatter Cell";
        displayNameShort = "Scatter HP";
        descriptionShort = "High-Power Scatter energy cell used by the high power DP-23 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        ammo = QGAMMO(dp23_hp);
        initSpeed = 900;
        mass = 7;
        count = 20;
    };

    class GMAG(dp23_slug): GMAG(Slug) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DP-23 Slug Mag";
        displayNameShort = "Slug";
        descriptionShort = "High-power energy cell locked into a single slug, dealing large amounts of damage";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","Commando"};
        ammo = QGAMMO(dp23_slug);
        mass = 5;
        count = 20;
    };

    class GMAG(dp23_hp_slug): GMAG(Slug) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DP-23 20rnd High Power Slug Cell";
        displayNameShort = "Slug HP";
        descriptionShort = "High-Power Slug energy cell used by the high power DP-23 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        ammo = QGAMMO(dp23_hp_slug);
        initSpeed = 900;
        mass = 7;
        count = 20;
    };
};
