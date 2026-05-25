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

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryUnderItem_Base_F;
	class acc_flashlight;
	class muzzle_snds_M;
	class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
		class Single;
    };
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};

	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		class GL_3GL_F;
	};

	class GWEAPON(zh_short): arifle_MX_Base_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] ZH-73 (Assault)";
		baseWeapon = QGWEAPON(zh_short);

		magazines[] = {QGMAG(zh73)};
		magazineWell[] = {QGMAGWELL(zh73)};
		MACRO_GUNSMOKE_EFFECT;
		picture = QPATHTOF(data\ui\ZHSHORT.paa);
		UiPicture = QPATHTOF(data\ui\ZHSHORT.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};

		hiddenSelections[] = {"camo2","camo3"};
		model = QPATHTOF(rri_zh_short.p3d);

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\zh_small_hand.rtm)};

		muzzles[] = {"this", "Stun"};
		modes[] = {"Single","FullAuto"};
		reloadAction = QGVAR(zh_Reload);
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(zh_Shot_SoundSet),
					QGVAR(zh_Tail_SoundSet)
				};
			};
			reloadTime = 0.066;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(zh_Shot_SoundSet),
					QGVAR(zh_Tail_SoundSet)
				};
			};
			reloadTime = 0.09;
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST
				};
			};

			class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {
					QGVAR(zh_suppressor)
				};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {
					QGVAR(zh_torch)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					QGVAR(zh_foregrip)
				};
			};
		};
	};

    class GWEAPON(zh_short_foregrip): GWEAPON(zh_short) {
        scope = 1;
        author = AUTHOR;
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
    };

	class GWEAPON(zh_long): arifle_MX_Base_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] ZH-73 (Long Rifle)";
		baseWeapon = QGWEAPON(zh_long);

		magazines[] = {QGMAG(zh73_lr)};
		magazineWell[] = {QGMAGWELL(zh73)};
		reloadAction = QGVAR(zh_Reload);
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};
		MACRO_GUNSMOKE_EFFECT;
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};

		picture = QPATHTOF(data\ui\ZHLONG.paa);
		UiPicture = QPATHTOF(data\ui\ZHLONG.paa);

		hiddenSelections[] = {"camo2"};
		model = QPATHTOF(rri_zh_long.p3d);

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\zh_small_hand.rtm)};

		muzzles[] = {"this", "Stun"};
		modes[] = {"Single"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(zh_Shot_SoundSet),
					QGVAR(zh_Tail_SoundSet)
				};
			};
			reloadTime = 0.066;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST,
					QGVAR(zh_Scope),
					QEGVAR(weapons_core,SOS),
					QEGVAR(weapons_core,KHS),
					QEGVAR(weapons_core,ERCO),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO),
					QEGVAR(weapons_core,LRPS)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {
					QGVAR(zh_suppressor)
				};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {
					QGVAR(zh_torch)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					QGVAR(zh_foregrip)
				};
			};
		};
	};

    class GWEAPON(zh_long_foregrip): GWEAPON(zh_long) {
        scope = 1;
        author = AUTHOR;
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
    };

	class GWEAPON(zh_long_GL): arifle_MX_GL_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] ZH-73 GL (Long Rifle)";
		baseWeapon = QGWEAPON(zh_long_GL);
		magazineWell[] = {QGMAGWELL(zh73)};

		magazines[] = {QGMAG(zh73_lr)};
		MACRO_GUNSMOKE_EFFECT;
		picture = QPATHTOF(data\ui\ZHLONGGL.paa);
		UiPicture = QPATHTOF(data\ui\ZHLONGGL.paa);
		reloadAction = QGVAR(zh_Reload);
		recoil=QEGVAR(weapons_core,Rifle_Recoil);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\zh_reload.ogg),2,1,30};

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};

		model = QPATHTOF(rri_zh_long.p3d);

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\zh_small_hand.rtm)};

		muzzles[] = {"this","GL_3GL_F"};
		modes[] = {"Single"};

		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(zh_Shot_SoundSet),
					QGVAR(zh_Tail_SoundSet)
				};
			};
			reloadTime = 0.066;
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					QGVAR(zh_Shot_SoundSet),
					QGVAR(zh_Tail_SoundSet)
				};
			};
			reloadTime = 0.09;
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};

		class GL_3GL_F:GL_3GL_F
		{
			displayName = "ZH GL";
			magazines[] = {};
			magazineWell[] = { QGMAGWELL(UGL)};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST,
					QGVAR(zh_Scope),
					QEGVAR(weapons_core,SOS),
					QEGVAR(weapons_core,ERCO),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO),
					QEGVAR(weapons_core,LRPS)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {
					QGVAR(zh_suppressor)
				};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {
					QGVAR(zh_torch)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					QGVAR(zh_foregrip)
				};
			};
		};
	};

    class GWEAPON(zh_long_GL_foregrip): GWEAPON(zh_long_GL) {
        scope = 1;
        author = AUTHOR;
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
    };

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(zh_short);
	WEAPON_BCSEWPN_ZASLEH_MACRO(zh_long);
	WEAPON_BCSEWPN_ZASLEH_MACRO(zh_long_GL);

	class GVAR(zh_torch): acc_flashlight {
		author = AUTHOR;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[SOB] ZH-73 Torch";
		model = QPATHTOF(rri_zh_torch.p3d);
		picture = QPATHTOF(data\ui\Flashlight.paa);
		descriptionShort = "Torch for the ZH-73 Weapon Platform";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};
	};

	class GVAR(zh_foregrip): ItemCore
	{
		scope = 2;
		displayName	= "[SOB] ZH-73 Foregrip";
		model = QPATHTOF(rri_zh_foregrip.p3d);
		picture = QPATHTOF(data\ui\Foregrip.paa);
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};
        GVAR_CORE(weapons_core,isForegrip) = 1;
		class ItemInfo: InventoryUnderItem_Base_F
        {
            deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down.wss", 1, 20};
			soundBipodUp[] 	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up.wss", 1, 20};
        };
		inertia = 0.2;
	};

	class GVAR(zh_suppressor): muzzle_snds_M {
		author = AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[SOB] ZH Suppressor";
		model = QPATHTOF(rri_zh_silencer.p3d);
		picture = QPATHTOF(data\ui\Suppressor.paa);
		descriptionShort = "Suppressor for the ZH-73 Weapon Platform";
		soundTypeIndex = 1;
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
	};

	class GVAR(zh_Scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] ZH-73 Scope";
		picture = QPATHTOF(data\ui\Scope.paa);

		model = QPATHTOF(rri_zh_scope.p3d);

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper","Commando"};

        class ItemInfo: ItemInfo {
			modelOptics=QPATHTOF(rri_reticle_zh.p3d);
            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(10);
					opticsZoomMax = ZOOM_FACTOR(1);
					opticsZoomInit = ZOOM_FACTOR(1);
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=100;
                    distanceZoomMax=100;
                    memoryPointCamera="reticle";
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
					visionMode[]= {
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4};
                };

	            class Iron: NCTALKEP {
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]= {
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					discreteDistance[] = {200};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
				};
            };
        };
	};
};
