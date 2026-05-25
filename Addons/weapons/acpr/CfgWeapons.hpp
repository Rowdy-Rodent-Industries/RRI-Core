class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class ls_rifle_base;
	class ls_weapon_acpr_base: ls_rifle_base {
		class WeaponSlotsInfo;
	};
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(acpr) : ls_weapon_acpr_base {
		author=AUTHOR;
		scope = 2;
		displayName = "[SOB] ACP-Repeater";
		baseWeapon = QGWEAPON(acpr);
		magazines[] = {QGMAG(ACPR)};
		magazineWell[] = {QGMAGWELL(acpr)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","Commando"};

		picture = QPATHTOF(data\ui\ACPR_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\ACPR_Base_ca.paa);

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOEF(weapons,acpr\data\textures\acpr_camo1_co.paa)};

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_HP_EFFECT;
		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(acpr);
};
