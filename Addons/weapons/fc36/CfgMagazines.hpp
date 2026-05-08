class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(fc36):GMAG(Marksmen){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 35rnd Thermal Cell";
        displayNameShort = "Thermal Cell";
        descriptionShort = "Thermal Cell used by the FC-36 weapon platform.";

        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        ammo = QGAMMO(thermal_ammo);
        modelSpecial = QPATHTOF(mti_fc36_mag.p3d);
        modelSpecialIsProxy = 1;
        count = 20;
        mass = 10;
    };
};
