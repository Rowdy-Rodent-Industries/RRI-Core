class GUNIT(base): ls_sob_commando_unit {
	author = AUTHOR;
    displayName = "[SOB] Republic Commando";
    scope = 1;
    faction = QEGVAR(faction,SOB);
	editorSubcategory = QEGVAR(edsubcat,Commando);
	uniformClass = QGUNIFORM(base);

	backpack = QGBACKPACK(base);

    linkedItems[] = {QGHELMET(base),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(base),QGVEST(base),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Base\camo1_Base_co.paa),QPATHTOF(data\uniforms\Base\camo2_Base_co.paa)};
	// hiddenSelectionsMaterials[] = {QPATHTOF(data\uniforms\camo1_2dots.rvmat), QPATHTOF(data\uniforms\camo2.rvmat)};

	armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(Cadet) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Cadet)";
	uniformClass = QGUNIFORM(Cadet);

	backpack = QGBACKPACK(Cadet);

   	linkedItems[] = {QGHELMET(Cadet),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Cadet),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Base\camo1_Base_co.paa),QPATHTOF(data\uniforms\Base\camo2_Base_co.paa)};
	// hiddenSelectionsMaterials[] = {QPATHTOF(data\uniforms\camo1_2dots.rvmat), QPATHTOF(data\uniforms\camo2.rvmat)};

	// hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\SOB\camo1_SOB_co.paa),QPATHTOF(data\uniforms\SOB\camo2_SOB_co.paa)};
};

class GUNIT(SOB) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (SOB)";
	uniformClass = QGUNIFORM(Cadet);

	backpack = QGBACKPACK(Cadet);

   	linkedItems[] = {QGHELMET(Cadet),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Cadet),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\SOB\camo1_SOB_co.paa),QPATHTOF(data\uniforms\SOB\camo2_SOB_co.paa)};
};

class GUNIT(Sarge) : GUNIT(base) {
	scope = 1;
    displayName = "[SOB] Republic Commando (Sarge)";
	uniformClass = QGUNIFORM(Sarge);

	backpack = QGBACKPACK(Sarge);

   	linkedItems[] = {QGHELMET(Sarge),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Sarge),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Sarge\camo1_Sarge_co.paa),QPATHTOF(data\uniforms\Sarge\camo2_Sarge_co.paa)};
};


class GUNIT(Imperial) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Imperial)";
	uniformClass = QGUNIFORM(Imperial);

	backpack = QGBACKPACK(Imperial);

   	linkedItems[] = {QGHELMET(Imperial),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Imperial),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Imperial\camo1_Imperial_co.paa),QPATHTOF(data\uniforms\Imperial\camo2_Imperial_co.paa)};
};

// Camouflage
class GUNIT(Arctic) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Arctic Ops)";
	uniformClass = QGUNIFORM(Arctic);

	backpack = QGBACKPACK(Arctic);

   	linkedItems[] = {QGHELMET(Arctic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Arctic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Camouflage\Arctic\camo1_Arctic_co.paa),QPATHTOF(data\uniforms\Camouflage\Arctic\camo2_Arctic_co.paa)};
};

class GUNIT(Desert) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Desert Ops)";
	uniformClass = QGUNIFORM(Desert);

	backpack = QGBACKPACK(Desert);

   	linkedItems[] = {QGHELMET(Desert),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Desert),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Camouflage\Desert\camo1_Desert_co.paa),QPATHTOF(data\uniforms\Camouflage\Desert\camo2_Desert_co.paa)};
};

class GUNIT(Jungle) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Jungle Ops)";
	uniformClass = QGUNIFORM(Jungle);

	backpack = QGBACKPACK(Jungle);

   	linkedItems[] = {QGHELMET(Jungle),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Jungle),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Camouflage\Jungle\camo1_Jungle_co.paa),QPATHTOF(data\uniforms\Camouflage\Jungle\camo2_Jungle_co.paa)};
};

class GUNIT(Night) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Night Ops)";
	uniformClass = QGUNIFORM(Night);

	backpack = QGBACKPACK(Night);

   	linkedItems[] = {QGHELMET(Night),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Night),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\Camouflage\Night\camo1_Night_co.paa),QPATHTOF(data\uniforms\Camouflage\Night\camo2_Night_co.paa)};
};

// MOS
class GUNIT(EOD) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Demolitionist)";
	uniformClass = QGUNIFORM(eod);

	backpack = QGBACKPACK(EOD);

   	linkedItems[] = {QGHELMET(EOD),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(EOD),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\EOD\camo1_EOD_co.paa),QPATHTOF(data\uniforms\MOS\EOD\camo2_EOD_co.paa)};
};

class GUNIT(tech) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Technician)";
	uniformClass = QGUNIFORM(tech);

	backpack = QGBACKPACK(tech);

   	linkedItems[] = {QGHELMET(tech),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(tech),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\tech\camo1_tech_co.paa),QPATHTOF(data\uniforms\MOS\tech\camo2_tech_co.paa)};
};

class GUNIT(sniper) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Sniper)";
	uniformClass = QGUNIFORM(sniper);

	backpack = QGBACKPACK(sniper);

   	linkedItems[] = {QGHELMET(sniper),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(sniper),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\sniper\camo1_sniper_co.paa),QPATHTOF(data\uniforms\MOS\sniper\camo2_sniper_co.paa)};
};

class GUNIT(exotic) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Exotic Weapons)";
	uniformClass = QGUNIFORM(exotic);

	backpack = QGBACKPACK(exotic);

   	linkedItems[] = {QGHELMET(exotic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(exotic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\exotic\camo1_exotic_co.paa),QPATHTOF(data\uniforms\MOS\exotic\camo2_exotic_co.paa)};
};

class GUNIT(medic) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Medic)";
	uniformClass = QGUNIFORM(medic);

	backpack = QGBACKPACK(medic);

   	linkedItems[] = {QGHELMET(medic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(medic),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\medic\camo1_medic_co.paa),QPATHTOF(data\uniforms\MOS\medic\camo2_medic_co.paa)};
};

class GUNIT(heavy) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Heavy Weapons)";
	uniformClass = QGUNIFORM(heavy);

	backpack = QGBACKPACK(heavy);

   	linkedItems[] = {QGHELMET(heavy),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(heavy),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\heavy\camo1_heavy_co.paa),QPATHTOF(data\uniforms\MOS\heavy\camo2_heavy_co.paa)};
};

class GUNIT(sl) : GUNIT(base) {
    displayName = "[SOB] Republic Commando (Squad Leader)";
	uniformClass = QGUNIFORM(sl);

	backpack = QGBACKPACK(sl);

   	linkedItems[] = {QGHELMET(sl),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(sl),QGNVG(chip),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};

	hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\MOS\sl\camo1_sl_co.paa),QPATHTOF(data\uniforms\MOS\sl\camo2_sl_co.paa)};
};
