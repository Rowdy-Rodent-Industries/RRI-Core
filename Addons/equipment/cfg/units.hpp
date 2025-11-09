class rri_havoc_unit_base : SFA_Rep_Havoc_R  {
    scope = 1;
	scopeArsenal = 1;
    author = AUTHOR;
    displayName = "[RSFD] Republic Trooper (Recruit)";

    backpack = QGBACKPACK(base);

    faction = QEGVAR(faction,RSFD);
	editorCategory = QEGVAR(edcat,RSFD);
    editorSubcategory = QEGVAR(edsubcat,RT);

    armor = UNIT_ARMOR;
	armorStructural = UNIT_ARMOR_STRUCTURAL;
	explosionShielding = UNIT_EXPLOSION_SHIELDING;
	minTotalDamageThreshold = UNIT_MIN_TOTAL_DAMAGE_THRESHOLD;
	impactDamageMultiplier = UNIT_IMPACT_DAMAGE_MULTIPLIER;

	UNIT_HITPOINTS;
};


MACRO_RANK_UNIT(havoc,RCT);
MACRO_RANK_UNIT(havoc,PVT);