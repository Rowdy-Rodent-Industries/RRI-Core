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

	class ls_weapon_ls150_base;
	class ls_weapon_ls150: ls_weapon_ls150_base {
		class FullAuto;
		class WeaponSlotsInfo;
	};

	class GWEAPON(ls150): ls_weapon_ls150 {
		author=AUTHOR;
		displayName = "[SOB] LS-150 Heavy Repeater";
		baseWeapon = QGWEAPON(ls150);
		magazines[] = {QGMAG(ls150)};
		magazineWell[] = {QGMAGWELL(ls150)};

		picture = QPATHTOF(data\ui\LS150.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		MACRO_GUNSMOKE_HP_EFFECT;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOEF(weapons,ls150\data\ui\textures\ls150_camo1_co.paa)};

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		modes[] = {"FullAuto"};
		class FullAuto: FullAuto {
			reloadTime = 0.05;
			dispersion = 0.005;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 264;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(ls150);
};
