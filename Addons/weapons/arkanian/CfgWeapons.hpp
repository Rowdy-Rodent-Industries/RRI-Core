class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class 3AS_Arkanian_Base_F;
	class 3AS_Arkanian_F: 3AS_Arkanian_Base_F {
		class WeaponSlotsInfo;
	};
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(arkanian): 3AS_Arkanian_F
	{
		author = AUTHOR;
		displayName = "[SOB] Arkanian Rifle";
		baseWeapon = QGWEAPON(arkanian);
		magazines[] = {QGMAG(arkanian)};
		magazineWell[] = {QGMAGWELL(arkanian)};
		GVAR_CORE(arsenal,whitelists)[] = {"FieldSupport"};

		picture = QPATHTOF(data\ui\Arkanian_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\Arkanian_Base_ca.paa);

		recoil = QEGVAR(weapons_core,Rifle_Recoil);
		MACRO_GUNSMOKE_EFFECT;
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		muzzles[] = {"this","Stun"};
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_Optic_Arkanian_1_F",
					"3AS_Optic_Arkanian_2_F",
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST,
					MRD_LIST
				};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(arkanian);
};
