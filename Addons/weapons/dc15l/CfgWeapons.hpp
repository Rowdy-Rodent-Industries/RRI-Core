class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_FullAuto;
class UGL_F;

class CfgWeapons {


	class EGVAR(weapons_core,Stun_Muzzle);

	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F: 3AS_DC15L_Base_F {
		class WeaponSlotsInfo;
	};

	class GWEAPON(DC15L): 3AS_DC15L_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15L";
		baseWeapon = QGWEAPON(DC15L);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		magazines[] = {QEGVAR(Mag,DC15L)};
		magazineWell[] = {QGMAGWELL(DC15L)};
		picture = QPATHTOF(data\ui\DC15L_Base_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15L);
			power = "LowPower";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

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
				QEGVAR(weapons_core,ACOGMG)
			};
		};

		class PointerSlot: PointerSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};

		class UnderBarrelSlot: UnderBarrelSlot {
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			compatibleItems[] = {"3AS_Bipod_DC15L_f"};
		};
	};
	};

	class GWEAPON(DC15L_HP) : 3AS_DC15L_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15L High Power";
		baseWeapon = QGWEAPON(DC15L_HP);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_HP_EFFECT;
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		magazines[] = {QEGVAR(Mag,DC15L_HP),QEGVAR(Mag,DC15L)};
		magazineWell[] = {QGMAG(DC15L_HP)};
		picture = QPATHTOF(data\ui\DC15L_Base_ca.paa);

		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15L);
			power = "HighPower";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

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
				QEGVAR(weapons_core,ACOGMG),
				QEGVAR(weapons_core,SOS)
			};
		};

		class PointerSlot: PointerSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};

		class UnderBarrelSlot: UnderBarrelSlot {
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			compatibleItems[] = {QEGVAR(weapons_core,Silencer)};
		};

		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15L);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15L_HP);
};

