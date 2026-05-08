class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class UGL_F;

class CfgWeapons {
	class LMG_Mk200_F;
	class SFA_E403: LMG_Mk200_F {
		class WeaponSlotsInfo;
	};
	class GWEAPON(e403): SFA_E403 {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] E403 Assault Cannon";
		baseWeapon = QGWEAPON(e403);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		picture = QPATHTOF(data\ui\E403.paa);
		recoil = "recoil_rpg";
		magazines[] = {QGMAG(e403_he), QGMAG(e403_ap)};
		magazineWell[] = {QGMAGWELL(e403)};

		class GunParticles{
			class FirstEffect{
				directionName = "Konec hlavne";
				effectName = "RailgunFiredB1";
				positionName = "Usti hlavne";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=2.5;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class EGLM: UGL_F
		{
			displayName="3rnd HE launcher";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			initspeed=75;
			magazines[]=
			{
				"SFA_light_proton_mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					weaponSoundEffect="";
					closure1[]={};
					closure2[]={};
					soundClosure[]={};
				};
				class StandardSound: BaseSoundModeType
				{
					weaponSoundEffect="";
					begin1[]=
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					begin2[]=
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					begin3[]=
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.33000001
					};
				};
				reloadTime=0.15000001;
				dispersion=0.0030149999;
				minRange=5;
				minRangeProbab=0.30000001;
				midRange=25;
				midRangeProbab=0.60000002;
				maxRange=50;
				maxRangeProbab=0.1;
				aiRateOfFire=2;
				aiRateOfFireDistance=25;
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST,
					MRD_LIST
				};
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(e403);
};
