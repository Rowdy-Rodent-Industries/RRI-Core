class CfgMagazines {
    class GMAG(Buck);
    class GMAG(Slug);
    class GMAG(acpa_buck): GMAG(Buck) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ACP-A 13rnd Scatter Shot Magazine";
        displayNameShort = "Scatter Shot";
        descriptionShort = "Scatter Shot Cell used by the ACP-A weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Arc","Commando","Jumptrooper","FieldSupport"};
        ammo = QGAMMO(acpa);
        count = 13;
        mass = 5;
    };

    class GMAG(acpa_slug): GMAG(Slug) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ACP-A 13rnd Slug Magazine";
        displayNameShort = "Slug";
        descriptionShort = "Slug Cell used by the ACP-A weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Arc","Commando","JumpTrooper","FieldSupport"};
        ammo = QGAMMO(acpa_slug);
        count = 13;
        mass = 5;
    };
};
