class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class SFA_rifle_base;
	class SFA_T20_rifle: SFA_rifle_base {
		class weaponSlotsInfo;
	};

    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(t20): SFA_T20_rifle
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[SOB] T-20 Rifle";
		magazines[] = {QGMAG(t20)};
		magazineWell[] = {QGMAGWELL(t20)};
		baseWeapon = QGWEAPON(t20);

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper"};
		MACRO_GUNSMOKE_EFFECT;
		picture = QPATHTOF(data\ui\T20.paa);

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 60;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST
				};
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
				};
			class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"3AS_Bipod_VK38X_f"};
			};
		};
		modes[] = {"FullAuto","Single"};

		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle){};

		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"T21_Shot_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.000201;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"T21_Shot_SoundSet"
				};
			};
			reloadTime=0.10;
			dispersion=0.00005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(t20);
};
