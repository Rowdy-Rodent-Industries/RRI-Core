class GVAR(Base_Mag): JLTS_DC15A_mag
{
	author = AUTHOR;
	count = 10;
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
	displayName = "[41st] MG Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "MG magazine used by the 41st EC";
	ammo = QGVAR(MG_Ammo);
	count = 250;
};

class GVAR(Z6_Mag): GVAR(Base_Mag)
{
	displayName = "[41st] Z6 Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Z6 magazine used by the 41st EC";
	ammo = QGVAR(Z6_Ammo);
	count = 500;
};

class GVAR(Sniper_Mag): GVAR(Base_Mag)
{
	displayName = "[41st] Sniper Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Sniper magazine used by the 41st EC";
	ammo = QGVAR(Sniper_Ammo);
	count = 15;
};

class GVAR(Carbine_Mag): GVAR(Base_Mag)
{
	displayName = "[41st] Carbine Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Carbine magazine used by the 41st EC";
	ammo = QGVAR(Carbine_Ammo);
	count = 30;
};

class GVAR(Sub_Mag): GVAR(Base_Mag)
{
	displayName = "[41st] DC-15s Magazine";
	descriptionShort = "Magazine used by the 41st DC-15S";
	ammo = QGVAR(Carbine_Ammo);
	count = 50;
};