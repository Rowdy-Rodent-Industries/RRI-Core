class CfgMagazines {
    class GMAG(Base_Pistol);
    class GMAG(DC17S): GMAG(Base_Pistol) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-17s 30rnd Power Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-power energy cell used by the DC-17s side-arm platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport"};
        ammo = QGAMMO(Base);
        count = 30;
    };

        class GMAG(DC17s_ARC): GMAG(DC17S) {
        scope = 2;
        displayName = "[SOB] DC-17s ARC 30rnd Power Cell";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(DC17S_ARC);
        initSpeed = 500;
    };

    class GMAG(DC17_mc3c): GMAG(DC17S) {
        scope = 2;
        displayName = "[SOB] DC-17mc3c 30rnd Power Cell";
        descriptionShort = "Custom variant of the high-power energy cell used by the DC-17s side-arm platform; manufactured for CC Celt";
        initSpeed = 640;
        ammo = QGAMMO(DC17_mc3c);
    };
};
