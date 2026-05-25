class CfgMagazines {
    class GMAG(Base);
	class GMAG(westarm5): GMAG(Base) {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Westar-M5 60rnd Energy Cell";
		displayNameShort = "Standard Energy";
		descriptionShort = "Standard-issue energy cell used by the Westar-M5 weapon platform";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
		ammo = QGAMMO(westarm5);
		initSpeed=600;
		mass = 10;
		picture = QPATHTOF(data\ui\Westar_Mag_ca.paa);
		count = 60;
	};
};
