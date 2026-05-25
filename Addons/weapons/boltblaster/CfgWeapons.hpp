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
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
		class Single;
    };
	class GWEAPON(boltblaster_base): arifle_MX_Base_F {
		scope = 2;
		displayName = "[SOB] Boltblaster";
		descriptionShort = "Boltblaster used by Assault Specialist of the Special Operations Brigade";
		baseWeapon = QGWEAPON(boltblaster);

		model = QPATHTOF(rri_boltblaster.p3d);
		hiddenSelections[] = {"Camo1","Emissive"};
		hiddenselectionsmaterials[] = {QPATHTOF(data\Shotty.rvmat),"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\Shotty_CO.paa),QPATHTOF(data\Shotty_CO.paa)};
		reloadAction = "GestureReloadLRR";

		magazines[] = { QGMAG(boltblaster_buck),QGMAG(boltblaster_buck_hp),QGMAG(boltblaster_Slug),QGMAG(boltblaster_Slug_hp),QGMAG(beanbag)};
		magazineWell[] = {QGMAGWELL(boltblaster)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","ARC","Commando"};
        handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anims\boltblaster_hand.rtm)};

		picture = QPATHTOF(data\ui\Boltblaster.paa);

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

		recoil = QGVAR(boltblaster_recoil);
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		ace_overheating_mrbs = 100000;
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this", "Stun"};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1"};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(boltblaster_Shot_SoundSet),
					QGVAR(boltblaster_Tail_SoundSet)
				};
			};
			reloadTime = 0.096;
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(boltblaster_Shot_SoundSet),
					QGVAR(boltblaster_Tail_SoundSet)
				};
			};
			reloadTime = 0.40;
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 97;
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
					MRD_LIST
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(boltblaster_base);
};
