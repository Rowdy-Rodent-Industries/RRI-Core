class GVAR(Nuclass): 3AS_Nuclass_Blank {
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "(41st) Nu-Class Shuttle";
	displayNameShort = "(41st) Nu-Class Shuttle";

	faction = QEGVAR(faction,41st);
	crew="3AS_Clone_P2_Pilot";
	editorSubCategory = QGVAR(edsubcat_Heli);

	class TransportItems
	{
		MACRO_ADDITEM(ACE_packingBandage,100);
		MACRO_ADDITEM(ACE_elasticBandage,100);
		MACRO_ADDITEM(ACE_quikclot,50);
		MACRO_ADDITEM(MTI_BactaPatch,10);
		MACRO_ADDITEM(MTI_BactaSpray,10);
		MACRO_ADDITEM(MTI_Symoxin,20);
		MACRO_ADDITEM(MTI_Batroxobine,20);
		MACRO_ADDITEM(ACE_bloodIV,20);
		MACRO_ADDITEM(ACE_bloodIV_500,20);
	};
	class TransportMagazines
	{
		MACRO_ADDMAGAZINE(MTI_DC15A_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC15C_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC15S_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC17M_mag,30);
		MACRO_ADDMAGAZINE(MTI_WestarM5_mag,30);
	};
	class TransportWeapons
	{
	};

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};

	ace_cargo_space = 100;

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
			CARGO_XX(EGVAR(static,Ressuply_Base),2);
			CARGO_XX(EGVAR(static,Ressuply_Ammo),2);
		};
	};
};

class GVAR(RhoCLass): 3AS_Rho_REP_F {
	scope = 2;
	scopeCurator = 2;
	author = AUTHOR;
	displayName = "(41st) Rho-Class Shuttle";
	displayNameShort = "(41st) Rho-Class Shuttle";

	faction = QEGVAR(faction,41st);
	crew="3AS_Clone_P2_Pilot";
	editorSubCategory = QGVAR(edsubcat_Heli);

	class TransportItems
	{
		MACRO_ADDITEM(ACE_packingBandage,100);
		MACRO_ADDITEM(ACE_elasticBandage,100);
		MACRO_ADDITEM(ACE_quikclot,50);
		MACRO_ADDITEM(MTI_BactaPatch,10);
		MACRO_ADDITEM(MTI_BactaSpray,10);
		MACRO_ADDITEM(MTI_Symoxin,20);
		MACRO_ADDITEM(MTI_Batroxobine,20);
		MACRO_ADDITEM(ACE_bloodIV,20);
		MACRO_ADDITEM(ACE_bloodIV_500,20);
	};
	class TransportMagazines
	{
		MACRO_ADDMAGAZINE(MTI_DC15A_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC15C_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC15S_mag,30);
		MACRO_ADDMAGAZINE(MTI_DC17M_mag,30);
		MACRO_ADDMAGAZINE(MTI_WestarM5_mag,30);
	};
	class TransportWeapons
	{
	};

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};

	ace_cargo_space = 100;

	class ACE_Cargo {
		class Cargo {
			CARGO_XX(EGVAR(static,FuelCanister),1);
			CARGO_XX(EGVAR(static,Ressuply_Base),2);
			CARGO_XX(EGVAR(static,Ressuply_Ammo),2);
		};
	};
};