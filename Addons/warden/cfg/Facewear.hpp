class GFACEWEAR(base_FS): GFACEWEAR(base) {
	scope = 2;
	displayName = "[SOB] Field Support Suspenders (Black)";

	model = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_suspender_co.paa"};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
};

class GFACEWEAR(white_FS): GFACEWEAR(base_FS) {
	scope = 2;
	displayName = "[SOB] Field Support Suspenders (White)";

	model = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneLegions\data\Clone_501stJet_vest_co.paa"};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
};

class GFACEWEAR(Grey_FS): GFACEWEAR(base_FS) {
	scope = 2;
	displayName = "[SOB] Field Support Suspenders (Grey)";

	model = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneLegions\data\Clone_41stGree_vest_co.paa"};
	GVAR_CORE(arsenal,whitelists)[] = {"fieldsupport"};
};
