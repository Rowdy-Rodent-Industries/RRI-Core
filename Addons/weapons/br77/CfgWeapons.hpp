/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class UGL_F;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;


class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class acc_pointer_ir;
	class muzzle_snds_M;
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
    class LRR_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };

	class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(br_77_base): LRR_base_F
	{
		scope = 1;
		author = AUTHOR;
		displayName = "[SOB] BR-77";
		descriptionShort = "BR-77 used by marksmen of the Special Operations Brigade";

		baseWeapon = QGWEAPON(br_77_base);

		model = QPATHTOF(mti_br77.p3d);

		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenselectionsmaterials[]={QPATHTOF(data\woodgun\gun.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\woodgun\gun_co.paa)};

		class EventHandlers
		{
			fired = QUOTE(_this spawn FUNC(fired));
		};

		magazines[] = {QGMAG(br77_HP),QGMAG(br77_HE)};
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		reloadAction = QGVAR(BR77_Reload);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\br77_reload.ogg),2,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\br77_reload.ogg),2,1,30};
        handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(anims\br77_hand.rtm)};

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

		recoil = QEGVAR(weapons_Core,Rifle_Recoil);
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		ace_overheating_mrbs = 100000;

		modes[] = {"Single"};
		muzzles[] = {"this","Stun"};
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
					QGVAR(br77_Shot_SoundSet),
					QGVAR(BR77_Tail_SoundSet)
				};
			};

				reloadTime = 0.65;
				dispersion = 0.000075;
				soundContinuous = 0;

				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 200;
				midRangeProbab = 0.7;
				maxRange = 400;
				maxRangeProbab = 0.3;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 500;
			};

			class single_medium_optics1: Single {
				showToPlayer = 0;
				requiredOpticType = 1;

				minRange = 2;
				minRangeProbab = 0.2;
				midRange = 450;
				midRangeProbab = 0.7;
				maxRange = 600;
				maxRangeProbab = 0.2;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 600;
			};

			class single_far_optics2: single_medium_optics1 {
				showToPlayer = 0;
				requiredOpticType = 2;

				minRange = 100;
				minRangeProbab = 0.2;
				midRange = 1200;
				midRangeProbab = 0.6;
				maxRange = 2100;
				maxRangeProbab = 0.3;
				aiRateOfFire = 7;
				aiRateOfFireDistance = 1000;
			};

		class GunParticles {
			class FirstEffect {
				effectName = "SniperCloud";
				directionName = "Konec hlavne";
				positionName = "Usti hlavne";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					QGVAR(br_77_scope)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {
					QGVAR(br_77_supressor)
				};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {
					QGVAR(br_77_bayonet)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"
				};
			};
		};
	};

	class GWEAPON(br_77_wood): GWEAPON(br_77_base)
	{
		scope = 2;

		displayName = "[SOB] BR-77 (Wooden)";

		baseWeapon = QGWEAPON(br_77_wood);
		hiddenselectionsmaterials[]={QPATHTOF(data\woodgun\gun.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\woodgun\gun_co.paa)};
		picture = QPATHTOF(data\icon\BR-77wood.paa);

		class XtdGearInfo
		{
			model = QGVAR(BR77);
			type = "Wood";
		};
	};

	class GWEAPON(br_77_metal): GWEAPON(br_77_base)
	{
		scope = 2;

		displayName = "[SOB] BR-77 (Metal)";

		baseWeapon = QGWEAPON(br_77_metal);
		hiddenselectionsmaterials[]={QPATHTOF(data\metalgun\gun.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\metalgun\MainWeapon_CO.paa)};
		picture = QPATHTOF(data\icon\BR-77.paa);

		class XtdGearInfo
		{
			model = QGVAR(BR77);
			type = "Metal";
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_MUZZLEFLASH_MACRO(br_77_wood);
	WEAPON_BCSEWPN_MUZZLEFLASH_MACRO(br_77_metal);

	class GVAR(br_77_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] BR-77 Scope";

		model = QPATHTOF(mti_br77_scope.p3d);
		picture = QPATHTOF(data\icon\BR-77SCOPE.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

        class ItemInfo: ItemInfo {
			modelOptics=QPATHTOF(mti_reticle_br77.p3d);
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

	class GVAR(br_77_bayonet): acc_pointer_ir {
		author = AUTHOR;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[SOB] BR-77 Bayonet";
		model = QPATHTOF(mti_br77_bayonet.p3d);
		descriptionShort = "Bayonet for the BR-77 Weapon Platform";
		IMS_Bayonet_Item = "true";
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		picture = QPATHTOF(data\icon\BR-77BAYONET.paa);
	};

	class GVAR(br_77_supressor): muzzle_snds_M {
		author = AUTHOR;
		scope = 2;
		scopeCurator = 2;
		displayName = "[SOB] BR-77 Supressor";
		model = QPATHTOF(mti_br77_silencer.p3d);
		descriptionShort = "Supressor for the BR-77 Weapon Platform";
		soundTypeIndex = 1;
		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		picture = QPATHTOF(data\icon\BR-77Suppressor.paa);
	};
};
