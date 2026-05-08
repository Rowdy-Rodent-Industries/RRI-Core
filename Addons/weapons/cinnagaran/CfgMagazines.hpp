class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(cinnagaran): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Cinnagaran 60rnd High Power Magazine";
        displayNameShort = "High Power";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","ARC"};
        count = 60;
        ammo = QGAMMO(cinnagaran);
        mass = 8;
    };
};
