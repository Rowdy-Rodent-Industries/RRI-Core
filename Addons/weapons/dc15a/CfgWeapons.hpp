class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class 3AS_DC15A_Base_F;
	class 3AS_DC15A_F : 3AS_DC15A_Base_F {
		class WeaponSlotsInfo;
		class Single;
	};

	class 3AS_DC15A_GL : 3AS_DC15A_Base_F {
		class WeaponSlotsInfo;
		class GL_3GL_F;
	};
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(DC15A) : 3AS_DC15A_F {
		author=AUTHOR;
		displayName = "[SOB] DC-15A";
		baseWeapon = QGWEAPON(DC15A);
		magazines[] = {QGMAG(DC15A)};
		magazineWell[] = {QGMAGWELL(DC15A)};
		picture = QPATHTOF(data\ui\DC15A_Base_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","Arc","Fieldsupport"};

		// model = QPATHTOF(rri_dc15a.p3d);

		// handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\dc15a_hand.rtm)};
		// reloadAction = "GestureReload_rri_dc15a";

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		MACRO_GUNSMOKE_EFFECT;

		modes[] = {"Single", "Burst"};
		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "Rifle";
			power = "LowPower";
			stock = "Metal";
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Burst: Mode_Burst {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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

		class Single: Single {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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
					MRD_LIST
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

	class GWEAPON(DC15A_HP): GWEAPON(DC15A) {
		displayName = "[SOB] DC-15A (High Power)";
		baseWeapon = QGWEAPON(DC15A_HP);
		magazines[] = {QGMAG(DC15A),QGMAG(DC15A_HP)};
		picture = QPATHTOF(data\ui\DC15A_Base_ca.paa);

		modes[] = {"Single", "Burst","FullAuto"};
		muzzles[] = {"this", "Stun"};

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "Rifle";
			power = "HighPower";
			stock = "Metal";
		};

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		MACRO_GUNSMOKE_HP_EFFECT;
		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Burst: Mode_Burst {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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

		class Single: Single {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime=0.10;
			dispersion=0.0005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
		};
	};

	class GWEAPON(DC15A_Wood): GWEAPON(DC15A) {
		displayName = "[SOB] DC-15A (Wood Stock)";
		baseWeapon = QGWEAPON(DC15A_Wood);
		picture = QPATHTOF(data\ui\DC15A_Wood_ca.paa);

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "Rifle";
			power = "LowPower";
			stock = "Wood";
		};

		model = "\MRC\JLTS\weapons\DC15A\DC15A.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	};

	class GWEAPON(DC15A_HP_Wood): GWEAPON(DC15A_HP) {
		displayName = "[SOB] DC-15A (Wood Stock High Power)";
		baseWeapon = QGWEAPON(DC15A_HP_Wood);
		picture = QPATHTOF(data\ui\DC15A_Wood_ca.paa);
		MACRO_GUNSMOKE_HP_EFFECT;
		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "Rifle";
			power = "HighPower";
			stock = "Wood";
		};

		model = "\MRC\JLTS\weapons\DC15A\DC15A.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	};

	class GWEAPON(DC15A_GL): 3AS_DC15A_GL {
		author=AUTHOR;
		displayName = "[SOB] DC-15A GL";
		baseWeapon = QGWEAPON(DC15A_GL);
		magazines[] = {QGMAG(DC15A)};
		magazineWell[] = {QGMAGWELL(DC15A)};

		picture = QPATHTOF(data\ui\DC15A_GL_Base_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","Arc","Fieldsupport"};

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;


		modes[] = {"Single", "Burst"};
		muzzles[] = {"this", "GL_3GL_F"};

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "GL";
			power = "LowPower";
			stock = "Metal";
		};

		class GL_3GL_F : GL_3GL_F {
			magazines[] = { };
			magazineWell[] = {QGMAGWELL(UGL)};
		};

		class Burst: Mode_Burst {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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
					MRD_LIST
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

	class GWEAPON(DC15A_HP_GL): GWEAPON(DC15A_GL) {
		displayName = "[SOB] DC-15A GL (High Power)";
		baseWeapon = QGWEAPON(DC15A_HP_GL);

		magazines[] = {QGMAG(DC15A),QGMAG(DC15A_HP)};
		MACRO_GUNSMOKE_HP_EFFECT;
		modes[] = {"Single", "Burst","FullAuto"};
		muzzles[] = {"this", "GL_3GL_F"};

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "GL";
			power = "HighPower";
			stock = "Metal";
		};

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		picture = QPATHTOF(data\ui\DC15A_GL_Base_ca.paa);

		class FullAuto: Mode_FullAuto
		{
			sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
				};
			reloadTime=0.10;
			dispersion=0.0005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
		};

		class GL_3GL_F : GL_3GL_F {
			magazines[] = { };
			magazineWell[] = {QGMAGWELL(UGL)};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Burst: Mode_Burst {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};

			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

			class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF_JLTSW(DC15A\sounds\dc15a_fire),1,1,1800};
				soundBegin[] = {"begin1",1};
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
	};

	class GWEAPON(DC15A_Wood_GL): GWEAPON(DC15A_GL) {
		displayname = "[SOB] DC-15A GL (WoodStock)";
		baseWeapon = QGWEAPON(DC15A_Wood_GL);
		model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
		hiddenSelections[] = {"camo1","camo2","illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa","\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"};
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};

		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "GL";
			power = "LowPower";
			stock = "Wood";
		};
	};

	class GWEAPON(DC15A_HP_Wood_GL): GWEAPON(DC15A_HP_GL) {
		displayName = "[SOB] DC-15A GL (WoodStock High Power)";
		baseWeapon = QGWEAPON(DC15A_HP_Wood_GL);
		model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
		hiddenSelections[] = {"camo1","camo2","illum"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa","\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"};
		hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		MACRO_GUNSMOKE_HP_EFFECT;
		class XtdGearInfo {
			model = QGVAR(DC15A);
			type = "GL";
			power = "HighPower";
			stock = "Wood";
		};
	};

	class EGVAR(weapons_core,Stealth_Muzzle);

	class GWEAPON(DC19A): GWEAPON(DC15A) {
		scope = 2;
		displayName = "[SOB] DC-19A";
		baseWeapon = QGWEAPON(DC19A);

		muzzles[] = {"this", "Stealth"};

		GVAR_CORE(arsenal,whitelists)[] = {"Arc"};

		class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class Burst: Burst {
			dispersion = 0.00055;
		};

		class Single: Single {
			dispersion = 0.00055;
		};
		class XtdGearInfo {};
		class WeaponSlotsInfo: WeaponSlotsInfo{
			class MuzzleSlot: MuzzleSlot{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {QEGVAR(weapons_core,Silencer)};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_HP);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_Wood);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_HP_Wood);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_HP_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_Wood_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC15A_HP_Wood_GL);
	WEAPON_BCSEWPN_ZASLEH_MACRO(DC19A);
};
