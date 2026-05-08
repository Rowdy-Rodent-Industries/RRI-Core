class CfgMagazines {
	class GMAG(Base);
	class GMAG(dc17m): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] DC-17m 60rnd Energy Cell";
		displayNameShort = "Standard Energy";
		descriptionShort = "Standard-issue charge cell used by the DC-17m platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		count = 60;
		mass = 10;
		picture = QPATHTOF(data\ui\DC17m_mag_ca.paa);
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
		modelSpecialIsProxy=1;
		reloadAction="3AS_GestureReload_DC17M";
		tracersEvery=1;
		lastRoundsTracer=100;
		ammo = QGAMMO(dc17m);
	};

	class GMAG(dc17m_at): GMAG(Base)  {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] DC-17m Anti Material Charge";
		displayNameShort = "Anti Material";
		descriptionShort = "Anti Material charge used by the DC-17m platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		count = 1;
		mass = 5;
		picture = QPATHTOF(data\ui\DC17m_mag_at_ca.paa);
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\antiarmour_barrel.p3d";
		modelSpecialIsProxy=1;
		reloadAction="3AS_GestureReload_DC17M_AT";
		lastRoundsTracer=1;
		initSpeed=170;
		tracersEvery=1;
		ammo="G_40MM_AMC";
	};

	class GMAG(dc17m_ap): GMAG(Base)  {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] DC-17m 5rnd Marksman Cell";
		displayNameShort = "High Energy";
		descriptionShort = "High-power energy marksman cell used by the DC-17m platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		initSpeed = 900;
		picture = QPATHTOF(data\ui\DC17m_mag_ap_ca.paa);
		modelSpecial="3AS\3AS_Weapons\DC17M\attachments\sniper_Barrel.p3d";
		modelSpecialIsProxy=1;
		reloadAction="3AS_GestureReload_DC17M";
		tracersEvery=1;
		lastRoundsTracer=10;
		count = 5;
		mass = 2;
		ammo = QGAMMO(dc17m_ap);
	};
};
