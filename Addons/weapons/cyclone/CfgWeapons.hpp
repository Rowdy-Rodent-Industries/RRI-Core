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
	class InventoryUnderItem_Base_F;
	class Rifle_Long_Base_F;
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
    class LMG_Mk200_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };

	class GWEAPON(cyclone_base): LMG_Mk200_F {
		scope = 1;
		author = AUTHOR;
		displayName = "[SOB] Cyclone Repeater";
		descriptionShort = "Cyclone Repeater weapon platform used by the Special Operations Brigade.";

		baseWeapon = QGWEAPON(cyclone);
		recoil = QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		dexterity = 1.6;

		picture = QPATHTOF(data\Icons\MG.paa);
		MACRO_GUNSMOKE_EFFECT;
		autoFire = 1;
		modes[] = {"FullAuto","close","short","medium","far"};

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(anim\cyclone_hand.rtm)};

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

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
					QGVAR(cyclone_Shot_SoundSet),
					QGVAR(cyclone_Tail_SoundSet)
				};
			};
			soundContinuous = 0;
			reloadTime = 0.45;
			dispersion = 0.0009;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.8;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.8;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.8;
			maxRange = 2000;
			maxRangeProbab = 0.7;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1800;
			minRange = 1800;
			minRangeProbab = 0.74;
			midRange = 2400;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.05;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					QGVAR(cyclone_scope)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					QGVAR(cyclone_bypod)
				};
			};
		};
	};

	class GWEAPON(cyclone): GWEAPON(cyclone_base) {
		scope = 2;

		model = QPATHTOF(mti_cyclone.p3d);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		muzzles[] = {"Standard","Heavy"};

		class Standard: GWEAPON(cyclone_base) {
			displayName = "[SOB] Cyclone";
			magazines[] = {QGMAG(cyclone_mag),QGMAG(cyclone_thermal)};
			magazineWell[] = {QGMAGWELL(cyclone)};

			modes[] = {"FullAuto","close","short","medium","far"};

			class FullAuto: FullAuto {
				reloadTime = 0.07;
				dispersion = 0.00102;
			};
			class close: FullAuto
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};

		class Heavy: GWEAPON(cyclone_base) {
			displayName = "[SOB] Cyclone (Heavy)";
			magazines[] = {QGMAG(cyclone_heavy)};
			magazineWell[] = {};

			modes[] = {"FullAuto","close","short","medium","far"};

			class FullAuto: FullAuto {
				reloadTime = 0.35;
				dispersion = 0.00102;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						QGVAR(cyclone_heavy_Shot_SoundSet),
						QGVAR(cyclone_heavy_Tail_SoundSet)
					};
				};
			};
			class close: FullAuto
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
	};

	class GVAR(cyclone_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Cyclone Scope";

		model = QPATHTOF(mti_cyclone_scope.p3d);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

        class ItemInfo: ItemInfo {
			modelOptics=QPATHTOF(mti_reticle_cyclone.p3d);
            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(4);
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

	class GVAR(cyclone_bypod): ItemCore
	{
		scope = 2;																	
		displayName	= "[SOB] Cyclone Bipod";													
		picture	= "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";			
		model = QPATHTOF(mti_cyclone_bipod.p3d);		
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};				
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

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(cyclone);
};
