class rri_havoc_helmet_base: SFA_blank_Havoc_Helmet_STND {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[RRI] Republic Trooper Helmet (Havocbase)";
	model = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Standard_helm.p3d"; 
	hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\rank\base_rct_co.paa)};

	class ItemInfo: ItemInfo {
		hiddenSelections[] = {"Camo1"};
		uniformmodel ="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Standard_helm.p3d"; 
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

class rri_gunner_helmet_base: SFA_blank_Havoc_Helmet_G {
	scope = 1;
	scopeArsenal = 1;
	author = AUTHOR;
	displayName = "[RRI] Republic Trooper Helmet (Gunnerbase)";

	class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

class rri_spec_helmet_base: SFA_blank_Havoc_Helmet_S {
	scope = 1;
	scopeArsenal = 1;
	author = AUTHOR;
	displayName = "[RRI] Republic Trooper Helmet (Specialist Base)";

	class ItemInfo: ItemInfo {
        HELMET_PROTECTION;
    };

    HELMET_ACE_HEARING;
};

MACRO_RANK_HELMET(2,RCT);
MACRO_RANK_HELMET(2,PVT);
MACRO_RANK_HELMET(2,PFC);
