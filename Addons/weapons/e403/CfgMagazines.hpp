class CfgMagazines {
	class GMAG(Base);
	class GMAG(e403_he): GMAG(Base)
	{
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] E403 5rnd HE Proton Mag";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		ammo = QGAMMO(e403_he);
		count = 5;
		mass = 25;
	};

	class GMAG(e403_ap): GMAG(Base)
	{
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] E403 5rnd AP Proton Mag";
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
		ammo = QGAMMO(e403_ap);
		count = 5;
		mass = 70;
	};
};
