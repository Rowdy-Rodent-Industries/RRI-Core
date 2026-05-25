class Mode_SemiAuto;

class CfgWeapons {
	class Pistol;
	class Pistol_Base_F: Pistol {
		class WeaponSlotsInfo;
	};

	class GWEAPON(melee_base): Pistol_Base_F {
		scope = 1;
        author = AUTHOR;

		magazines[] = {"WBK_Cybercrystal"};

		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
        fireLightIntensity = 0;
		weaponInfoType = "RscWeaponEmpty";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_zubr";

		IMS_Melee_Param_Damage = 0.25;
		IMS_Melee_Param_Sounds = "[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_SoundsOnHit = "[""sword_hit_1"",""sword_hit_2"",""sword_hit_3"",""sword_hit_4"",""sword_hit_5"",""sword_hit_6""]";
		IMS_Melee_Param_SoundsOnBlock = "[""sword_to_sword_1"",""sword_to_sword_2"",""sword_to_sword_3"",""sword_to_sword_4""]";
		IMS_WeaponType = "OneHanded";
		IMS_ExecutionType = "Knife";

        class WeaponSlotsInfo
		{
			holsterOffset="holster";
			holsterScale=0;
			allowedslots[]={901};
			mass=8;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={2000,2000};
				iconScale=0.1;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				iconPosition[]={2000,2000};
				iconScale=0.1;
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};

		class GunParticles {
			class FirstEffect{};
		};

		modes[] = {"Single"};
		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class StandardSound {
				begin1[] = {"",3,1,5};
				soundBegin[] = {"begin1",0.01};
			};

			burst = 1;
			soundContinuous = "true";
			reloadSound[] = {"",1,1};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";

			reloadTime = 0.2;
			dispersion = 0.0029;

			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;

			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};

	class GWEAPON(knife): GWEAPON(melee_base) {
		scope = 2;
        author = AUTHOR;
		displayname = "[SOB] Clone Knife";

		model = QPATHTOF(clone_knife.p3d);
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\knife\camo_co.paa)};
		picture = QPATHTOF(data\ui\Knife_ca.paa);

		magazines[] = {"WBK_Cybercrystal"};

		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
        fireLightIntensity = 0;
		weaponInfoType = "RscWeaponEmpty";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_zubr";

		IMS_Melee_Param_Damage = 0.25;
		IMS_Melee_Param_Sounds = "[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_SoundsOnHit = "[""sword_hit_1"",""sword_hit_2"",""sword_hit_3"",""sword_hit_4"",""sword_hit_5"",""sword_hit_6""]";
		IMS_Melee_Param_SoundsOnBlock = "[""sword_to_sword_1"",""sword_to_sword_2"",""sword_to_sword_3"",""sword_to_sword_4""]";
		IMS_WeaponType = "OneHanded";
		IMS_ExecutionType = "Knife";

		GVAR_CORE(equipment,isKnife) = 1;
    };

    class GWEAPON(hammer): GWEAPON(melee_base) {
		scope = 2;
		author = AUTHOR;
		displayname = "[SOB] Clone Hammer";

		model = QPATHTOF(rri_hammer.p3d);
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\hammer\shaft\grip_CO.paa),QPATHTOF(data\hammer\head\head_CO.paa)};
		// picture = QPATHTOF(data\ui\Knife_ca.paa); //todo

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};


		IMS_Melee_Param_Damage=0.5;
		IMS_Melee_Param_Sounds="[""bat_type_swing_1"",""bat_type_swing_2""]";
		IMS_Melee_Param_SoundsOnHit="[""bat_type_hit_1"",""bat_type_hit_2"",""bat_type_hit_3"",""bat_type_hit_4""]";
		IMS_Melee_Param_SoundsOnBlock="[""wood_block_1"",""wood_block_2"",""wood_block_3"",""wood_block_4""]";
		IMS_WeaponType="Heavy";
		IMS_ExecutionType="Blunt";
	};

	class GWEAPON(shovel): GWEAPON(melee_base) {
		scope = 2;
        author = AUTHOR;
		displayname = "[SOB] Clone Shovel";

		model = QPATHTOF(rri_shovel.p3d);
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\shovel\camo_CO.paa)};
		// picture = QPATHTOF(data\ui\Knife_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};

		magazines[] = {""};

		IMS_Melee_Param_Damage = 0.5;
		IMS_Melee_Param_Sounds = "[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_SoundsOnHit = "[""sword_hit_1"",""sword_hit_2"",""sword_hit_3"",""sword_hit_4"",""sword_hit_5"",""sword_hit_6""]";
		IMS_Melee_Param_SoundsOnBlock = "[""sword_to_sword_1"",""sword_to_sword_2"",""sword_to_sword_3"",""sword_to_sword_4""]";
		IMS_WeaponType = "OneHanded";
		IMS_ExecutionType="Axe";
    };
};
