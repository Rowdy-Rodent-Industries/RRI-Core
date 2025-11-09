class rri_havoc_fw_base: SFA_Havoc_INF_Visor {
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
        QPATHTOF(data\facewear\infantry_visor_co.paa)
    };
};

class rri_havoc_fw_trooper: rri_havoc_fw_base {
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
};

class rri_havoc_fw_visor: rri_havoc_fw_base {
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
        QPATHTOF(data\facewear\infantry_visor_co.paa)
    };
};

class rri_havoc_spec_visor: rri_havoc_fw_base {
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
        QPATHTOF(data\facewear\nco_visor_co.paa)
    };
};

class rri_havoc_command_visor: rri_havoc_fw_base {
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
        QPATHTOF(data\facewear\infantry_visor_co.paa),
        "SFA_Main\SFA_Equipment_R\Helmet\Havoc\data\acc\Havoc_Recon_Attachment_co.paa"
    };
};