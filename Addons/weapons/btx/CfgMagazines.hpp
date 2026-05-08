class CfgMagazines {
    class GMAG(Base);
    class GMAG(btx): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] BTX Fuel Canister (Medium)";
        displayNameShort = "Standard Fuelant";
        descriptionShort = "Standard Fuelant used by the BTX Flamethrower";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","FieldSupport"};
        count=45;
        initSpeed=25;
        tracersEvery=1;
        lastRoundsTracer=999;
        mass = 10;
        ammo="FlameRound"; //this is from 3AS i'm not remaking flame thrower ammo
        picture = QPATHTOF(data\ui\BTX_Base_mag_ca .paa);
    };
};
