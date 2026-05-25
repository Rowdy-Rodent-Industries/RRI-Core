class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(causality_base): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Causality 40rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-issue energy cell used by the Causality weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando","FieldSupport"};
        ammo = QGAMMO(causality_base);
        count = 40;
        initSpeed=1200;
    };

    class GMAG(causality_precision): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Causality 60rnd Precision Energy Cell";
        displayNameShort = "Precision";
        descriptionShort = "Precision energy cell used by the Causality weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando","FieldSupport"};
        ammo = QGAMMO(causality_precision);
        count = 60;
        initSpeed=1200;
    };

    class GMAG(causality_rail): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Causality 1rnd Rail Energy Cell";
        displayNameShort = "Rail";
        descriptionShort = "A Rail round capable of temporarily disabling the turret of a vehicle hit by this ammo";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando","FieldSupport"};
        ammo = QGAMMO(causality_rail);
        count = 1;
        initSpeed=1200;
    };
};
