class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class 3AS_Cinnagaran_Carbine_F;
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(cinnagaran): 3AS_Cinnagaran_Carbine_F
	{
		author = AUTHOR;
		displayName = "[SOB] Cinnagaran Carbine";
		baseWeapon = QGWEAPON(cinnagaran);
		magazines[] = {QGMAG(cinnagaran)};
		magazinewell[] = {QGMAGWELL(cinnagaran)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","ARC"};
		scope = 2;
		scopeArsenal = 2;

		picture = QPATHTOF(data\ui\Cinnagaran_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\Cinnagaran_Base_ca.paa);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_EFFECT;
		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(cinnagaran);
};
