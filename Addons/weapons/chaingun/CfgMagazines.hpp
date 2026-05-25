class CfgMagazines {
	class GMAG(Base);
	class GMAG(chaingun): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Z-6 600rnd Chaingun Drum";
		displayNameShort = "HE";
		descriptionShort = "High-Explosive rounds in a 600rnd drum magazines used by the Z-6 chaingun platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		initSpeed = 200;
		ammo = "3AS_Chaingun_Ammo";
		type = "512";
		mass = 60;
		count = 600;
	};
};
