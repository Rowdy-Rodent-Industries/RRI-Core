class GVAR(RPS6_Mag): JLTS_RPS6_mag
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