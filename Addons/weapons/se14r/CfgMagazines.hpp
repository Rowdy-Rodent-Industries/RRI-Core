class CfgMagazines {
    class GMAG(Base_Pistol);
    class GMAG(se14r): GMAG(Base_Pistol) {
        scope = 2;
        displayName = "[SOB] SE-14R 30rnd Power Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-power energy cell used by the SE-14R side-arm platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Pilot"};

        count = 30;
        initSpeed = 800;
    };
};
