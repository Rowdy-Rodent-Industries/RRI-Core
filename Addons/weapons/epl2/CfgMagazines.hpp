class CfgMagazines {
	class GMAG(Base);
	class GMAG(epl2): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] EPL2 2rnd Magazine";
		displayNameShort = "Standard Energy";
		descriptionShort = "Standard Energy Cell used by the EPL2 weapon platform";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","JumpTrooper"};
		count = 2;
		mass = 5;
		ammo = "JLTS_ammo_Grenade_EMP"; //todo
	};
};
