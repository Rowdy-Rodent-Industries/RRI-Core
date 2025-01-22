class GUNIT(Base): lsd_gar_phase2_base
{
	scope = 1;
    author = AUTHOR;
    displayName = "(41st) Rifleman";

    backpack = QGBACKPACK(base);

    faction = QGVAR_CORE(faction,41st);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};

class GUNIT(MC): ls_gar_marshalCommander_base
{
	scope = 1;
    author = AUTHOR;
    displayName = "(41st) Marshal Commander";

    backpack = QGBACKPACK(base);

    faction = QGVAR_CORE(faction,41st);
    editorSubcategory = QEGVAR(edsubcat,Trooper);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};