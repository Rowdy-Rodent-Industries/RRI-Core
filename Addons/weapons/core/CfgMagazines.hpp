class CfgMagazines
{
    class CA_Magazine;
    class 1Rnd_Smoke_Grenade_shell;
    class GMAG(Base): CA_Magazine {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Magazine";
        displayNameShort = "Base";
        descriptionShort = "Base magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        model = QPATHTOF(data\magazine\colors\blue\rri_blue_magazine.p3d);
        ammo = QGAMMO(Base);
    };

    class GMAG(Base_Pistol): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Pistol Magazine";
        displayNameShort = "Base";
        descriptionShort = "Base magazine for rri weapons";
        ammo = QGAMMO(Base);
        count = 10;
        initSpeed = 700;
        mass = 5;
        picture = QPATHTOF(data\icons\misc\Pistol_base_ca.paa);
    };

    class GMAG(HP): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base HP Magazine";
        displayNameShort = "Base HP";
        descriptionShort = "Base HP magazine for rri weapons";
        count = 30;
        initSpeed = 900;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Rifle_HP_ca.paa);
        model = QPATHTOF(data\magazine\colors\yellow\rri_yellow_magazine.p3d);
        ammo = QGAMMO(HP_Base);
    };

    class GMAG(Green): CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Green Magazine";
        displayNameShort = "Green";
        descriptionShort = "Green magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        model = QPATHTOF(data\magazine\colors\green\rri_green_magazine.p3d);
        ammo = QGAMMO(Green);
    };

    class GMAG(Orange): CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Orange Magazine";
        displayNameShort = "Orange";
        descriptionShort = "Orange magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        model = QPATHTOF(data\magazine\colors\orange\rri_orange_magazine.p3d);
        ammo = QGAMMO(Orange);
    };

    class GMAG(Red): CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Red Magazine";
        displayNameShort = "Red";
        descriptionShort = "Red magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        model = QPATHTOF(data\magazine\colors\red\rri_red_magazine.p3d);
        ammo = QGAMMO(Red);
    };

    class GMAG(Marksmen): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Marksman Magazine";
        displayNameShort = "Base Marksman";
        descriptionShort = "Base Marksman magazine for rri weapons";
        count = 20;
        initSpeed = 800;
        mass = 10;
        tracersEvery = 1;
        picture = QPATHTOF(data\icons\misc\Marksman_Base_ca.paa);
    };

    class GMAG(Marksmen_HP): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Marksman Magazine";
        displayNameShort = "Base Marksman";
        descriptionShort = "Base Marksman magazine for rri weapons";
        count = 20;
        initSpeed = 800;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Marksmen_HP_ca.paa);
    };

    class GMAG(Buck): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Scattershot Magazine";
        displayNameShort = "Base Scattershot";
        descriptionShort = "Base Scattershot magazine for rri weapons";
        ammo = "";
        count = 5;
        initSpeed = 1000;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Shotgun_Buck_ca.paa);
    };

    class GMAG(Slug): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Slug Magazine";
        displayNameShort = "Base Slug";
        descriptionShort = "Base Slug magazine for rri weapons";
        ammo = "";
        count = 5;
        initSpeed = 1000;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Shotgun_Slug_ca.paa);
    };

    class GMAG(beanbag): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Beanbag Round";
        displayNameShort = "Beanbag";
        descriptionShort = "Non-lethal beanbag round used by the DP-23 platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","Commando","JumpTrooper"};
        ammo = QGAMMO(Beanbag);
        count = 10;
        mass = 4;
        picture = QPATHTOF(data\icons\misc\beanbag_mag_ca.paa);
    };

    class GMAG(Stun): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Stun Magazine";
        displayNameShort = "Stun";
        descriptionShort = "Stun magazine for rri weapons";
        count = 2;
        initSpeed = 700;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        ammo = QGAMMO(Stun);
        model = QPATHTOF(data\magazine\colors\stuns\rri_stun_magazine.p3d);
        GVAR_CORE(weapons_core,recharge) = 1;
    };

    class GMAG(Ion): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Ion Magazine";
        displayNameShort = "Ion";
        descriptionShort = "Ion magazine for rri weapons";
        count = 2;
        initSpeed = 700;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Rifle_Base_ca.paa);
        ammo = QGAMMO(Ion);
        model = QPATHTOF(data\magazine\colors\stuns\rri_stun_magazine.p3d);
        GVAR_CORE(weapons_core,recharge) = 1;
    };

    class GMAG(Stealth): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-19 10rnd TB99 Stealth Cell";
        displayNameShort = "Stealth";
        descriptionShort = "Special charge cell powered by Tibanna gas, used by the DC-19 stealth platform.";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        count = 10;
        ammo = QGAMMO(Stealth);
        tracersEvery = 1;
    };

    class GMAG(AT_Rocket_Base): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Magazine";
        displayNameShort = "Base";
        descriptionShort = "Base Rocket magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 20;
        picture = QPATHTOF(data\icons\misc\Rocket_AT_ca.paa);
        model = QPATHTOF(data\magazine\colors\blue\rri_blue_magazine.p3d);
        ammo = QGAMMO(Rocket_Base);
    };

    class GMAG(AA_Rocket_Base): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Magazine";
        displayNameShort = "Base";
        descriptionShort = "Base Rocket magazine for rri weapons";
        count = 30;
        initSpeed = 700;
        mass = 10;
        picture = QPATHTOF(data\icons\misc\Rocket_AA_ca.paa);
        model = QPATHTOF(data\magazine\colors\blue\rri_blue_magazine.p3d);
        ammo = QGAMMO(Rocket_Base);
    };
};
