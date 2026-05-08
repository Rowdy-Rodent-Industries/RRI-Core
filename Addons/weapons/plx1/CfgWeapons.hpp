class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;

class CfgWeapons {
    class JLTS_PLX1_AT;
    class 3AS_PLX1_F : JLTS_PLX1_AT {
        class WeaponSlotsInfo;
    };
	class GWEAPON(plx1): 3AS_PLX1_F {
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] PLX-1 Guided Missile Launcher Platform";
		baseWeapon = QGWEAPON(plx1);
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		magazines[] = {QGMAG(plx1_at), QGMAG(plx1_aa)};
		magazineWell[] = {QGMAGWELL(plx1)};

		picture = QPATHTOF(data\ui\PLX_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\PLX_Base_ca.paa);

		ace_reloadlaunchers_enabled = 1;

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
			textureType = "direct";
    		displayName = "Direct";
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
		lockAcquire=1;
		weaponLockDelay=0.75;
		weaponLockSystem=6;
		cmImmunity=0.80000001;
	};
};
