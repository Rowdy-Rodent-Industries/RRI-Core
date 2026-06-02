//base
class GUNIT(base): JLTS_Clone_P2_DC15A {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper";

    backpack = QGBACKPACK(base);

    faction = QEGVAR(faction,SOB);
    editorSubcategory = QEGVAR(edsubcat,JumpTrooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

//Ranks
class GUNIT(Cadet): GUNIT(base) {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (Cadet)";

    backpack = QGBACKPACK(Cadet);

    uniformClass = QGUNIFORM(Cadet);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\Cadet\clone_armor1_Cadet_co.paa),
		QPATHTOF(data\uniforms\rank\Cadet\clone_armor2_Cadet_co.paa)
	};
	linkedItems[] = {QGHELMET(Cadet),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Cadet),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Trooper): GUNIT(base){
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (Trooper)";

    backpack = QGBACKPACK(base);

    uniformClass = QGUNIFORM(Trooper);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\Trooper\clone_armor1_Trooper_co.paa),
		QPATHTOF(data\uniforms\rank\Trooper\clone_armor2_Trooper_co.paa)
	};
	linkedItems[] = {QGHELMET(Trooper),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Trooper),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(TL): GUNIT(base) {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (TL)";

    backpack = QGBACKPACK(TL);

    uniformClass = QGUNIFORM(TL);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\TL\clone_armor1_TL_co.paa),
		QPATHTOF(data\uniforms\rank\TL\clone_armor2_TL_co.paa)
	};
	linkedItems[] = {QGHELMET(TL),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(TL),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(SL): GUNIT(base) {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (SL)";

    backpack = QGBACKPACK(SL);

    uniformClass = QGUNIFORM(SL);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\SL\clone_armor1_SL_co.paa),
		QPATHTOF(data\uniforms\rank\SL\clone_armor2_SL_co.paa)
	};
	linkedItems[] = {QGHELMET(SL),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(SL),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(Medic): GUNIT(base) {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (Medic)";

    backpack = QGBACKPACK(Medic);

    uniformClass = QGUNIFORM(Medic);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\Medic\clone_armor1_Medic_co.paa),
		QPATHTOF(data\uniforms\rank\Medic\clone_armor2_Medic_co.paa)
	};
	linkedItems[] = {QGHELMET(Medic),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(Medic),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};

class GUNIT(EOD): GUNIT(base) {
    scope = 1;
    author = AUTHOR;
    displayName = "[SOB] Jump Trooper (EOD)";

    backpack = QGBACKPACK(base);

    uniformClass = QGUNIFORM(EOD);

	hiddenSelectionsTextures[] = {
		QPATHTOF(data\uniforms\rank\EOD\clone_armor1_EOD_co.paa),
		QPATHTOF(data\uniforms\rank\EOD\clone_armor2_EOD_co.paa)
	};
	linkedItems[] = {QGHELMET(EOD),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	respawnLinkedItems[] = {QGHELMET(EOD),QGVEST(base),QGNVG(Visor),"JLTS_clone_comlink","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
