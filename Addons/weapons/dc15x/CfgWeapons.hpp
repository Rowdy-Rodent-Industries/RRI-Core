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

    class arifle_MX_Base_F;
    class JLTS_DC15X: arifle_MX_Base_F {
        class WeaponSlotsInfo;
        class Single;
    };

class GWEAPON(DC15X): JLTS_DC15X {
	author=AUTHOR;
    displayName = "[SOB] DC-15X";
	baseWeapon = QGWEAPON(DC15X);

	magazines[] = {QGMAG(DC15X),QGMAG(DC15X_Deraformine),QGMAG(DC15X_Latheniol),QGMAG(DC15X_Tranq)};
	magazineWell[] = {QGMAGWELL(DC15X)};
	picture = QPATHTOF(data\ui\DC15X_Base_ca.paa);

	GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

	// initSpeed = X_SLAP_COEFFICIENT;

    JLTS_friedItem = "";
	JLTS_hasElectronics = 0;
	JLTS_hasEMPProtection = 1;

	MACRO_GUNSMOKE_EFFECT;

	class Single: Single {
		dispersion = 0.00009;
	};

    class WeaponSlotsInfo: WeaponSlotsInfo {
		mass = 92;
		class CowsSlot : CowsSlot {
			displayName = "Optics Slot";
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			iconPinpoint = "Bottom";
			iconPosition[] = {0.5,0.35};
			iconScale = 0.2;
			linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
			scope = 0;
			compatibleItems[] = {
                LRPS_LIST,
				QEGVAR(weapons_core,LRPSX),
				QEGVAR(weapons_core,LRPS),
				"3AS_optic_VK38X_F",
				QEGVAR(weapons_core,KHS),
				"JLTS_DC15X_scope",
				QEGVAR(weapons_core,EE2_Scope)
			};
		};

		class PointerSlot: PointerSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			compatibleItems[] = { RAILATTACHMENT_LIST };
		};

		class UnderBarrelSlot: UnderBarrelSlot {
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			compatibleItems[] = {"3AS_Bipod_VK38X_f","3AS_bipod_DC15X_F","3AS_Imp_Bipod_DLT19"};
		};
	};
};

	class EGVAR(weapons_core,Stealth_Muzzle);

	class GWEAPON(DC19X): GWEAPON(DC15X) {
		scope = 2;
		displayName = "[SOB] DC-19X";
		baseWeapon = QGWEAPON(DC19X);
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		muzzles[] = {"this","Stealth"};

		class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class Single: Single {
			dispersion = 0.00009;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo{
			class MuzzleSlot: MuzzleSlot{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QEGVAR(weapons_core,Silencer)};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15X);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC19X);

};
