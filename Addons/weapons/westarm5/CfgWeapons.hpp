class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;

class CfgWeapons {
	class Rifle_Base_F;
	class 3AS_WestarM5_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class 3AS_WestarM5_GL_F;
	};

	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F {
		class WeaponSlotsInfo;
	};
	class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(westarm5) : 3AS_WestarM5_F {
		author = AUTHOR;
		displayName = "[SOB] Westar M5";
		baseWeapon = QGWEAPON(westarm5);
		magazines[] = {QGMAG(westarm5)};
		magazineWell[] = {QGMAGWELL(westarm5)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
		MACRO_GUNSMOKE_EFFECT;
		recoil = "3as_recoil_light";
		maxRecoilSway = 0.0125;
		inertia = 0.5;

		//ls_activeCamo_camoItem = QGWEAPON(westar_stealth); // todo: does not exist...

		picture = QPATHTOF(data\ui\Westar_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\Westar_Base_ca.paa);

		muzzles[] = {"this", "Stun"};

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
					QEGVAR(weapons_core,SOS),
					QEGVAR(weapons_core,KHS),
					QEGVAR(weapons_core,ERCO),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO),
					QEGVAR(weapons_core,LRPS)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F {
		class WeaponSlotsInfo;
		class 3AS_WestarM5_GL_F;
	};

	class GWEAPON(westarm5_gl): 3AS_WestarM5_GL {
		author = AUTHOR;
		displayName = "[SOB] Westar M5 GL";
		baseWeapon = QGWEAPON(westarm5_gl);
		magazines[] = {QGMAG(westarm5)};
		magazineWell[] = {QGMAGWELL(westarm5)};
		recoil = "3as_recoil_light";
		maxRecoilSway = 0.0125;
		inertia = 0.5;
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		picture = QPATHTOF(data\ui\Westar_Gl_ca.paa);
		UiPicture = QPATHTOF(data\ui\Westar_Gl_ca.paa);
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this", "3AS_WestarM5_GL_F"};

		class 3AS_WestarM5_GL_F: 3AS_WestarM5_GL_F {
			magazines[] = {};
			magazineWell[] = { QGMAGWELL(UGL)};
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
					QEGVAR(weapons_core,SOS),
					QEGVAR(weapons_core,KHS),
					QEGVAR(weapons_core,ERCO),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO),
					QEGVAR(weapons_core,LRPS)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(westarm5);
	WEAPON_BCSEWPN_ZASLEH_MACRO(westarm5_gl);
};
