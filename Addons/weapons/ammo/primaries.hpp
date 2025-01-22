class GVAR(Base_Ammo): JLTS_bullet_carbine_blue
{
	author = AUTHOR;

	model = "ls_weapons_core\Effects\laser_blue.p3d";
	effectfly = "ls_plasma_blue";
	ExplosionEffects = "ls_plasma_impact";
	cratereffects = "ls_plasma_impact";

	caliber = 1;
	hit = 12;
	tracerscale = 0.9;
	brightness = 400;
	airfriction = 0;
	coefgravity = 0.001;
	deflecting = 0;
};

class GVAR(Rifle_Ammo): GVAR(Base_Ammo)
{
	caliber = 2;
	hit = 13;
};

class GVAR(MG_Ammo): GVAR(Base_Ammo)
{
	caliber = 3;
	hit = 14;
};

class GVAR(Sniper_Ammo): GVAR(Base_Ammo)
{
	caliber = 4;
	hit = 15;
};

class GVAR(Carbine_Ammo): GVAR(Base_Ammo)
{
	caliber = 2;
	hit = 12;
};