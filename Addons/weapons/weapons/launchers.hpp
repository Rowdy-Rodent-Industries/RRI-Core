class GVAR(RPS6): JLTS_RPS6
{
	author = AUTHOR;
	displayName = "(41st) RPS-6";
	descriptionShort = "Base Rocket Launcher used by the 41st Elite Corp";
	baseWeapon = QGVAR(RPS6);
	magazines[] = {QGVAR(RPS6_Mag)};

	initSpeed = -1.2;

	JLTS_friedItem = "";
	JLTS_hasElectronics = 0;
	JLTS_hasEMPProtection = 1;
};

class GVAR(RPS6_D) : 3AS_RPS6_Base {
	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable)";
	baseWeapon = QGVAR(RPS6_D);
	magazines[] = {QGVAR(RPS6_Mag)};
};

class GVAR(RPS6_D_Loaded) : GVAR(RPS6_D) {
	scope = 2;

	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable)";
	baseWeapon = QGVAR(RPS6_D_Loaded);
	magazines[] = {"CBA_FakeLauncherMagazine"};
};

class GVAR(RPS6_D_Used): GVAR(RPS6_D) {
	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable, Used)";
	baseWeapon = QGVAR(RPS6_D_Used);
	magazines[] = {"CBA_FakeLauncherMagazine"};
};

class GVAR(PLX): 3AS_PLX1_F {
	author = AUTHOR;
	displayName = "[41st] PLX Guided Missile Launcher";
	baseWeapon = QGVAR(PLX);

	magazines[] = {QGVAR(PLX_AT),QGVAR(PLX_AA)};

	class Single: Mode_SemiAuto
	{
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"3AS\3AS_Weapons\PLX1\Sounds\PLX_Fire.ogg",
				3.1622777,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		recoil="recoil_single_titan";
		aiRateOfFire=7;
		aiRateOfFireDistance=1500;
		minRange=70;
		minRangeProbab=0.89999998;
		midRange=300;
		midRangeProbab=0.80000001;
		maxRange=3000;
		maxRangeProbab=0.80000001;
	};
	class TopDown: Single
	{
		textureType="topDown";
		displayName="Top-down Attack";
		aiRateOfFire=7;
		aiRateOfFireDistance=1500;
		minRange=150;
		minRangeProbab=0.80000001;
		midRange=500;
		midRangeProbab=0.94999999;
		maxRange=3000;
		maxRangeProbab=0.94999999;
	};
	canLock=2;
	lockAcquire=0;
	weaponLockDelay=0.75;
	weaponLockSystem=6;
	cmImmunity=0.80000001;
};