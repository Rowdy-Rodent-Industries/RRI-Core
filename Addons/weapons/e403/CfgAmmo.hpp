class CfgAmmo {
	class GAMMO(40mm_Cannon_Base);

	class GAMMO(e403_he): GAMMO(40mm_Cannon_Base)
	{
		hit=70;
		indirecthit=10;
		indirecthitrange= 5;
		fuseDistance = 5;
		cartridge="";
	};

	class GAMMO(e403_ap): GAMMO(40mm_Cannon_Base)
	{
		hit = 850;
		indirecthit = 15;
		indirecthitrange = 1;
		caliber = 45;
		airfriction=0;
		coefgravity=0;
		fuseDistance = 5;
		cartridge="";
	};
};
