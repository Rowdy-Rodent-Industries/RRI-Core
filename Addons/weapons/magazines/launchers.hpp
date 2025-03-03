class GVAR(RPS6_Mag): JLTS_RPS6_mag
{
	scope = 2;
    author = AUTHOR;
    displayName = "[41st] RPS-6 AT Rocket";
    displayNameShort = "AT";
    descriptionShort = "Anti-Tank rocket used by the RPS-6 launcher platform";
    ammo = QGVAR(Rocket_Base);
};

class GVAR(RPS6D_Mag): 3AS_MK40_AT
{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] RPS-6 AT Rocket";
    displayNameShort = "AT";
    descriptionShort = "Anti-Tank rocket used by the RPS-6 launcher platform";
    ammo = QGVAR(Rocket_Base);
};

class GVAR(PLX_AT): 3AS_JLTS_MK43_AT
{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] PLX AT Rocket";
    displayNameShort = "AT";
    descriptionShort = "Anti-Tank rocket used by the PLX launcher platform";
    // ammo = QGVAR(PLX_AT_Rocket); //todo
};

class GVAR(PLX_AA): 3AS_JLTS_MK39_AA
{
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] PLX AA Rocket";
    displayNameShort = "AA";
    descriptionShort = "Anti-Air rocket used by the PLX Launcher Platform";
    // ammo = QGVAR(PLX_AA_Rocket); //todo
};

class GVAR(HH12_Cluster_Mag): NLAW_F {
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] HH-12 Cluster Rocket";
    displayNameShort = "Cluster";
    descriptionShort = "Cluster Rocket used by the HH-12 launcher platform";

    modelSpecial = "";
    model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
    picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
    initSpeed = 200;
    maxLeadSpeed = 27.7778;
    count = 1;

    ammo = QGVAR(HH12_cluster_Rocket);

    type = 256;
    //ace_arsenal_hide = -1;
    mass = 100;
};

class GVAR(HH12_Mag): NLAW_F {
    scope = 2;
    author = AUTHOR;
    displayName = "[41st] HH-12 Rocket";
    displayNameShort = "AT";
    descriptionShort = "Rocket used by the HH-12 launcher platform";

    modelSpecial = "";
    model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
    picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
    initSpeed = 200;
    maxLeadSpeed = 27.7778;
    count = 1;

    ammo = QGVAR(HH12_rocket);

    type = 256;
    //ace_arsenal_hide = -1;
    mass = 60;
};