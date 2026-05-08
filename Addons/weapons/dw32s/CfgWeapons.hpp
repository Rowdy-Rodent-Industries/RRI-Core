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
	class JLTS_DW32S: arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};

	class GWEAPON(DW32S): JLTS_DW32S {
		author = AUTHOR;
		displayName = "[SOB] DW-32S";
		baseWeapon = QGWEAPON(DW32S);
		magazines[] = {QGMAG(DW32S), QGMAG(DW32S_HP)};
		magazineWell[] = {QGMAGWELL(DW32S)};
		picture = QPATHTOF(data\ui\DW-32S.paa);
		GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
		MACRO_GUNSMOKE_EFFECT;
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "";

		muzzles[] = {"this", "Stun"};

		class Stun: EGVAR(weapons_core,Stun_Muzzle) {};
	};
	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DW32S);
};
