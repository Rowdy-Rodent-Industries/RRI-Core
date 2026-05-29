class CfgMagazines
{
    class GMAG(Base);
    class GMAG(NT): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base NT Magazine";
        displayNameShort = "Base NT";
        descriptionShort = "Base NT magazine for rri weapons";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = "";
        count = 5;
        initSpeed = 1000;
        mass = 10;
        picture = QPATHTOF(data\Icons\NT_Base_ca.paa);
        modelSpecial = QPATHTOF(nt_mag.p3d);
        modelSpecialIsProxy = 1;
    };

    class GMAG(NT_AP): GMAG(NT) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] NT-242p 1rnd AP Cell";
        displayNameShort = "AP";
        descriptionShort = "20mm Armour-Piercing cell used by the NT-242 prototype platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(NT_AP);
        initSpeed = 1000;
        count = 1;
        tracersEvery = 1;
        mass = 15;
    };

    class GMAG(NT_HE): GMAG(NT) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] NT-242p 1rnd HE Cell";
        displayNameShort = "HE";
        descriptionShort = "20mm High-Explosive cell used by the NT-242 prototype platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        ammo = QGAMMO(NT_HE);
        initSpeed = 640;
        count = 1;
        tracersEvery = 1;
        mass = 13;
    };

    class GMAG(NT_EMP): GMAG(NT) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] NT-242p 1rnd EMP Cell";
        displayNameShort = "EMP";
        descriptionShort = "20mm EMP cell used by the NT-242 prototype platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(nt_emp);
        initSpeed = 640;
        count = 1;
        tracersEvery = 1;
        mass = 13;
    };

    class GMAG(NT_Precision): GMAG(NT) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] NT-242p 15rnd Precision Cell";
        displayNameShort = "Precision";
        descriptionShort = "20mm Precision Cell used by the NT-242 prototype platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(NT_Precision);
        initSpeed = 800;
        count = 15;
        tracersEvery = 1;
        mass = 15;
    };
};
