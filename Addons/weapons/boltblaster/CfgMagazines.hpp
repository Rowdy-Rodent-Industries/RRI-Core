class CfgMagazines {
    class GMAG(Buck);
    class GMAG(Slug);
    class GMAG(boltblaster_buck):GMAG(Buck){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 20rnd Scatter Shot Cell";
        displayNameShort = "Scatter Shot";
        descriptionShort = "Scatter Shot cell used by the Boltblaster weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};

        ammo = QGAMMO(boltbaster);
        count = 20;
        mass = 10;
    };

    class GMAG(boltblaster_buck_hp):GMAG(Buck){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 20rnd Scatter Shot HighPower Cell";
        displayNameShort = "Scatter Shot";
        descriptionShort = "HighPower Scatter Shot cell used by the Boltblaster weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"Jumptrooper"};

        ammo = QGAMMO(boltbaster_hp);
        count = 20;
        mass = 10;
    };

    class GMAG(boltblaster_Slug):GMAG(Slug){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 20rnd Slug Shot Cell";
        displayNameShort = "Slug";
        descriptionShort = "Slug energy cell used by the Boltblaster weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando"};

        ammo = QGAMMO(boltbaster_slug);
        count = 20;
        mass = 10;
    };

    class GMAG(boltblaster_Slug_hp):GMAG(Slug){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 20rnd Slug Shot HighPower Cell";
        displayNameShort = "Slug";
        descriptionShort = "HighPower Slug energy cell used by the Boltblaster weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"Jumptrooper"};

        ammo = QGAMMO(boltbaster_hp_slug);
        count = 20;
        mass = 10;
    };
};
