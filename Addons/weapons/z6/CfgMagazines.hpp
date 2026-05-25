class CfgMagazines {
    class GMAG(Base);

	class GMAG(z6): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Z-6 300rnd Energy Cell";
		displayNameShort = "Standard Energy";
		descriptionShort = "Standard-issue energy cell used by the Z-6 AR platform";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper","JumpTrooper","Commando","Fieldsupport"};
		mass = 23;
		ammo = QGAMMO(z6);
		count = 300;
	};

	class GMAG(z6_heavy): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Z-6 Heavy Shells";
		displayNameShort = "Heavy Shot";
		descriptionShort = "Heavy-Rounds energy cells for the Z-6 AR platform";
		GVAR_CORE(arsenal,whitelists)[] = {"Fieldsupport"};
		mass = 10;
		ammo = QGAMMO(z6_heavy);
		initSpeed=920;
		count = 1;
	};
};
