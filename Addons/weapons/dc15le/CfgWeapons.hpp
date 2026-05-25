class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;

class CfgWeapons {

	class ItemCore;

	class 3AS_DC15A_Base_F;
	class 3AS_DC15A_F : 3AS_DC15A_Base_F {
		class WeaponSlotsInfo;
	};

	class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(DC15LE) : 3AS_DC15A_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15LE";
		baseWeapon = QGWEAPON(DC15LE);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};

		magazines[] = {QGMAG(DC15LE_HP)};
		magazineWell[] = {QGMAGWELL(DC15LE)};
		picture = QPATHTOF(data\ui\DC15LE_Base_ca.paa);
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15LE);
			power = "LowPower";
		};

		modes[] = {"Single"};

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
			};

			dispersion = 0.00033;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 950;
			maxRangeProbab = 0.3;
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
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
					"3AS_Optic_DC15LE_F"
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QGVAR(DC15LE_muzzle),"3AS_Muzzle_DC15LE_F"};
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

	class GWEAPON(DC15LE_HP): 3AS_DC15A_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15LE High Power";
		baseWeapon = QGWEAPON(DC15LE_HP);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		magazines[] = {QGMAG(DC15LE),QGMAG(DC15LE_HP)};
		magazineWell[] = {QGMAGWELL(DC15LE)};
		picture = QPATHTOF(data\ui\DC15LE_Base_ca.paa);
		MACRO_GUNSMOKE_HP_EFFECT;
		GVAR_CORE(weapons_core,forceMuzzle) = 1;

		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15LE);
			power = "HighPower";
		};

		modes[] = {"Single"};

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
			};

			dispersion = 0.00033;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 950;
			maxRangeProbab = 0.3;
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
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
					"3AS_Optic_DC15LE_F"
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QGVAR(DC15LE_muzzle),"3AS_Muzzle_DC15LE_F"};
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

		class LinkedItems {
			class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = QGVAR(DC15LE_muzzle);
			};
		};
	};

	class 3AS_muzzle_DC15LE_F: ItemCore {
		class ItemInfo;
	};

	class GVAR(DC15LE_muzzle) : 3AS_muzzle_DC15LE_F {
        author = AUTHOR;
        displayName = "[SOB] DC-15LE Muzzle";

        class ItemInfo: ItemInfo {
            mass = 10;
            class MagazineCoef {
                initSpeed = 1.25;
            };

            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 1;
                audibleFire = 1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1;
            };

            class MuzzleCoef {
                dispersionCoef = 0.8;
                artilleryDispersionCoef = 1;
                fireLightCoef = 1;
                recoilCoef = 1;
                recoilProneCoef = 1;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };

	class EGVAR(weapons_core,Stealth_Muzzle);

	class GWEAPON(DC19LE): GWEAPON(DC15LE) {
		scope = 2;
		displayName = "[SOB] DC-19LE";
		baseWeapon = QGWEAPON(DC19LE);

		GVAR_CORE(arsenal,whitelists)[] = {"Arc"};

		muzzles[] = {"this", "Stealth"};

		class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class Single: Single {
			dispersion = 0.00055;
		};

		class XtdGearInfo {};
		class WeaponSlotsInfo: WeaponSlotsInfo{
			class MuzzleSlot: MuzzleSlot{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QEGVAR(weapons_core,Silencer),QGVAR(DC15LE_muzzle)};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15LE);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15LE_HP);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC19LE);
};


