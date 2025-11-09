class rri_havoc_nvg_base: NVGoggles {
	scope = 2;
	scopeArsenal = 2;
	author = AUTHOR;
	displayName = "[RSFD] Republic Trooper Visor";
	modelOptics = "-";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Infantry_Helmet_Visor_co.paa"
    };
	visionMode[]=
    {
        "Normal",
        "NVG"
    };
    thermalMode[]={};

    class ItemInfo
	{
		type = 616;
		uniformModel = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
		modeloff = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
		mass = 20;
	};
};

class rri_havoc_nvg_trooper: rri_havoc_nvg_base {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[RRI] Republic Trooper NVG Attachments";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Recon_attachment.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Recon_Attachment_co.paa"
    };

    class ItemInfo
	{
		type = 616;
		uniformModel = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Recon_attachment.p3d";
		modeloff = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Recon_attachment.p3d";
		mass = 20;
	};
};

class rri_havoc_nvg_visor: rri_havoc_nvg_base {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[RRI] Republic Trooper NVG Visor";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Infantry_Helmet_Visor_co.paa"
    };

    class ItemInfo
	{
		type = 616;
		uniformModel = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
		modeloff = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_infantry_visor.p3d";
		mass = 20;
	};
};

class rri_havoc_nvg_spec_visor: rri_havoc_nvg_base {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[RRI] Republic Trooper Specialist Visor";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_NCO_visor.p3d";
    visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {2,3};
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_NCO_Helmet_Visor_co.paa"
    };

    class ItemInfo
	{
		type = 616;
		uniformModel = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_NCO_visor.p3d";
		modeloff = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_NCO_visor.p3d";
		mass = 20;
	};
};

class rri_havoc_nvg_command_visor: rri_havoc_nvg_base {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[RRI] Republic Trooper Command Visor";
    model="SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_Command_visor.p3d";
    visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {2,3};
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Infantry_Helmet_Visor_co.paa",
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Recon_Attachment_co.paa"
    };

    class ItemInfo
	{
		type = 616;
		uniformModel = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_NCO_visor.p3d";
		modeloff = "SFA_Main\SFA_Equipment_R\Helmet\Havoc\Havoc_NCO_visor.p3d";
		mass = 20;
	};
};