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

    class 3AS_pistol_DC15SA_Base_F;
    class 3AS_pistol_DC15SA_F: 3AS_pistol_DC15SA_Base_F {
        class WeaponSlotsInfo;
        class Single;
    };

	class GWEAPON(dc15sa): 3AS_pistol_DC15SA_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15s";
		baseWeapon = QGWEAPON(dc15sa);
		magazines[] = {QGMAG(dc15sa)};
		magazineWell[] = {QGMAGWELL(dc15sa)};

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		picture = QPATHTOF(data\ui\DC19S_Base_ca.paa);
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this", "Stun"};

		class Single: Single {
			reloadTime = RPM(250);
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 40;
			class CowsSlot: CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
		};
	};

	class GWEAPON(dc19sa): GWEAPON(dc15sa)
	{
		author = AUTHOR;
		scope = 1;
		displayName = "[SOB] DC-19sa";
		baseWeapon = QGWEAPON(dc19sa);
		magazines[] = {QGMAG(dc19sa)};
		magazineWell[] = {QGMAGWELL(dc19sa)};

		picture = QPATHTOF(data\ui\DC19S_Base_ca.paa);
		class Single: Single {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF(data\sounds\DC19_Stealth.wss),0.8,1.2,50};
				soundBegin[] = {"begin1",1};
			};

			dispersion = 0.00059;
			reloadTime = RPM(250);
		};
	};
};
