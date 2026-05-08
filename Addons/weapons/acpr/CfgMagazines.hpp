class CfgMagazines {
    class GMAG(Base);
    class GMAG(acpr): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ACP-R 60rnd Magazine";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard Energy Cell used by the ACP-R weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","Commando"};
        count = 60;
        mass = 10;
        ammo = QGAMMO(Yellow);
    };
};
