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

	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F {
		class Single;
		class WeaponSlotsInfo;
	};
	class GWEAPON(s195): hgun_P07_F {
		scope = 2;
		displayName = "[SOB] S-195";
		model = QPATHTOF(rri_s195.p3d);
		hiddenSelections[] = {"camo1"};
		baseWeapon = QGWEAPON(s195);
		magazines[] = {QGMAG(s195),QGMAG(s195_slug)};
		magazineWell[] = {QGMAGWELL(s195)};
		muzzles[] = {"this", "Stun"};
		// picture = QPATHTOF(data\ui\RSKF_Base_ca.paa);
		reloadAction = "GestureReloadPistolHeavy02";
		recoil = "recoil_pistol_zubr";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr.wav",0.562341,1,10};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		modes[] = {"Single", "Burst"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Single: Single {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {QEGVAR(weapons_hpb,ubs_Shot_SoundSet),QEGVAR(weapons_hpb,ubs_Tail_SoundSet)};
			};

			dispersion = 0.0095;
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.25;
		};
		class Burst: Mode_Burst {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {QEGVAR(weapons_hpb,ubs_Shot_SoundSet),QEGVAR(weapons_hpb,ubs_Tail_SoundSet)};
			};

			reloadTime = 0.25;
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_pistol_heavy";
			dispersion = 0.0095;
			burst = 2;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 30;
			holsterScale = 0.84;
			class CowsSlot: CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRD_LIST,
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,MRCO)
				};
			};

            class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {"3AS_Muzzle_Arkanian_Pistol_1_F",};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {
					QEGVAR(weapons_core,Flashlight_nomodel),
					QEGVAR(weapons_core,Pointer_IR_nomodel),
					"3AS_Flashlight_Arkanian_Pistol_1_F"
				};
			};

            class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};

		class GunParticles {
			class FirstEffect {
				effectName = "SniperCloud";
				directionName = "Konec hlavne";
				positionName = "Usti hlavne";
			};
		};
	};
};
