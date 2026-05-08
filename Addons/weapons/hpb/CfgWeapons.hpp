class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class ItemCore;
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
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F {
		class Single;
		class WeaponSlotsInfo;
	};
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(hpb_base): arifle_MX_Base_F
	{
		author = AUTHOR;
		scope = 1;
		displayName = "[SOB] HPB-14";
		baseWeapon = QGWEAPON(hpb);
		magazines[]  = {QGMAG(hpb)};
		magazineWell[] = {QGMAGWELL(hpb)};
		GVAR_CORE(arsenal,whitelists)[] = {"Jumptrooper","ARC"};

		picture = QPATHTOF(data\ui\hpb_ca.paa);
		UiPicture = QPATHTOF(data\ui\hpb_ca.paa);

		hiddenSelectionsTextures[] = {QPATHTOF(data\Gun_CO.paa)};
		model = QPATHTOF(mti_hpb.p3d);

		modes[] = {"Single","FullAuto"};

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\hpb_anim.rtm)};

		recoil = QEGVAR(weapons_core,Rifle_Recoil);
		reloadAction = QGVAR(hpb_Reload);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\hpb_reload.ogg),2.3,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\hpb_reload.ogg),2.3,1,30};
		maxRecoilSway = 0.0125;
		MACRO_GUNSMOKE_HP_EFFECT;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QGVAR(hpb_Shot_SoundSet),
					QGVAR(hpb_Tail_SoundSet)
				};
			};
			reloadTime = 0.55;
			dispersion=0.00001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QGVAR(hpb_Shot_SoundSet),
					QGVAR(hpb_Tail_SoundSet)
				};
			};
			reloadTime = 0.10;
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


		class WeaponSlotsInfo: WeaponSlotsInfo {
		    mass = 275;

            class CowsSlot: CowsSlot {
		    	compatibleItems[] = {
					MRCO_LIST,
					RCO_LIST,
					HOLO_LIST,
					QGVAR(hpb_scope)
		    	};
		    };

            class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {};
			};

            class PointerSlot: PointerSlot {
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

            class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};

		initspeed=1000;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.7;
	};

	class GWEAPON(hpb): GWEAPON(hpb_base)
	{
		scope = 2;

		model = QPATHTOF(mti_hpb.p3d);

		muzzles[] = {"Standard","Heavy"};

		class Standard: GWEAPON(hpb_base) {
			displayName = "[SOB] HPB-14";
			magazines[] = {QGMAG(hpb)};
			magazineWell[] = {QGMAGWELL(hpb)};

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

		class Heavy: GWEAPON(hpb_base) {
			displayName = "[SOB] HPB-14 (Underbarrel)";
			magazines[] = {QGMAG(hpb_underbarrel)};
			magazineWell[] = {};

			muzzlePos = "usti granatometu";
			muzzleEnd = "konec granatometu";
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {QPATHTOF(data\sounds\ubs_reload.ogg),2.3,1,30};
			reloadSound[] = {QPATHTOF(data\sounds\ubs_reload.ogg),2.3,1,30};

			modes[] = {"FullAuto","close","short","medium","far"};

			class FullAuto: FullAuto {
				reloadTime = 0.35;
				dispersion = 0.00102;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType{};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						QGVAR(ubs_Shot_SoundSet),
						QGVAR(ubs_Tail_SoundSet)
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

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(hpb);

	class GVAR(hpb_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] HPB Scope";

		model = QPATHTOF(mti_hpb_scope.p3d);

		picture = QPATHTOF(data\ui\hpb_scope_ca.paa);
		UiPicture = QPATHTOF(data\ui\hpb_scope_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Jumptrooper","ARC"};

        class ItemInfo: ItemInfo {

			modelOptics=QPATHTOF(mti_reticle_hpb.p3d);

            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
					modelOptics[] = {QPATHTOF(mti_reticle_hpb.p3d),QPATHTOF(mti_reticle_hpb.p3d)};
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(8);
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
