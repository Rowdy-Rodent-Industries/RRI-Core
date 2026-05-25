class CfgMagazines {
    class GMAG(Base);
    class GMAG(ls150): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] LS150 500rnd Magazine";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard Energy Cell used by the LS150 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
        ammo = QGAMMO(ls150);
        mass = 20;
        count = 500;
    };
};
