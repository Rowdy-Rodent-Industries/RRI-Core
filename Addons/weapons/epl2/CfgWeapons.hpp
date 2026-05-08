class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;

class CfgWeapons {
	class arifle_MX_Base_F;
	class JLTS_EPL2: arifle_MX_Base_F {
		class WeaponSlotsInfo;
	};
	class GWEAPON(epl2): JLTS_EPL2 {
		scope = 2;
		author=AUTHOR;
		displayName = "[SOB] EPL-2 EMP Launcher";
		baseWeapon = QGWEAPON(epl2);
		magazines[] = {QGMAG(epl2)};
		magazineWell[] = {QGMAGWELL(epl2)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper"};

		picture = QPATHTOF(data\ui\EPL.paa);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
	};
	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(epl2);
};
