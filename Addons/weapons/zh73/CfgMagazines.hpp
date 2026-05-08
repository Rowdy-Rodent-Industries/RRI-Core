class CfgMagazines {
    class GMAG(Base);
    class GMAG(zh73): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ZH-73 30rnd Magazine";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard Energy Cell used by the ZH-73 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};
        ammo = QGAMMO(zh73);
        count = 30;
        mass = 12;
        model = QPATHTOF(mti_zh_mag_small.p3d);
        modelSpecial = QPATHTOF(mti_zh_mag_small.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\ZHMAG.paa);
    };

    class GMAG(zh73_lr): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ZH-73 (LR) 15rnd Magazine";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard Energy Cell used by the ZH-73 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};
        ammo = QGAMMO(zh73_lr);
        count = 15;
        mass = 12;
        model = QPATHTOF(mti_zh_mag_small.p3d);
        modelSpecial = QPATHTOF(mti_zh_mag_small.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\ZHMAG.paa);
    };
};
