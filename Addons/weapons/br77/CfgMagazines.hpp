class CfgMagazines
{
    class GMAG(HP);
    class GMAG(BR77_HP): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] BR-77 15rnd High Power Energy Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-Power Energy cell used by the BR-77 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        ammo = QGAMMO(br_rifle);
        initSpeed = 1000;
        mass = 10;
        count = 15;
        hiddenSelections[] = {"Camo1","Camo2"};
        model = QPATHTOF(rri_br77_mag.p3d);
        modelSpecial = QPATHTOF(rri_br77_mag.p3d);
        picture = QPATHTOF(data\icon\BR77_mag.paa);
        modelSpecialIsProxy=1;
    };

    class GMAG(BR77_HE): GMAG(HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] BR-77 1rnd High Explosive Energy Cell";
        displayNameShort = "HE";
        descriptionShort = "High-Explosive Energy cell used by the BR-77 weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
        ammo = QGAMMO(br_he);
        initSpeed = 1000;
        mass = 12;
        count = 1;
        hiddenSelections[] = {"Camo1","Camo2"};
        model = QPATHTOF(rri_br77_mag.p3d);
        modelSpecial = QPATHTOF(rri_br77_mag.p3d);
        picture = QPATHTOF(data\icon\BR77_mag.paa);
        modelSpecialIsProxy=1;
    };
};
