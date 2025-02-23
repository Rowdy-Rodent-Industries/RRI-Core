class GVAR(Resuply_Base): RRI_Crate
{
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "[41st] ResuplyCrate (Base)";

	editorCategory = QEGVAR(edcat,EC);
	editorSubcategory = QEGVAR(edsubcat,Supplies);

	hiddenSelectionsTextures[] = {QPATHTOF(data\crate\Crate_resuply_co.paa)};

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
		MACRO_ADDMAGAZINE(rri_weapons_rifle_mag,15);
		MACRO_ADDMAGAZINE(rri_weapons_MG_mag,15);
		MACRO_ADDMAGAZINE(rri_weapons_Z6_mag,15);
		MACRO_ADDMAGAZINE(rri_weapons_sniper_mag,15);
		MACRO_ADDMAGAZINE(rri_weapons_carbine_mag,15);
	};
};

class GVAR(Resuply_Ammo): GVAR(Resuply_Base)
{
	author = AUTHOR;
	displayName = "[41st] ResuplyCrate (Ammo)";

	class TransportWeapons{};
	class TransportItems{};
	
	class TransportMagazines {
		MACRO_ADDMAGAZINE(rri_weapons_rifle_mag,40);
		MACRO_ADDMAGAZINE(rri_weapons_MG_mag,30);
		MACRO_ADDMAGAZINE(rri_weapons_Z6_mag,20);
		MACRO_ADDMAGAZINE(rri_weapons_sniper_mag,40);
		MACRO_ADDMAGAZINE(rri_weapons_carbine_mag,40);
		MACRO_ADDMAGAZINE(rri_weapons_sub_mag,40);
		MACRO_ADDMAGAZINE(rri_weapons_shotgun_buck,40);
		MACRO_ADDMAGAZINE(rri_weapons_shotgun_Slug,40);
		MACRO_ADDMAGAZINE(rri_weapons_RPS6_Mag,10);
	};
};

class GVAR(Resuply_Medical): GVAR(Resuply_Base)
{
	author = AUTHOR;
	displayName = "[41st] ResuplyCrate (Medical)";

	hiddenSelectionsTextures[] = {QPATHTOF(data\crate\Crate_medical_co.paa)};

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
};