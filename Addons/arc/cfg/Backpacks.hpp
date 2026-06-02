class GBACKPACK(stealth): EGBACKPACK(equipment_custom,arc) {
    scope = 1;
    displayName = "[SOB] ARC Trooper Backpack (Stealth)";

    //hiddenSelectionsTextures[] = {
	//	"\ls\core\addons\data\textures\blank_ca.paa",
	//	"\ls\core\addons\data\textures\blank_ca.paa"
	//};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

class GBACKPACK(stealth_cadet): EGBACKPACK(equipment_custom,arc_noBracer) {
    scope = 1;
    displayName = "[SOB] Cadet ARC Trooper Backpack (Stealth)";

	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

class GBACKPACK(stealth_tech): EGBACKPACK(equipment_custom,arc_tech) {
    scope = 1;
    displayName = "[SOB] ARC Trooper Tech Backpack (Stealth)";

    //hiddenSelectionsTextures[] = {
	//	"\ls\core\addons\data\textures\blank_ca.paa",
	//	"\ls\core\addons\data\textures\blank_ca.paa"
	//};
	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};

class GBACKPACK(stealth_tech_cadet): EGBACKPACK(equipment_custom,arc_tech_noBracer) {
    scope = 1;
    displayName = "[SOB] Cadet ARC Trooper Tech Backpack (Stealth)";

	hiddenSelectionsMaterials[] = {
		"\ls\core\addons\data\materials\activeCamo.rvmat",
		"",
		"\ls\core\addons\data\materials\activeCamo.rvmat"
	};
};
