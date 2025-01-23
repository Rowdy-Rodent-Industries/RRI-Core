class CfgWeapons {
	class CannonCore;
	class weapon_SDBLauncher;
	class Missiles_DAGR;
	class weapon_HARMLauncher;
	class weapon_R73Launcher;
	class missiles_Jian;
	class 3as_BTLB_Heavy_Cannon;
	class Cannon_30mm_Plane_CAS_02_F;
	class 3as_LAAT_Medium_Canon;
	class 3AS_ARC_Light_Canon: Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF;
	};
	class Mk82BombLauncher;
//Precision Weapons

	class GVAR(Rock_Bomb): weapon_SDBLauncher {
        magazines[] = {QGVAR(Rock_Bomb_Mag)};
    };

    class GVAR(Rock_Missile): Missiles_DAGR
    {
        magazines[] = {QGVAR(Rocket_Missile_Mag)};
    };

//Harm Weapons 
    class GVAR(Harm_Pylon): weapon_HARMLauncher
    {
        Magazines[] = {QGVAR(Harm_Mag)};
    };

//Anti Air Weapons
    class GVAR(AA_Typhoon_Pylon): weapon_R73Launcher
    {
        Magazines[] = {QGVAR(AA_Typhoon)};
        cmImmunity = 0;

		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.41254,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"3AS_SmallMissile_Soundset",
				"3AS_SmallMissile_Soundset"
			};
		};
    };

	class GVAR(AA_Assasin_Pylon): GVAR(AA_Typhoon_Pylon)
	{
		magazines[] = {QGVAR(AA_Assasin)};
		cmImmunity = 0.4;
		weaponLockSystem = 0;
	};

    class GVAR(AA_Hurrican_Pylon): GVAR(AA_Typhoon_Pylon)
    {
        Magazines[] = {QGVAR(AA_Hurricane)};
		weaponLockSystem = 0;

		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.41254,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"3AS_SmallMissile_Soundset",
				"3AS_SmallMissile_Soundset"
			};
		};
    };

    class GVAR(AA_Lightning_Pylon): GVAR(AA_Typhoon_Pylon)
    {
        Magazines[] = {QGVAR(AA_Lightning)};
        weaponLockDelay = 0.5;

		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.41254,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"3AS_SmallMissile_Soundset",
				"3AS_SmallMissile_Soundset"
			};
		};
    };

//Air to Ground Weapons

    class GVAR(AGM_Hammer_Pylon): Missiles_DAGR
    {
        Magazines[] = {QGVAR(AGM_Hammer)};
    };

    class GVAR(AGM_JackHammer_Pylon): missiles_Jian
    {
        magazines[] = {QGVAR(AGM_JackHammer)};
    };

	class GVAR(AGM_Hitman_Pylon): Missiles_DAGR
	{
		magazines[] = {QGVAR(AGM_Hitman)};
		cmImmunity = 0.5;
		weaponLockSystem = 0;
	};

//Bombs

    class GVAR(Bomb_Shinies_Pylon): Mk82BombLauncher
    {
        magazines[] = {QGVAR(Bomb_Shinies)};
    };

    class GVAR(Bomb_BMTB_Pylon): weapon_SDBLauncher
    {
        magazines[] = {QGVAR(Bomb_BMTB)};
    };

    //Cannon

    class GVAR(AA_Cannon): CannonCore
    {
        displayName = "Anti-Air Cannon";
		canLock = 1;
		ballisticsComputer = "1 + 4";
		magazines[] = {QGVAR(AA_Cannon_Mag)};
		reloadTime = 0.06;

		cursor="EmptyCursor";
		cursorAim="mg";
        nameSound="cannon";

        modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
		};
		class manual: CannonCore
		{
			displayName="SDS 8/5 Dual Pulse Lasers";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Delta7Blaster_SoundSet"
				};
			};
			reloadTime=0.059999999;
			dispersion=0.0099999998;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.02;
			aiRateOfFireDistance=1;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=5;
			burstRangeMax=25;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.94999999;
			midRange=250;
			midRangeProbab=0.89999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burstRangeMax=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=300;
			minRangeProbab=0.55000001;
			midRange=400;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			aiRateOfFireDispersion=4;
			minRange=500;
			minRangeProbab=0.25;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burstRangeMax=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=1500;
			aiRateOfFireDispersion=6;
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=1000;
			midRangeProbab=0.1;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
    };

    class GVAR(AG_Cannon): 3as_BTLB_Heavy_Cannon
    {
        displayName = "Air to Ground Cannon";
        canLock = 1;
        ballisticsComputer = "1";
        magazines[] = {QGVAR(AG_Cannon_Mag)};
        reloadTime = 0.30;

		class Manual: 3AS_ARC_Light_Canon
		{
			reloadTime=0.5;
			displayName="Air to Ground Cannon";
			burst=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_YwingBlaster_SoundSet"
				};
			};
		};
    };

    class GVAR(LAAT_Cannon): 3as_LAAT_Medium_Canon
    {
        displayName = "LAAT Cannon";
        canLock = 1;
        ballisticsComputer = "1 + 4";
		magazines[] = {QGVAR(LAAT_Cannon_Mag)};
		reloadTime = 0.06;
    };

	class GVAR(Heavy_Cannon): CannonCore
	{
		displayName = "Arc Heavy Cannon";
		canLock=1;
		ballisticsComputer="4 + 2 + 8";
		burst=1;

		magazines[]=
		{
			QGVAR(Heavy_Cannon_Mag)
		};

		modes[]=
		{
			"LowROF",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
		};
		class LowROF: LowROF
		{
			reloadTime=1.5;
			displayName="";
			burst=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_StarfighterBlaster_SoundSet"
				};
				soundBegin[] = {"begin1",1};
			};
		};
		class close: LowROF
		{
			dispersion = 0.2;
			showToPlayer=0;
			burst=1;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			aiRateOfFire=1.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=250;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			aiRateOfFireDistance=2500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=1500;
			midRangeProbab=0.60000002;
			maxRange=2500;
			maxRangeProbab=0.1;
		};
	};

	class GVAR(ARC_Cannon): 3AS_ARC_Light_Canon
	{
		scope = 2;
		displayName = "Arc Air to Air Cannon";
		canLock = 1;
		ballisticsComputer="4 + 2 + 8";
		burst = 1;

		magazines[] = 
		{
			QGVAR(ARC_Cannon_Mag)
		};

		reloadTime = 0.05;
		class LowROF: LowROF
		{
			reloadTime = 0.05;
			burst = 1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_YwingBlaster_SoundSet"
				};
				soundBegin[] = {"begin1",1};
			};
		};
	};

//ATTE Weapons
	class GVAR(ATTE_Top_Cannon): 3AS_Mass_Driver_Cannon
	{
		displayName = "Heavy Mass Driver";
		magazines[] = {QGVAR(ATTE_AP),QGVAR(ATTE_HE)};
		magazineReloadTime = 10;
		reloadTime = 1.5;

		ballisticsComputer = "1";
	};

//Saber Weapons
	class GVAR(Saber_Cannon): 3AS_Sabre_Cannons
	{
		scope = 1;
		displayName = "Saber Cannon";
		magazines[] = {QGVAR(Saber_HEAT)};
		canLock = 1;
		maxZeroing = 2000;
		displayNameShort = "Cannon";
		modes[] = {"manual","close","short","medium","far"};
        class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_saber30_Shot_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.3;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
        {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};

	class GVAR(Super_Cannon): 3AS_Sabre_Cannons
	{
		scope = 1;
		displayName = "Super Cannon";
		displayNameShort = "Cannon";
		magazines[] = {QGVAR(Super_AP)};
		magazineReloadTime = 1.5;
		canLock = 1;
		maxZeroing = 2000;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_saber30_Shot_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 1.5;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
        {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
};
