#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QE_ADDON(weapons)};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class Mode_rri_Fake: Mode_SemiAuto {
	showToPlayer = 0;
	showSwitchAction = 0;
	enableAttack = 0;
	displayName = "Fake";
	textureType = "burst";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 2.4;
	aiDispersionCoefX = 1.9;
	soundBurst = 0;
	multiplier = 2;
	reloadTime = 1;
	burst = 0;
	autofire = 0;
	dispersion = 0.4;
	aiRateOfFire = 1;
	aiRateOfFireDistance = 10;
	minRange = 0;
	minRangeProbab = 0.01;
	midRange = 1;
	midRangeProbab = 0.01;
	maxRange = 2;
	maxRangeProbab = 0.01;
	soundContinuous=0;
	sounds[] = {"StandardSound"};
	class StandardSound {
		begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
		soundBegin[] = {"begin1",1};
	};
	useAction=0;
	useActionTitle="";
	artillerydispersion = 0.4;
};

#include "CfgCloudlets.hpp"
#include "CfgLights.hpp"
#include "ComplexEffects.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgRecoils.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"

class CfgVehicles {
    #include "groundholders.hpp"
};

