class GUNIT(Base): lsd_gar_phase2_base
{
	scope = 1;
	scopeArsenal = 1;
    author = AUTHOR;
    displayName = "[41st] Rifleman";

    backpack = QGBACKPACK(base);
	uniformClass = QGUNIFORM(Base);

    faction = QEGVAR(faction,41st);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;

	hiddenSelections[] = {"camo1","camo2","undersuit","insignia"};
	// hiddenselectionsmaterials[]= {QPATHTOF(data\Uniform\Base\p2uniform.rvmat)};
	hiddenSelectionsTextures[] = {
		QPATHTOF(data\Uniforms\Base\p2Armor_unmarked_upper_co.paa),
		QPATHTOF(data\Uniforms\Base\p2Armor_unmarked_lower_co.paa),
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};
};

class GUNIT(MC): ls_gar_marshalCommander_base
{
	scope = 1;
    author = AUTHOR;
    displayName = "[41st] Marshal Commander";

    backpack = QGBACKPACK(base);
	uniformClass = QGUNIFORM(MC);

    faction = QEGVAR(faction,41st);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

//P2 Rank
MACRO_RANK_UNIT(P2,Recruit);
MACRO_RANK_UNIT(P2,Enlisted);
MACRO_RANK_UNIT(P2,Veteran);
MACRO_RANK_UNIT(P2,NCO);

//P2 Custom

//Pilot Rank
MACRO_RANK_UNIT(Pilot,Recruit);
MACRO_RANK_UNIT(Pilot,Enlisted);
MACRO_RANK_UNIT(Pilot,Veteran);
MACRO_RANK_UNIT(Pilot,NCO);