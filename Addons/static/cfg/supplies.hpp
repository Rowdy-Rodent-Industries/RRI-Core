class GVAR(Ressuply_Base): NATO_Box_Base
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] RessuplyCrate (Base)";

	editorCategory = QEGVAR(edcat,EC);
	editorSubcategory = QEGVAR(edsubcat,Supplies);

	maximumLoad = "8000";

	class TransportWeapons {};

	class TransportItems {
		//MISC 

		//Medical
		MACRO_ADDITEM(ACE_surgicalKit,2);

		//Bandages
		MACRO_ADDITEM(ACE_elasticBandage,60);
		MACRO_ADDITEM(ACE_packingBandage,60);
		MACRO_ADDITEM(ACE_quikclot,30);

		//Equipment
		MACRO_ADDITEM(ACE_tourniquet,15);
		MACRO_ADDITEM(ACE_splint,10);

		//Medications
		MACRO_ADDITEM(ACE_morphine,20);
		MACRO_ADDITEM(ACE_epinephrine,20);
		MACRO_ADDITEM(ACE_adenosine,20);

		//IV 
		MACRO_ADDITEM(ACE_bloodIV,10);
		MACRO_ADDITEM(ACE_bloodIV_500,15);
	};

	class TransportMagazines {
		MACRO_ADDITEM(GVAR(Rifle_Mag),15);
		MACRO_ADDITEM(GVAR(MG_Mag),15);
		MACRO_ADDITEM(GVAR(Z6_Mag),10);
		MACRO_ADDITEM(GVAR(Sniper_Mag),15);
		MACRO_ADDITEM(GVAR(Carbine_Mag),15);
	};
};

class GVAR(Ressuply_Ammo): GVAR(Ressuply_Base)
{
	author = AUTHOR;
	displayName = "[41st] RessuplyCrate (Ammo)";

	class TransportWeapons{};
	class TransportItems{};
	
	class TransportMagazines {
		MACRO_ADDITEM(GVAR(Rifle_Mag),40);
		MACRO_ADDITEM(GVAR(MG_Mag),30);
		MACRO_ADDITEM(GVAR(Z6_Mag),20);
		MACRO_ADDITEM(GVAR(Sniper_Mag),40);
		MACRO_ADDITEM(GVAR(Carbine_Mag),40);
		MACRO_ADDITEM(GVAR(RPS6_Mag),20);
	};
};