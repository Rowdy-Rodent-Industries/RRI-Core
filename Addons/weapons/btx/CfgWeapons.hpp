class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class arifle_MX_Base_F;
	class 3AS_Flamer_Base: arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};

    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(btx): 3AS_Flamer_Base {
		author=AUTHOR;
		displayName = "[SOB] BTX-42 Flamethrower";
		baseWeapon = QGWEAPON(btx);
		magazines[] = {QGMAG(BTX)};
		magazineWell[] = {QGMAGWELL(btx)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","FieldSupport"};

		picture = QPATHTOF(data\ui\BTX_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\BTX_Base_ca.paa);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
	};
	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(btx);
};
