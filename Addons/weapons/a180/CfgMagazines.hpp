class CfgMagazines {
    class GMAG(Base_Pistol);
    class GMAG(a180): GMAG(Base_Pistol) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] A-180 18rnd Power Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-power energy cell used by the A-180 side-arm platform";

        mti_arsenal_whitelist[] = {"FieldSupport"};

        count = 18;
        initSpeed = 800;
    };
};
