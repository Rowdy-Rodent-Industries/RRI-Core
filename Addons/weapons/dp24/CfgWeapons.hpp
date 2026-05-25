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

	class 3AS_DP23_Base_F;
	class 3AS_DP23_F: 3AS_DP23_Base_F {
		class WeaponSlotsInfo;
	};
	class 3AS_DP23_GL: 3AS_DP23_Base_F {
		class WeaponSlotsInfo;
		class 3AS_FL_F;
	};

	class GWEAPON(dp24): 3AS_DP23_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] DP-24";
		baseweapon = QGWEAPON(dp24);

		magazines[] = {QGMAG(dp24)};
		magazineWell[] = {QGMAGWELL(dp24)};

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		MACRO_GUNSMOKE_HP_EFFECT;
		picture = QPATHTOF(data\ui\DP24.paa);

		modes[] = {"Single","Fullauto"};
		muzzles[] = {"this","Stun"};

		recoil = QEGVAR(weapons_core,Rifle_Recoil);

		class Single: Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DP23_Shot_SoundSet"
				};
			};

			reloadTime = 0.096;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};

		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.079999998;
			dispersion=0.00106;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DP23_Shot_SoundSet"
				};
			};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 97;
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
					MRD_LIST,
					QEGVAR(weapons_core,ACOGMG),
					QEGVAR(weapons_core,reflex)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	class GWEAPON(dp24_GL): 3AS_DP23_GL
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] DP-24 GL";
		baseweapon = QGWEAPON(dp24_GL);

		picture = QPATHTOF(data\ui\DP24.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		magazines[] = {QGMAG(dp24)};
		magazineWell[] = {QGMAGWELL(dp24)};

		modes[] = {"Single","Fullauto"};
		muzzles[] = {"This","3AS_FL_F"};
		MACRO_GUNSMOKE_HP_EFFECT;
		recoil = QEGVAR(weapons_core,Rifle_Recoil);

		class Single: Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DP23_Shot_SoundSet"
				};
			};

			reloadTime = 0.096;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
		};

		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.079999998;
			dispersion=0.00106;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DP23_Shot_SoundSet"
				};
			};
		};

		class 3AS_FL_F: 3AS_FL_F {
			displayName="$STR_A3_cfgweapons_3gl0";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[] = {};
			magazineWell[] = {QGMAGWELL(ugl)};
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.wss",
				1,
				1,
				10
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 97;
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
					MRD_LIST,
					QEGVAR(weapons_core,ACOGMG),
					QEGVAR(weapons_core,reflex)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(dp24);
	WEAPON_BCSEWPN_ZASLEH_MACRO(dp24_GL);
};
