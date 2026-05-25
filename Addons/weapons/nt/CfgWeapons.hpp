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
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
    class GM6_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };

	class GWEAPON(NT_Base): GM6_base_F
	{
		scope = 1;
		author = AUTHOR;
		displayName = "[SOB] NT-242";
		descriptionShort = "NT-242 used by marksmen of the Special Operations Brigade";

		baseWeapon = QGWEAPON(NT_Base);

		model = QPATHTOF(nt.p3d);

		hiddenSelections[] = {"Camo"};
		hiddenselectionsmaterials[]={QPATHTOF(data\nt.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\NT_co.paa)};

		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		picture = QPATHTOF(data\Icons\NT.paa);

		magazines[] = {QGMAG(NT_AP),QGMAG(NT_HE),QGMAG(NT_EMP),QGMAG(NT_Precision)};
		magwell[] = {QGMAGWELL(NT)};

        handAnim[] = {"OFP2_ManSkeleton"};

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

		recoil=QEGVAR(weapons_core,nt_recoil);
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		ace_overheating_mrbs = 100000;

		// GVAR_CORE(weapons_core,forceWalk) = 1;

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
					QGVAR(NT_Shot_SoundSet),
					QGVAR(NT_Tail_SoundSet)
				};
			};

			reloadTime = 2;
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
				effectName=QGVAR(nt_smoke);
				directionName = "Konec hlavne";
				positionName = "Usti hlavne";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					QGVAR(NT_Scope)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"
				};
			};
		};
	};

	class GWEAPON(NT): GWEAPON(NT_Base)
	{
		scope = 2;

		baseWeapon = QGWEAPON(NT);

		model = QPATHTOF(nt.p3d);

		hiddenSelections[] = {"Camo"};
		hiddenselectionsmaterials[]={QPATHTOF(data\nt.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\NT_co.paa)};
	};

	class GVAR(NT_Scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] NT Scope";

		model = QPATHTOF(nt_scope.p3d);

        class ItemInfo: ItemInfo {
            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(24);
					opticsZoomMax = ZOOM_FACTOR(8);
					opticsZoomInit = ZOOM_FACTOR(8);
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

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(NT);
};
