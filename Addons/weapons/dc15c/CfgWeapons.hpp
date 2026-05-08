class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class Rifle_Base_F;
    class 3AS_DC15C_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class FullAuto;
		class Single;
		class GL_3GL_F;
	};

	class 3AS_DC15C_F : 3AS_DC15C_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {};
		class FullAuto: FullAuto {};
		class Single: Single {};
	};

	class 3AS_DC15C_GL: 3AS_DC15C_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {};
		class FullAuto: FullAuto {};
		class Single: Single {};
		class GL_3GL_F;
	};

    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(DC15C) : 3AS_DC15C_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15C";
		baseWeapon = QGWEAPON(DC15C);
		magazines[] = {QGMAG(DC15C)};
		magazineWell[] = {QGMAGWELL(DC15C)};
		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		picture = QPATHTOF(data\ui\DC15C_Base_ca.paa);
		MACRO_GUNSMOKE_EFFECT;

		class XtdGearInfo {
			model = QGVAR(DC15C);
			type = "Rifle";
			power = "LowPower";
		};

		muzzles[] = {"this", "Stun"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class FullAuto: FullAuto {
			dispersion = 0.00045;
			reloadTime=0.12;
		};

		class Single: Single {
			dispersion = 0.00025;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 75;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOG_2)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(DC15C_HP) : 3AS_DC15C_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15C High Power";
		baseWeapon = QGWEAPON(DC15C_HP);
		magazines[] = {QGMAG(DC15C_HP),QGMAG(DC15C)};
		magazineWell[] = {QGMAGWELL(DC15C)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		picture = QPATHTOF(data\ui\DC15C_Base_ca.paa);
		MACRO_GUNSMOKE_HP_EFFECT;

		class XtdGearInfo {
			model = QGVAR(DC15C);
			type = "Rifle";
			power = "HighPower";
		};

		muzzles[] = {"this", "Stun"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class FullAuto: FullAuto {
			dispersion = 0.00045;
			reloadTime=0.12;
		};

		class Single: Single {
			dispersion = 0.00025;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 75;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,ACOGMG)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(DC15C_GL): 3AS_DC15C_GL {
		author = AUTHOR;
		displayName = "[SOB] DC-15C GL";
		weaponInfoType = "RscWeaponZeroing";
		baseWeapon = QGWEAPON(DC15C_GL);
		magazines[] = {QGMAG(DC15C)};
		magazineWell[] = {QGMAGWELL(DC15C)};
		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		picture = QPATHTOF(data\ui\DC15C_GL_ca.paa);
		MACRO_GUNSMOKE_EFFECT;
		class XtdGearInfo {
			model = QGVAR(DC15C);
			type = "GL";
			power = "LowPower";
		};

		//modelOptics = "3AS\3AS_Weapons\Data\A3_2d_optic.p3d";
		muzzles[] = {"this", "Stun", "GL_3GL_F"};

		class GL_3GL_F: GL_3GL_F {
			displayName = "[SOB] DC-15C GL";
			magazines[] = {  QGMAG(UGL_Shotty) };
			magazineWell[] = {QGMAGWELL(UGL)};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class FullAuto: FullAuto {
			dispersion = 0.00065;
		};

		class Single: Single {
			dispersion = 0.00065;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 75;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOG_2)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(DC15C_HP_GL): 3AS_DC15C_GL {
		author = AUTHOR;
		displayName = "[SOB] DC-15C High Power GL";
		weaponInfoType = "RscWeaponZeroing";
		baseWeapon = QGWEAPON(DC15C_HP_GL);
		magazines[] = {QGMAG(DC15C_HP),QGMAG(DC15C)};
		magazineWell[] = {QGMAGWELL(DC15C)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		picture = QPATHTOF(data\ui\DC15C_GL_ca.paa);
		MACRO_GUNSMOKE_HP_EFFECT;
		class XtdGearInfo {
			model = QGVAR(DC15C);
			type = "GL";
			power = "HighPower";
		};

		//modelOptics = "3AS\3AS_Weapons\Data\A3_2d_optic.p3d";
		muzzles[] = {"this", "GL_3GL_F"};

		class GL_3GL_F: GL_3GL_F {
			displayName = "[SOB] DC-15C GL";
			magazines[] = { QGMAG(UGL_Shotty) };
			magazineWell[] = {QGMAGWELL(UGL)};
		};

		class FullAuto: FullAuto {
			dispersion = 0.00065;
		};

		class Single: Single {
			dispersion = 0.00065;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 75;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOGMG)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class EGVAR(weapons_core,Stealth_Muzzle);

	class GWEAPON(DC19C): GWEAPON(DC15C) {
		scope = 2;
		displayName = "[SOB] DC-19C";
		baseWeapon = QGWEAPON(DC19C);

		muzzles[] = {"this", "Stealth"};

		class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class FullAuto: FullAuto {
			dispersion = 0.00065;
		};

		class Single: Single {
			dispersion = 0.00065;
		};
		class XtdGearInfo {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 75;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,ACOGMG)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class MuzzleSlot: MuzzleSlot{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QEGVAR(weapons_core,Silencer)};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15C);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15C_HP);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15C_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15C_HP_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC19C);
};
