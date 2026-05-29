class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


    class EGVAR(weapons_core,Stun_Muzzle) ;

	class Rifle_Base_F;
    class 3AS_DC17M_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
        class FullAuto;
        class Single;
	};
	class GWEAPON(dc17m): 3AS_DC17M_Base_F {
		scope = 2;
		displayName = "[SOB] DC-17M";
		baseWeapon = QGWEAPON(dc17m);

		magazines[] = {QGMAG(dc17m), QGMAG(dc17m_at), QGMAG(dc17m_ap)};
		magazineWell[] = {QGMAGWELL(dc17m)};

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		picture = QPATHTOF(data\ui\DC17M_Base_ca.paa);
		model="3AS\3AS_Weapons\DC17M\3AS_DC17M_f.p3d";

		weaponInfoType="RscOptics_sos";

		maxZeroing = 400;

		modelOptics[]= {
			QPATHTOF(data\sights\rri_reticle_dc17m_z0.p3d),
			QPATHTOF(data\sights\rri_reticle_dc17m_z1.p3d),
			QPATHTOF(data\sights\rri_reticle_dc17m_z2.p3d)
		};

		muzzles[] = {"this", "Stun"};
		MACRO_GUNSMOKE_EFFECT;
		modes[] = {"FullAuto", "Single"};

		class EventHandlers
		{
			fired = QUOTE(_this spawn FUNC(fire));
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class FullAuto: FullAuto {
			reloadTime = RPM(900);
			dispersion = 0.00072;
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC17M_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC17M_Shot_SoundSet"
				};
			};
		};

		class Single: Single {
			dispersion = 0.00016;
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC17M_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC17M_Shot_SoundSet"
				};
			};
		};

		class OpticsModes {
			class Ironsights {
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMax = 100;
				distanceZoomMin = 100;
			};

			class Scope: Ironsights {
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin=ZOOM_FACTOR(12);
				opticsZoomMax=ZOOM_FACTOR(0.5);
				opticsZoomInit=ZOOM_FACTOR(2);
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				discretefov[]={ZOOM_FACTOR(2),ZOOM_FACTOR(12),ZOOM_FACTOR(0.5)};
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				modelOptics[]= {
					QPATHTOF(data\sights\rri_reticle_dc17m_z0.p3d),
					QPATHTOF(data\sights\rri_reticle_dc17m_z1.p3d),
					QPATHTOF(data\sights\rri_reticle_dc17m_z2.p3d)
				};
				opticsFlare = "true";
				cameraDir = "";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 60;

			class CowsSlot : CowsSlot {
				compatibleItems[] = {};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(dc17m);
};
