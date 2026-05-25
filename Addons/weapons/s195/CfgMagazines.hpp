class CfgMagazines {
    class GMAG(Buck);
    class GMAG(Slug);
    class GMAG(s195):GMAG(Buck){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 2rnd Scatter Shot Cell";
        displayNameShort = "Scatter Shot";
        descriptionShort = "Scatter Shot cell used by the S-195 weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

        ammo = QGAMMO(s195);
        count = 2;
        mass = 10;
    };

    class GMAG(s195_slug):GMAG(Buck){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 2rnd Slug Shot Cell";
        displayNameShort = "Slug Shot";
        descriptionShort = "Slug Shot cell used by the S-195 weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

        ammo = QGAMMO(s195_slug);
        count = 2;
        mass = 10;
    };
};
