class CfgMagazines {
	class GMAG(AT_Rocket_Base);
	class GMAG(plx1_at): GMAG(AT_Rocket_Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] PLX-1 3rnd AT Missile Pack";
		displayNameShort = "AT";
		descriptionShort = "Anti-Tank missile pack used by the PLX-1 launcher platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		mass=100;
		count = 3;
		picture = QPATHTOF(data\ui\Rocket_AT_ca.paa);
		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		modelSpecial = "";
		ammo=QGAMMO(plx_at);
		initSpeed=18;
		maxLeadSpeed=27.7778;
		type="1536";
	};

	class GMAG(AA_Rocket_Base);
	class GMAG(plx1_aa): GMAG(AA_Rocket_Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] PLX-1 3rnd AA Missile Pack";
		displayNameShort = "AA";
		descriptionShort = "Anti-Air missile pack used by the PLX-1 launcher platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		mass = 75;
		count = 3;
		picture = QPATHTOF(data\ui\Rocket_AA_ca.paa);
		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		modelSpecial = "";
		ammo=QGAMMO(plx_AA);
		initSpeed=18;
	};
};
