class CfgMagazines {
    class GMAG(40mm_Base);
    class GMAG(40mm_AP): GMAG(40mm_Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] 40mm 3rd AP Micro Rocket";
        displayNameShort = "AP";
        descriptionShort = "A micro rocket capable of dealing large amounts of damage to armored targets.";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

        ammo = QGAMMO(40mm_AP);
        count = 3;
        mass = 15;
        initspeed = 150;
    };
};
