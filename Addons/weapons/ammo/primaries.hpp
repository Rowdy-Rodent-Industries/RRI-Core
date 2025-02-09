class GVAR(Base_Ammo): JLTS_bullet_carbine_blue
{
	author = AUTHOR;

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

	class HitEffects
    {
        default_mat = "ls_plasma_impact";
        Hit_Foliage_Banana = "ls_plasma_impact";
        Hit_Foliage_Dead = "ls_plasma_impact";
        Hit_Foliage_green = "ls_plasma_impact";
        Hit_Foliage_Green_big = "ls_plasma_impact";
        Hit_Foliage_Palm = "ls_plasma_impact";
        Hit_Foliage_Pine = "ls_plasma_impact";
        hitBuilding = "ls_plasma_impact";
        hitConcrete = "ls_plasma_impact";
        hitFoliage = "ls_plasma_impact";
        hitGlass = "ls_plasma_impact";
        hitGlassArmored = "ls_plasma_impact";
        hitGroundHard = "ls_plasma_impact";
        hitGroundRed = "ls_plasma_impact";
        hitGroundSoft = "ls_plasma_impact";
        hitHay = "ls_plasma_impact";
        hitMan = "ls_plasma_impact";
        hitMetal = "ls_plasma_impact";
        hitMetalPlate = "ls_plasma_impact";
        hitPlastic = "ls_plasma_impact";
        hitRubber = "ls_plasma_impact";
        hitTyre = "ls_plasma_impact";
        hitVirtual = "ls_plasma_impact";
        hitWater = "ls_plasma_impact";
        hitWood = "ls_plasma_impact";
    };

    bulletFly1[] = {"ls_weapons_core\sounds\whiz\whiz1.wss",1.58,1,30};
    bulletFly2[] = {"ls_weapons_core\sounds\whiz\whiz2.wss",1.58,1,30};
    bulletFly3[] = {"ls_weapons_core\sounds\whiz\whiz3.wss",1.58,1,30};
    bulletFly4[] = {"ls_weapons_core\sounds\whiz\whiz4.wss",2.23872,1,100};
    bulletFly5[] = {"ls_weapons_core\sounds\whiz\whiz5.wss",2.23872,1,100};
    bulletFly6[] = {"ls_weapons_core\sounds\whiz\whiz6.wss",2.23872,1,100};
    bulletFly7[] = {"ls_weapons_core\sounds\whiz\whiz7.wss",2.23872,1,100};
    bulletFly8[] = {"ls_weapons_core\sounds\whiz\whiz8.wss",2.23872,1,100};
    bulletFly[] = {"bulletFly1",0.125,"bulletFly2",0.125,"bulletFly3",0.125,"bulletFly4",0.125,"bulletFly5",0.125,"bulletFly6",0.125,"bulletFly7",0.125,"bulletFly8",0.125};
    soundHit1[] = {"ls_weapons_core\sounds\impact\bbi15.wss",1.9952624,1,120};
    soundHit2[] = {"ls_weapons_core\sounds\impact\bbi16.wss",1.9952624,1,120};
    soundHit3[] = {"ls_weapons_core\sounds\impact\bbi17.wss",1.9952624,1,120};
    soundHit4[] = {"ls_weapons_core\sounds\impact\bbi18.wss",1.9952624,1,120};
    soundHit5[] = {"ls_weapons_core\sounds\impact\bbi19.wss",1.9952624,1,120};
    soundHit6[] = {"ls_weapons_core\sounds\impact\bbi13.wss",1.9952624,1,120};
};

class GVAR(Base_Shotgun_Ammo): SWLW_ammo_scatter_blue
{
    author = AUTHOR;
    hit = 15;
    caliber = 2;
    model = "ls_weapons_core\Effects\laser_blue.p3d";
    effectfly = "ls_plasma_blue";
	ExplosionEffects = "ls_plasma_impact";
	cratereffects = "ls_plasma_impact";
    simulation = "shotSpread";
	fireSpreadAngle = 3;

    class HitEffects
    {
        default_mat = "ls_plasma_impact";
        Hit_Foliage_Banana = "ls_plasma_impact";
        Hit_Foliage_Dead = "ls_plasma_impact";
        Hit_Foliage_green = "ls_plasma_impact";
        Hit_Foliage_Green_big = "ls_plasma_impact";
        Hit_Foliage_Palm = "ls_plasma_impact";
        Hit_Foliage_Pine = "ls_plasma_impact";
        hitBuilding = "ls_plasma_impact";
        hitConcrete = "ls_plasma_impact";
        hitFoliage = "ls_plasma_impact";
        hitGlass = "ls_plasma_impact";
        hitGlassArmored = "ls_plasma_impact";
        hitGroundHard = "ls_plasma_impact";
        hitGroundRed = "ls_plasma_impact";
        hitGroundSoft = "ls_plasma_impact";
        hitHay = "ls_plasma_impact";
        hitMan = "ls_plasma_impact";
        hitMetal = "ls_plasma_impact";
        hitMetalPlate = "ls_plasma_impact";
        hitPlastic = "ls_plasma_impact";
        hitRubber = "ls_plasma_impact";
        hitTyre = "ls_plasma_impact";
        hitVirtual = "ls_plasma_impact";
        hitWater = "ls_plasma_impact";
        hitWood = "ls_plasma_impact";
    };

    bulletFly1[] = {"ls_weapons_core\sounds\whiz\whiz1.wss",1.58,1,30};
    bulletFly2[] = {"ls_weapons_core\sounds\whiz\whiz2.wss",1.58,1,30};
    bulletFly3[] = {"ls_weapons_core\sounds\whiz\whiz3.wss",1.58,1,30};
    bulletFly4[] = {"ls_weapons_core\sounds\whiz\whiz4.wss",2.23872,1,100};
    bulletFly5[] = {"ls_weapons_core\sounds\whiz\whiz5.wss",2.23872,1,100};
    bulletFly6[] = {"ls_weapons_core\sounds\whiz\whiz6.wss",2.23872,1,100};
    bulletFly7[] = {"ls_weapons_core\sounds\whiz\whiz7.wss",2.23872,1,100};
    bulletFly8[] = {"ls_weapons_core\sounds\whiz\whiz8.wss",2.23872,1,100};
    bulletFly[] = {"bulletFly1",0.125,"bulletFly2",0.125,"bulletFly3",0.125,"bulletFly4",0.125,"bulletFly5",0.125,"bulletFly6",0.125,"bulletFly7",0.125,"bulletFly8",0.125};
    soundHit1[] = {"ls_weapons_core\sounds\impact\bbi15.wss",1.9952624,1,120};
    soundHit2[] = {"ls_weapons_core\sounds\impact\bbi16.wss",1.9952624,1,120};
    soundHit3[] = {"ls_weapons_core\sounds\impact\bbi17.wss",1.9952624,1,120};
    soundHit4[] = {"ls_weapons_core\sounds\impact\bbi18.wss",1.9952624,1,120};
    soundHit5[] = {"ls_weapons_core\sounds\impact\bbi19.wss",1.9952624,1,120};
    soundHit6[] = {"ls_weapons_core\sounds\impact\bbi13.wss",1.9952624,1,120};
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

class GVAR(Buckshot_Ammo): GVAR(Base_Shotgun_Ammo)
{
    caliber = 1.5;
    hit = 15;
};

class GVAR(Slug_Ammo):GVAR(Base_Ammo)
{
    caliber = 5;
    hit = 20;
};