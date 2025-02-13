class CfgAmmo {
//Precision Ammo

	class ammo_Bomb_SDB;
	class ammo_bomb_sdb_h: ammo_Bomb_SDB
	{
		class Components;
	};
    class GVAR(precision_bomb): ammo_bomb_sdb_h
	{
		displayName="R.O.C.K. Bomb";
		displayNameShort="R.O.C.K. Bomb";
		model="3AS\3as_Laat\LAATI\model\proton_torpedo.p3d";
		hit=10000;
		indirectHit=10;
		indirectHitRange=1;
		caliber=50;
		explosive=0;
		timeToLive=240;
		triggerTime=5;
		triggerOnImpact="true";
	};

	class M_Jian_AT;
	class GVAR(Precision_Missile): M_Jian_AT
	{
		dispalyName = "R.O.C.K. Missile";
		displayNameshort = "R.O.C.K. Missile";
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		weaponLockSystem = "1 + 2 + 4 + 8";
		triggerTime = 0.1;
		hit = 10000;
		indirectHit = 10;
		indirectHitRange = 1;
		cameraViewAvailable = 1;
		irLock = 1;
		laserLock = 1;
		missileLockMinDistance = 1;
		misileLockMaxDistance = 10000;
		soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss",6,1.5,700};
	};

	//HARM Missile

	class AirTarget;
	class GroundTarget;
	class SensorTemplateAntiRadiation;
	class ammo_Missile_HARM;
	class ammo_Missile_HARM_F:ammo_Missile_HARM
	{
		class Components;
	};
	class GVAR(HARM_Ammo): ammo_Missile_HARM_F
	{
		displayName = "Stalkers";
		displayNameShort = "Stalkers";
		model="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		airLock = 0;
		hit = 800;
		missileLockCone = 120;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 55;
		weaponLockSystem = 16;
		cmImmunity = 0.5;
		manualControl = 0;
		maxControlRange = 16000;
		autoSeekTarget = 1;
		lockSeekRadius = 100;
		flightProfiles[] = {"LoalDistance"};
		initTime = 1.5;
		class LoalDistance
		{
			lockSeekDistanceFromParent = 1000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
					};
				};
			};
		};
		thrust = 400;
		thrustTime = 5;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		maxSpeed = 1000;
		maneuvrability = 30;
		simulationStep = 0.002;
		fuseDistance = 500;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 1;
		whistleDist = 20;
		cameraViewAvailable = 0;
		craterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};

	//AA Missile

	class ammo_Missile_AA_R73;
	class GVAR(AA_Base_Ammo): ammo_Missile_AA_R73
	{
		class components;
	};
	class GVAR(AA_Ammo_Short): GVAR(AA_Base_Ammo)
	{
		displayName = "Typhoon";
		displayNameShort = "Typhoon";
		model="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		cmimmunity = 0.7;
		triggerTime=0.1;
		hit=620;
		indirectHit=500;
		cameraViewAvailable=1;
		maneuvrability=25;
		sideAirFriction=0.22;
		thrust=220;
		thrustTime=10;
		timeToLive=10;
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 1200;
		missileLockCone	= 180;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=10;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};

	class GVAR(AA_Ammo_Stealth): GVAR(AA_Ammo_Short)
	{
		displayName = "Assasins";
		displayNameShort = "Assasins";
		effectsMissile = "";
		cmimmunity = 0.5;
		missileLockMaxDistance = 3000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 1200;
		missileLockCone	= 180;
		weaponLockSystem = 0;
	};

	class GVAR(AA_Ammo_Long): GVAR(AA_Base_Ammo)
	{
		displayName = "Hurricane";
		displayNameShort = "Hurricane";
		model="3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		cmimmunity=1;
		hit=10;
		indirectHit=500;
		cameraViewAvailable=1;
		maneuvrability=20;
		sideAirFriction=0.10000001;
		thrust=1000;
		thrustTime=30;
		timeToLive=40;
		missileLockMinDistance=1000;
		missileLockMaxDistance=10000;
		initTime = 1.5;
		weaponLockSystem = 0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=5;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=5;
							maxRange=10;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};

	class GVAR(AA_Ammo_Light): GVAR(AA_Base_Ammo)
	{
		displayName = "Lightning";
		displayNameShort = "Lightning";
		model="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		cmimmunity = 0.9;
		triggerTime=0.1;
		hit=350;
		indirectHit = 150;
		cameraViewAvailable=1;
		maneuvrability=25;
		sideAirFriction=0.25;
		thrust=300;
		maxSpeed = 2000;
		thrustTime=10;
		timeToLive=20;
		missileLockMinDistance=20;
		missileLockMaxDistance=1500;
		missileLockCone	= 180;
		missileKeepLockedCone = 270;
		trackLead = 1;
		trackOversteer = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=10;
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};

	//Air to Ground Ammo

	class GVAR(AGM_Ammo): M_Jian_AT
	{
		displayName="Hammer";
		displayNameShort="Hammer";
		muzzleEffect="";
		model="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		thrustTime=6;
		hit=3000;
		indirectHit=100;
		indirectHitRange=5;
		cameraViewAvailable=1;
		explosionTime=13;
		timeToLive=13;
		initTime = 1.2;
		soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss",6,1.5,700};
	};

	class GVAR(JH_Ammo): M_Jian_AT
	{
		DisplayName = "JackHammer";
		displayNameShort = "JackHammer";
		model="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		triggerTime=0.1;
		thrustTime=6;
		hit=1400;
		indirectHit=75;
		indirectHitRange=5;
		cameraViewAvailable=1;
		explosionTime=13;
		timeToLive=13;
		irLock=1;
		laserLock=1;
		initTime = 0.5;
		missileLockMinDistance=1;
		missileLockMaxDistance=10000;
		missileLockCone	= 270;
		missileKeepLockedCone = 270;
		soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss",6,1.5,700};
	};

	class GVAR(AGM_Stealh_Ammo): M_Jian_AT
	{
		displayName = "Hitman";
		displayNameShort = "Hitman";
		model="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		effectsMissile = "";
		thrustTime=6;
		hit=1700;
		indirectHit=75;
		indirectHitRange=5;
		cameraViewAvailable=1;
		explosionTime=13;
		timeToLive=13;
		irLock=1;
		laserLock=0;
		missileLockMinDistance=1;
		missileLockMaxDistance=4000;
		missileLockCone	= 180;
		missileKeepLockedCone = 270;
		weaponLockSystem = 0;
	};

	//Bombs

	class Bo_Mk82;
	class GVAR(Dummy_Bomb_Ammo): Bo_Mk82
	{
		displayName = "Shinies";
		displayNameShort = "Shinies";
		model="3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb_C.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb_C.p3d";
		hit=5000;
		indirectHit=5000;
		indirectHitRange=30;
		caliber=3;
		explosive=1;
		timeToLive=240;
		triggerTime=5;
		triggerOnImpact="true";
	};

	class GVAR(LGB_ammo): ammo_Bomb_SDB
	{
		displayName = "BMTB";
		displayNameShort = "BMTB";
		hit=4000;
		indirectHit=650;
		indirectHitRange=25;
		canLock = 2;
		laserLock = 1;
		IRLock = 1;
		model="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape="3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,250};
		whistleDist = 200;
		whistleOnFire = 1;
	};

	class GVAR(Drag_Ammo): GVAR(Dummy_Bomb_Ammo)
	{
		displayName = "Shinies[Drag]";
		displayNameShort = "Shinies[Drag]";
		airFriction = 5;
	};

//Cannon Ammo
	class 3as_Z95_Heavy_Energy_shell;
	class GVAR(AA_Cannon_Ammo): 3as_Z95_Heavy_Energy_shell
	{
        aiAmmoUsageFlags="256";
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		allowAgainstInfantry=0;
		cmImmunity=1;
		trackLead=800;
		trackOversteer=500;
		airLock=1;
		hit=400;
		indirectHit=250;
		indirectHitRange=0;
		caliber=20;
		explosive=0.60000002;
		cost=1;
		tracerScale=1;
		brightness=100000;
		tracerStartTime=0;
		tracerEndTime=10;
		timetolive=4;
		nvgOnly=0;
		typicalSpeed=200;
		coefGravity=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		craterEffects="";
		craterShape="";
		airFriction=0;
		muzzleEffect="";
		deflecting=0;
		initTime=0;
		weaponLockSystem=0;
		gravityFactor=0;
		ACE_caliber=1;
	};

	class 3AS_BTLB_Heavy_Energy_Shells;
	class GVAR(AG_Cannon_Ammo): 3AS_BTLB_Heavy_Energy_Shells
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		model = "3as\3as_weapons\data\tracer_green.p3d";
		allowAgainstInfantry=1;
		cmImmunity=1;
		trackLead=800;
		trackOversteer=500;
		airLock=1;
		hit=400;
		indirectHit=100;
		indirectHitRange=15;
		caliber=20;
		explosive=0.60000002;
		cost=1;
		tracerScale=1;
		brightness=100000;
		tracerStartTime=0;
		tracerEndTime=10;
		timetolive=4;
		nvgOnly=0;
		typicalSpeed=200;
		coefGravity=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=4;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		craterEffects="";
		craterShape="";
		airFriction=0;
		muzzleEffect="";
		deflecting=0;
		initTime=0;
		weaponLockSystem=0;
		gravityFactor=0;
		ACE_caliber=1;
	};

	class GVAR(LAAT_Cannon): 3as_Z95_Heavy_Energy_shell
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		model="3as\3as_weapons\data\tracer_green.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		allowAgainstInfantry=1;
		cmImmunity=1;
		trackLead=800;
		trackOversteer=500;
		airLock=1;
		hit=250;
		indirectHit=30;
		indirectHitRange=5;
		caliber=20;
		explosive=0.60000002;
		cost=1;
		deflecting=0;
	};

	class 3as_Arc_Heavy_Energy_shell;
	class GVAR(Heavy_Cannon_Ammo): 3as_Arc_Heavy_Energy_shell
	{
		allowAgainstInfantry=0;
		aiAmmoUsageFlags="128 + 256 + 512";
		hit = 500;
		indirectHit = 50;
		indirecthitRange = 0.5;
		caliber = 30;
		explosive = 0.1;
		cost = 1;
		deflecting=0;
	};

	class GVAR(Z95_Cannon_Ammo): 3as_Arc_Heavy_Energy_shell
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags="128 + 256 + 512";
		hit = 800;
		indirectHit = 90;
		indirectHitRange = 3;
		caliber = 40;
		explosive = 0.3;
		cost = 1;
		deflecting=0;
	};

//ATTE Ammo
	class 3AS_Mass_Driver_Shell;
	class GVAR(ATTE_Base_Ammo): 3AS_Mass_Driver_Shell
	{
		hit = 150;
        indirectHit = 75;
        indirectHitRange = 10;
        timeToLive=30;
        Caliber = 25;
        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};

        airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
	};

//ATTE Ammo
	class GVAR(ATTE_AP_Ammo):GVAR(ATTE_Base_Ammo)
	{
		hit = 900;
		indirectHit = 100;
		indirectHitRange = 3;
		caliber = 40;
		explosive = 0.2;
	};

	class GVAR(ATTE_HE_Ammo): GVAR(ATTE_Base_Ammo)
	{
		hit = 250;
		indirectHit = 30;
		indirectHitRange = 15;
		caliber = 20;
		explosive = 0.7;
		deflecting=0;
	};

//Saber Ammo
	class 3AS_Sabre_HE;
	class GVAR(Saber_Base_Ammo): 3AS_Sabre_HE
	{
		hit = 250;
		indirectHit = 30;
		indirectHitRange = 10;
		caliber = 20;
		explosive = 1.0;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
		deflecting=0;
	};

	class GVAR(Saber_HEAT_Ammo): GVAR(Saber_Base_Ammo)
	{
		hit = 300;
		indirectHit = 50;
		indirectHitRange = 10;
		caliber = 30;
		explosive = 0.5;
	};
	class GVAR(Saber_AP_Ammo): GVAR(Saber_Base_Ammo)
	{
		hit = 700;
		indirectHit = 90;
		indirectHitRange = 3;
		caliber = 35;
		explosive = 0.3;
	};

//ATAP
	class GVAR(ATAP_HEAT_Ammo): GVAR(ATTE_Base_Ammo)
	{
		hit = 600;
		indirectHit = 100;
		indirectHitRange = 5;
		warheadName = "HEAT";
		caliber = 40;
		soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};
	};
};