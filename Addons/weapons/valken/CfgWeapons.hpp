class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class EGVAR(weapons_core,Stun_Muzzle);

	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F {
		class WeaponSlotsInfo;
	};

	class GWEAPON(valken38x): 3AS_Valken38X_F {
		author = AUTHOR;
		displayName = "[SOB] Valken-38X";
		baseWeapon = QGWEAPON(valken38x);
		magazines[] = {QGMAG(valken38x)};
		magazineWell[] = {QGMAGWELL(valken)};

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Trooper","Fieldsupport"};
		MACRO_GUNSMOKE_EFFECT;
		picture = QPATHTOF(data\ui\Valken.paa);

		class Single: Mode_SemiAuto
			{
				reloadTime=0.2;
				dispersion=0.00002;
				minRange=2;
				minRangeProbab=0.5;
				midRange=200;
				midRangeProbab=0.69999999;
				maxRange=400;
				maxRangeProbab=0.30000001;
				soundContinuous=0;
				soundBurst=0;
				sounds[]=
				{
					"StandardSound",
					"SilencedSound"
				};
				class BaseSoundModeType{};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_Sniper_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_Sniper_SoundSet"
					};
				};
			};

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
					DMS_LIST,
					"3AS_optic_VK38X_F"
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(valken39y): GWEAPON(valken38x) {
		author = AUTHOR;
		displayName = "[SOB] Valken-39Y";
		baseWeapon = QGWEAPON(valken39y);
		magazines[] = {QGMAG(valken39y)};
		recoil=QEGVAR(weapons_core,Rifle_Recoil);

		picture = QPATHTOF(data\ui\Valken.paa);

		modes[] = {"FullAuto","Single"};
		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle){};

		class Single: Mode_SemiAuto
		{
			reloadTime=0.2;
			dispersion=0.00002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Sniper_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Sniper_SoundSet"
				};
			};
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
					"3AS_Sniper_SoundSet"
				};
			};
			reloadTime=0.10;
			dispersion=0.0005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
		};

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
					HOLO_LIST,
					"3AS_optic_DC15L_F",
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(valken38x);
	WEAPON_BCSEWPN_ZASLEH_MACRO(valken39y);
};
