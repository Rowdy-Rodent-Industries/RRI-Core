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
	class JLTS_DC15S : arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};

	class 3AS_DC15S_Base_F;
	class 3AS_DC15S_F: 3AS_DC15S_Base_F {
		class WeaponSlotsInfo;
	};

	class 3AS_DC15S_GL: 3AS_DC15S_Base_F {
		class WeaponSlotsInfo;
		class GL_1GL_F;
	};

	class GWEAPON(DC15S): 3AS_DC15S_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15S";
		baseWeapon = QGWEAPON(DC15S);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(DC15S_Shield);
		MACRO_GUNSMOKE_EFFECT;
		magazines[] = {QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};
		picture = QPATHTOF(data\ui\DC15S_Base_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};

		muzzles[] = {"this", "Stun"};
		recoil = QGVAR(DC15S_recoil);
		class XtdGearInfo {
			model = QGVAR(DC15S);
			type = "Rifle";
			power = "LowPower";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(DC15S_HP): 3AS_DC15S_F {
		author = AUTHOR;
		displayName = "[SOB] DC-15S High Power";
		baseWeapon = QGWEAPON(DC15S_HP);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(DC15S_HP_Shield);

		magazines[] = {QGMAG(DC15S_HP),QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};
		picture = QPATHTOF(data\ui\DC15S_Base_ca.paa);
		MACRO_GUNSMOKE_HP_EFFECT;
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		recoil = QGVAR(DC15S_recoil);
		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15S);
			type = "Rifle";
			power = "HighPower";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class GWEAPON(DC15S_GL): 3AS_DC15S_GL {
		author = AUTHOR;
		displayName = "[SOB] DC-15S GL";
		baseWeapon = QGWEAPON(DC15S_GL);
		recoil = QGVAR(DC15S_recoil);
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(DC15S_Shield);

		magazines[] = {QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};
		picture = QPATHTOF(data\ui\DC15S_Gl_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","FieldSupport"};

		muzzles[] = {"this","GL_1GL_F"};

		class XtdGearInfo {
			model = QGVAR(DC15S);
			type = "GL";
			power = "LowPower";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};

		class GL_1GL_F: GL_1GL_F {
			magazines[] = {  };
			magazineWell[] = {QGMAGWELL(UGL)};
		};
	};

	class GWEAPON(DC15S_HP_GL): 3AS_DC15S_GL {
		author = AUTHOR;
		displayName = "[SOB] DC-15S Highpower GL";
		baseWeapon = QGWEAPON(DC15S_HP_GL);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(DC15S_HP_Shield);
		recoil = QGVAR(DC15S_recoil);
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		MACRO_GUNSMOKE_HP_EFFECT;
		magazines[] = {QGMAG(DC15S_HP),QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};
		picture = QPATHTOF(data\ui\DC15S_Gl_ca.paa);

		muzzles[] = {"this","GL_1GL_F"};

		class XtdGearInfo {
			model = QGVAR(DC15S);
			type = "GL";
			power = "HighPower";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};

		class GL_1GL_F: GL_1GL_F {
			magazines[] = {  };
			magazineWell[] = {QGMAGWELL(UGL)};
		};
	};

	class GWEAPON(DC15S_Shield): JLTS_DC15S {
		author = AUTHOR;
		displayName = "[SOB] DC-15S";
		scope = 1;
		baseWeapon = QGWEAPON(DC15S_Shield);
		JLTS_isShielded = 1;
		JLTS_baseWeapon = QGWEAPON(DC15S);

		magazines[] = {QGMAG(DC15S_HP),QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};

		model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};

		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"};
		reloadAction = "GestureReload";
		inertia = 0.8;
		recoil = QGVAR(DC15S_recoil);

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;

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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};
	};

	class GWEAPON(DC15S_HP_Shield): JLTS_DC15S {
		author = AUTHOR;
		displayName = "[SOB] DC-15S";
		scope = 1;
		baseWeapon = QGWEAPON(DC15S_HP_Shield);
		JLTS_isShielded = 1;
		JLTS_baseWeapon = QGWEAPON(DC15S_HP);
		MACRO_GUNSMOKE_HP_EFFECT;
		magazines[] = {QGMAG(DC15S_HP),QGMAG(DC15S)};
		magazineWell[] = {QGMAGWELL(DC15S)};

		model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};

		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"};
		reloadAction = "GestureReload";
		inertia = 0.8;
		recoil = QGVAR(DC15S_recoil);

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;

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
					QEGVAR(weapons_core,reflex)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};
	};

	class EGVAR(weapons_core,Stealth_Muzzle);

	class GWEAPON(DC19S): GWEAPON(DC15S) {
		scope = 2;
		displayName = "[SOB] DC-19S";
		baseWeapon = QGWEAPON(DC19S);
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		muzzles[] = {"this", "Stealth"};
		initSpeed = -1.15;

		class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class XtdGearInfo {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 66;
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
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO)
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
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15S);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15S_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15S_HP);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15S_HP_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC19S);
};
