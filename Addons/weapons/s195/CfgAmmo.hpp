class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(Shotgun_Base);
    class GAMMO(HP_Base);
    class GAMMO(Shotgun_HP);
    class GAMMO(s195): GAMMO(Shotgun_Base)
    {
        hit = 35;
        caliber = 5;
        submunitionConeType[]=
		{
			"poissondisc",
			15
		};
		submunitionConeAngle=1.25;
        triggerTime=0.0001;
    };

    class GAMMO(s195_slug): GAMMO(HP_Base)
    {
        hit = 42;
        caliber = 5;
    };
};
