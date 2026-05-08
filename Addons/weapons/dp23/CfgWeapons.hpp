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

	class arifle_MX_Base_F;
    class JLTS_DP23: arifle_MX_Base_F {
        class WeaponSlotsInfo;
    };

	class GWEAPON(dp23) : JLTS_DP23 {
		author = AUTHOR;
		displayName = "[SOB] DP-23";
		baseWeapon = QGWEAPON(dp23);

		magazines[] = { QGMAG(dp23_buck),QGMAG(dp23_slug),QGMAG(beanbag) };
		magazineWell[] = {QGMAGWELL(dp23)};

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","Commando"};

		picture = QPATHTOF(data\ui\DP23.paa);
		MACRO_GUNSMOKE_EFFECT;
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(dp23_shield);

		muzzles[] = {"this", "Stun"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 85;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class GWEAPON(dp23_shield): GWEAPON(dp23)
	{
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = QGWEAPON(dp23);
		model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};
		picture = QPATHTOF(data\ui\DP23.paa);
		inertia = 0.8;
		recoil = "recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class GWEAPON(dp23_hp): JLTS_DP23 {
		author = AUTHOR;
		displayName = "[SOB] DP-23 HP";
		baseWeapon = QGWEAPON(dp23_hp);

		magazines[] = { QGMAG(dp23_hp_slug), QGMAG(dp23_hp_buck), QGMAG(beanbag) };
		magazineWell[] = {QGMAGWELL(dp23)};
		picture = QPATHTOF(data\ui\DP23.paa);
		recoil = QEGVAR(weapons_core,dp23hp_recoil);

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};
		MACRO_GUNSMOKE_HP_EFFECT;
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = QGWEAPON(dp23_hp_shield);

		modes[] = {"Single","FullAuto"};
		muzzles[] = {"this", "Stun"};

		class Single: Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"ls_dp20_Shot_SoundSet",
					"ls_mediumBlaster_Tail_SoundSet"
				};
			};

			reloadTime = 0.096;
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
			reloadTime=0.3;
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
			class StandardSound
			{
				soundSetShot[]=
				{
					"ls_dp20_Shot_SoundSet",
					"ls_mediumBlaster_Tail_SoundSet"
				};
			};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 85;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,ACOG),
					QEGVAR(weapons_core,ACOGMG),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};

	class GWEAPON(dp23_hp_shield): GWEAPON(dp23_hp)
	{
		scope = 1;
		JLTS_isShielded = 1;
		JLTS_baseWeapon = QGWEAPON(dp23_hp);
		model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};
		picture = QPATHTOF(data\ui\DP23.paa);
		inertia = 0.8;
		recoil = "JLTS_recoil_DP23";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"JLTS_riot_shield_attachment","JLTS_riot_shield_212_attachment","JLTS_riot_shield_501_attachment","JLTS_riot_shield_101_attachment","JLTS_riot_shield_CG_attachment","JLTS_riot_shield_GD_attachment","JLTS_riot_shield_droid_attachment"};
			};
		};
	};


	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(dp23);
	WEAPON_BCSEWPN_ZASLEH_MACRO(dp23_hp);
};
