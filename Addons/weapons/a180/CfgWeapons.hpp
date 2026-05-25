class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class 3AS_A180_F;

	class GWEAPON(a180): 3AS_A180_F
	{
		author = AUTHOR;
		displayname = "[SOB] A-180";
		baseWeapon = "MTI_A180";
		scope = 2;
		magazines[] = {QGMAG(a180)};
		magazineWell[] = {QGMAGWELL(a180)};
		GVAR_CORE(arsenal,whitelists)[] = {"FieldSupport"};

		picture = QPATHTOF(data\ui\A180.paa);
		MACRO_GUNSMOKE_EFFECT;
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
	};
};
