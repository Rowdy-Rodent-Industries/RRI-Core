class GVAR(Base_Mag): JLTS_DC15A_mag
{
	author = AUTHOR;
	count = 60;
	displayName = "[41st] Base Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Base magazine used by the 41st EC";
	ammo = QGVAR(Base_Ammo);
	tracersevery = 1;
};

class GVAR(Rifle_Mag): GVAR(Base_Mag)
{
	displayName = "[41st] Rifle Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Rifle magazine used by the 41st EC";
	ammo = QGVAR(Rifle_Ammo);
};

class GVAR(MG_Mag): GVAR(Base_Mag)
{
	count = 120;
	displayName = "[41st] MG Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "MG magazine used by the 41st EC";
	ammo = QGVAR(MG_Ammo);
};

class GVAR(Z6_Mag): GVAR(Base_Mag)
{
	count = 250;
	displayName = "[41st] Z6 Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Z6 magazine used by the 41st EC";
	ammo = QGVAR(MG_Ammo);
};

class GVAR(Sniper_Mag): GVAR(Base_Mag)
{
	count = 20;
	displayName = "[41st] Sniper Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Sniper magazine used by the 41st EC";
	ammo = QGVAR(Sniper_Ammo);
};

class GVAR(Carbine_Mag): GVAR(Base_Mag)
{
	count = 30;
	displayName = "[41st] Carbine Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Carbine magazine used by the 41st EC";
	ammo = QGVAR(Carbine_Ammo);
};

class GVAR(Sub_Mag): GVAR(Base_Mag)
{
	count = 80;
	displayName = "[41st] DC-15s Magazine";
	descriptionShort = "Magazine used by the 41st DC-15S";
	ammo = QGVAR(Carbine_Ammo);
};

class GVAR(Shotgun_Buck): GVAR(Base_Mag)
{
	count = 12;
	displayName = "[41st] DP-23 Buckshot Magazine";
	descriptionShort = "The 12rnd Buckshot Magazine used by the 41st EC";
	ammo = QGVAR(Buckshot_Ammo);
};

class GVAR(Shotgun_Slug): GVAR(Base_Mag)
{
	count = 12;
	displayName = "[41st] DP-23 Slug Magazine";
	descriptionShort = "the 12rnd Slug magazine used by the 41st EC";
	ammo = QGVAR(Slug_Ammo);
};