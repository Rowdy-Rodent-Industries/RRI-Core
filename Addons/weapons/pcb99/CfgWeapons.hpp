
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

	class Rifle_Long_Base_F;
	class ItemCore;
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };
	class GWEAPON(pcb_base): LMG_Mk200_F {
		scope = 2;
		displayName = "[SOB] PCB-99 Railgun";
		descriptionShort = "PCB-99 used by marksmen of the Special Operations Brigade";
        GVAR_CORE(weapons_core,hasSmartScope) = 1;

		baseWeapon = QGWEAPON(pcb_base);

		magazines[] = {QGMAG(pcb)};
		magazineWell[] = {QGMAGWELL(pcb)};

		picture = QPATHTOF(data\ui\Railgun_ca.paa);
		UiPicture = QPATHTOF(data\ui\Railgun_ca.paa);

		model = QPATHTOF(rri_pcb.p3d);
		hiddenSelections[] = {""};

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		recoil=QEGVAR(weapons_core,nt_recoil);
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		ace_overheating_mrbs = 100000;

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anims\pcb_hand.rtm)};
		reloadAction = "GestureReload_rri_pcb";
		reloadMagazineSound[] = {QPATHTOEF(weapons,pcb99\data\sounds\pcb_reload.ogg),1,1};
		modes[] = {"Single"};
		class GunParticles {
			class FirstEffect {
				effectName=QGVAR(pcb_smoke);
				directionName = "Konec hlavne";
				positionName = "Usti hlavne";
			};
		};
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
					QGVAR(pcb_Shot_SoundSet),
					QGVAR(pcb_Tail_SoundSet)
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

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;

			class CowsSlot: CowsSlot {
				compatibleItems[] = {
					QGVAR(pcb_scope)
				};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"
				};
			};
		};
	};

	class GVAR(pcb_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] PCB Scope";
        GVAR_CORE(weapons_core,hasSmartScope) = 1;

		picture = QPATHTOF(data\ui\Railgunscope_ca.paa);
		UiPicture = QPATHTOF(data\ui\Railgunscope_ca.paa);

		model = QPATHTOF(rri_pcb_scope.p3d);

		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        class ItemInfo: ItemInfo {
			modelOptics=QPATHTOF(rri_reticle_pcb.p3d);
            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(14);
					opticsZoomMax = ZOOM_FACTOR(4);
					opticsZoomInit = ZOOM_FACTOR(4);
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
	WEAPON_BCSEWPN_ZASLEH_MACRO(pcb_base);
};
