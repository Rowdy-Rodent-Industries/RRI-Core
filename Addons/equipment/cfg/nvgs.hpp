class rri_havoc_nvg_base: SFA_Havoc_NVG {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[RRI] Republic Trooper NVG";
	modelOptics = "-";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\nvgs\nvg_co.paa)
    };
};