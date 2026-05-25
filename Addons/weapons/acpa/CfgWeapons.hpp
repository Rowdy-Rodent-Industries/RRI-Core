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

	class Rifle_Base_F;
	class 3AS_ScatterGun_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class GWEAPON(acpa): 3AS_ScatterGun_Base_F {
		author=AUTHOR;
		scope=2;
		displayName = "[SOB] ACP-Array Scatter Gun";
		baseWeapon = QGWEAPON(acpa);
		magazines[] = {QGMAG(ACPA_Slug),QGMAG(ACPA_Buck),QGMAG(beanbag) };
		magazineWell[] = {QGMAGWELL(acpa) };
		GVAR_CORE(arsenal,whitelists)[] = {"Arc","Commando","JumpTrooper","FieldSupport"};

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_HP_EFFECT;
		model="3as\3AS_Weapons\Scattergun\3AS_Scattergun_F.p3d";
		picture = QPATHTOF(data\ui\ACPA_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\ACPA_Base_ca.paa);
		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class CBA_weaponEvents{};

		class Single: Mode_SemiAuto
		{
			reloadTime=0.5;
			dispersion=0.00066000002;
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
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Scattergun_SoundSet"
				};
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(acpa);
};
