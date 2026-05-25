class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(z6): GAMMO(Base)
    {
		hit = 16;
		caliber = 1.2;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = 30;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
    };

	class GAMMO(40mm_Cannon_Base);
	class GAMMO(z6_heavy): GAMMO(40mm_Cannon_Base) 
	{
		hit = 50;
		indirectHit = 15;
		indirectHitRange = 10;
		caliber = 10;
		airfriction=0.05;
		coefgravity=1;
	};
};
