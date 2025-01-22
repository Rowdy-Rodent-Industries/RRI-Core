class XtdGearModels 
{
	class CfgWeapons 
	{
		class GVAR(helmet) {
			label = "(41st) Rank Helmets";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{

				};

				class test { label = "";};
			};
		};

		class GVAR(helmet_custom) {
			label = "(41st) Custom Helmets";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{

				};

				class test { label = "";};
			};
		};

		class GVAR(uniforms) {
			label = "(41st) Rank Unforms";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{

				};

				class test { label = "";};
			};
		};

		class GVAR(uniforms_customs) {
			label = "(41st) Custom Unforms";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{

				};

				class test { label = "";};
			};
		};

		class GVAR(Vest) {
			label = "(41st) Rank Vests";
			author = AUTHOR;
			options[] = {"rank", "style"};

			class rank {
				label = "Rank";
				alwaysSelectable = 1;
				changeInGame = 0;
				values[] = {"Base", "Enlisted", "Sergeant", "Officer"};

				class Base { label = "Base"; };
				class Enlisted { label = "Enlisted"; };
				class Sergeant { label = "Sergeant"; };
				class Officer { label = "Officer"; };
			};

			class style: rank {
				label = "Style";
				alwaysSelectable = 0;
				values[] = {"Chest", "Engineer", "Recon", "Heavy"};

				class Chest { label = "Chest"; };
				class Engineer { label = "Engineer"; };
				class Recon { label = "Recon"; };
				class Heavy { label = "Heavy"; };
			};
		};

		class GVAR(nvg) {
			label = "(41st) nvgs";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{
					"Chip","Visor","Spec_Visor","RangeFinder","HeadLamp","Medic_Scanner","Commander","MC", 
					"Engineer","Gunner","SpecOp"
				};

				class Chip { label = "Chip";};
				class Visor { label = "Visor";};
				class Spec_Visor { label = "Spec Visor";};
				class RangeFinder { label = "RangeFinder";};
				class HeadLamp { label = "HeadLamp";};
				class Medic_Scanner { label = "Medic Scanner";};
				class Commander { label = "Commander";};
				class MC { label = "MC";};
				class Engineer { label = "Engineer";};
				class Gunner { label = "Gunner";};
				class SpecOp { label = "SpecOp";};
			};
		};

		class GVAR(backpacks) {
			label = "(41st) backpacks";
			author = AUTHOR;
			options[] = {"camo"};

			class camo {
				changeingame = 0;
				values[] = 
				{
					"Base", "Medic", "Heavy", "Rocket", "LR", "Mini","BeltBag","Bags"
				};

				class Base { label = "Base";};
				class Medic { label = "Medic";};
				class Heavy { label = "Heavy";};
				class Rocket { label = "Rocket";};
				class LR { label = "LR";};
				class Mini { label = "Mini";};
				class BeltBag { label = "BeltBag";};
				class Bags { label = "Bags";};
			};
		};
    };
};