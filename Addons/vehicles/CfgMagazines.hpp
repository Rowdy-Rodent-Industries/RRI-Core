class CfgMagazines {
    class 3as_PylonWeapon_ARC_240Rnd_Heavy_Shells;
    class 3as_ARC_1000Rnd_Light_shells;
    class magazine_Missile_AGM_02_x1;
    class magazine_Missile_HARM_x1;
    class magazine_Missile_AA_R73_x1;
    class 3AS_BTLB_450Rnd_Heavy_Shells;
    class 2rnd_GBU12_LGB;
    class PylonMissile_1Rnd_Missile_AA_03_F;
    class magazine_Bomb_SDB_x1;
//Precision Munitions, or R.O.C.K.

	class GVAR(Rock_Bomb_Mag): magazine_Bomb_SDB_x1
	{
		ammo=QGVAR(precision_bomb);
		count=2;
		scope=2;
		displayName="R.O.C.K. Bomb";
		displayNameShort="R.O.C.K. Bomb";
        hardpoints[] = {QGVAR(Rock_Pylon)};
        pylonWeapon = QGVAR(Rock_Bomb);
	};

    class GVAR(Rocket_Missile_Mag): magazine_Missile_AGM_02_x1
    {
        ammo = QGVAR(Precision_Missile);
        count = 2;
        scope = 2;
        displayName = "R.O.C.K. Missile";
        DisplayNameShort = "R.O.C.K. Missle";
        hardpoints[] = {QGVAR(Rock_Pylon)};
        pylonWeapon = QGVAR(Rock_Missile);
    };

//HARM Missiles

    class GVAR(Harm_Mag): magazine_Missile_HARM_x1
    {
        ammo = QGVAR(HARM_Ammo);
        count = 4;
        scope = 2;
        displayName = "Stalkers";
        displayNameShort = "Stalkers";
        hardpoints[] = {QGVAR(Harm_Pylon)};
        pylonWeapon = QGVAR(Harm_Pylon);
    };

//Anti Air Missiles
    class GVAR(AA_Typhoon): magazine_Missile_AA_R73_x1
    {
        ammo = QGVAR(AA_Ammo_Short);
        count = 3;
        scope = 2;
        displayName = "Typhoon";
        displayNameShort = "Typhoon";
        descriptionShort = "Typhoon is a Medium range anti-air missile with a max range of 6 kilometers, meant for an all around anti-air missile";
        hardpoints[] = {QGVAR(AA_Pylon)};
        pylonWeapon = QGVAR(AA_Typhoon_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

    class GVAR(AA_Assasin): PylonMissile_1Rnd_Missile_AA_03_F
    {
        ammo = QGVAR(AA_Ammo_Stealth);
        count = 3;
        scope = 2;
        displayName = "Assasins";
        displayNameShort = "Assasins";
        descriptionShort = "Assasins are medium range, stealth anti-air missiles. Being almost undetectable these missiles are perfect for getting the jump on your enemy.";
        hardpoints[] = {QGVAR(Stealth_Pylon)};
        pylonWeapon = QGVAR(AA_Assasin_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

    class GVAR(AA_Hurricane): magazine_Missile_AA_R73_x1
    {
        ammo = QGVAR(AA_Ammo_Long);
        count = 3;
        scope = 2;
        displayName = "Hurricane 2x";
        displayNameShort = "Hurricane 2x";
        descriptionShort = "Hurricanes are long range anti-air missiles with a max range of 8 kilometers, meant for sniping out air targets from a far";
        hardpoints[] = {QGVAR(AA_Heavy_Pylon)};
        pylonWeapon = QGVAR(AA_Hurrican_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

    class GVAR(AA_Lightning): magazine_Missile_AA_R73_x1
    {
        ammo = QGVAR(AA_Ammo_Light);
        count = 6;
        scope = 2;
        displayName = "Lightning";
        displaynameShort = "Lightning";
        descriptionShort = "Lightings are a short range anti-air missile with a max range of 1.5k kilometers, meant for short burst fighting";
        hardpoints[] = {QGVAR(AA_Heavy_Pylon)};
        pylonWeapon = QGVAR(AA_Lightning_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

//Air to Ground Missiles

    class GVAR(AGM_Hammer): magazine_Missile_AGM_02_x1
    {
        ammo = QGVAR(AGM_Ammo);
        count = 3;
        scope = 2;
        displayName = "Hammers";
        displayNameShort = "Hammers";
        descriptionShort = "Hammers are Air to Ground missiles that use both IR and Laser to lock on and fire. With a max range of 6 kilometers, you can use these missiles in a variety of ways";
        hardpoints[] = {QGVAR(AGM_Heavy_Pylon)};
        pylonWeapon = QGVAR(AGM_Hammer_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

    class GVAR(AGM_JackHammer): magazine_Missile_AGM_02_x1
    {
        ammo = QGVAR(JH_Ammo);
        count = 6;
        scope = 2;
        displayName = "JackHammer";
        displayNameShort = "JackHammer";
        hardpoints[] = {QGVAR(AGM_Pylon)};
        pylonWeapon = QGVAR(AGM_JackHammer_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

    class GVAR(AGM_Hitman): magazine_Missile_AGM_02_x1
    {
        ammo = QGVAR(AGM_Stealh_Ammo);
        count = 3;
        scope = 2;
        displayName = "Hitman";
        displayNameShort = "Hitman";
        hardpoints[] = {QGVAR(Stealth_Pylon)};
        pylonWeapon = QGVAR(AGM_Hitman_Pylon);
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
    };

//Bombs

    class GVAR(Bomb_Shinies): 2rnd_GBU12_LGB
    {
        ammo = QGVAR(Dummy_Bomb_Ammo);
        count = 5;
        scope = 2;
        displayName = "Shinies 5x";
        displayNameShort = "Shinies 5x";
        descriptionShort = "Shinies are dumb bombs, which do not lock on in any way and can only be dumb dropped.";
        hardpoints[] = {QGVAR(Bomb_Pylon)};
        pylonWeapon = QGVAR(Bomb_Shinies_Pylon);
    };

    class GVAR(Bomb_BMTB):  magazine_Bomb_SDB_x1
    {
        ammo = QGVAR(LGB_ammo);
        count = 6;
        scope = 2;
        displayName = "BMTB 6x";
        displayNameShort = "BMTB 6x";
        descriptionShort = "BMTB bombs are smart bombs, which can lock on via laser, and will glide to the target if need be";
        hardpoints[] = {QGVAR(Bomb_Pylon)};
        pylonWeapon = QGVAR(Bomb_BMTB_Pylon); 
        model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
    };

    //Cannon Magazine 

    class GVAR(AA_Cannon_Mag): 3as_ARC_1000Rnd_Light_shells
    {
        count = 500;
        ammo = QGVAR(Drag_Ammo);
        displayname = "AA Cannon";
        displaynameShort = "Cannon";
        tracersEvery = 1;
        initSpeed=1000;
        pylonWeapon = QGVAR(AA_Cannon_Ammo);
    };

    class GVAR(AG_Cannon_Mag): 3AS_BTLB_450Rnd_Heavy_Shells
    {
        count = 150;
        ammo = QGVAR(AA_Cannon_Ammo);
        displayname = "AG Cannon";
        displaynameShort = "Cannon";
        tracersEvery = 1;
        initSpeed=1000;
        pylonWeapon = QGVAR(AG_Cannon_Ammo);
    };

    class GVAR(LAAT_Cannon_Mag): 3AS_BTLB_450Rnd_Heavy_Shells
    {
        count = 500;
        ammo = QGVAR(AG_Cannon_Ammo);
        displayName = "LAAT Cannon";
        displayNameShort = "Cannon";
        tracersEvery = 1;
        initSpeed = 1000;
        pylonWeapon = QGVAR(LAAT_Cannon);
    };

    class GVAR(Heavy_Cannon_Mag): 3as_PylonWeapon_ARC_240Rnd_Heavy_Shells
    {
        count = 500;
        ammo = QGVAR(LAAT_Cannon);
        displayname = "Heavy Cannon";
        displayNameShort = "Cannon";
        tracersEvery = 1;
        initSpeed = 1200;
    };

    class GVAR(ARC_Cannon_Mag): 3as_PylonWeapon_ARC_240Rnd_Heavy_Shells
    {
        count = 1000;
        ammo = QGVAR(AA_Cannon_Ammo);
        displayName = "Rear Cannon";
        displayNameShort = "A2A";
        tracersEvery = 1;
        initSpeed = 1200;
    };

//ATTE Mags
    class GVAR(ATTE_AP): 3AS_30Rnd_Mass_Driver_shells
    {
        displayName = "10rnd AP";
        displayNameShort = "AP";
        ammo = QGVAR(ATTE_AP_Ammo);
        count = 10;
    };

    class GVAR(ATTE_HE): 3AS_30Rnd_Mass_Driver_shells
    {
        displayName = "15rnd HE";
        displayNameShort = "HE";
        ammo = QGVAR(ATTE_HE_Ammo);
        count = 15;
    };
};
