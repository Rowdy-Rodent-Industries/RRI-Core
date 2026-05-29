class GNVG(P1_MC_Visor): NVGoggles {
	author = AUTHOR;
	displayName = "[SOB] Phase 1 Marshal Commander Visor";
	model = QPATHTOF(data\NVGs\rri_p1attachment.p3d);
    modelOptics =  "-";
	picture = QPATHTOF(data\ui\P1BrigadeCommand.paa);
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsmaterials[] = {QPATHTOF(data\NVGs\p1attachments\antenna.rvmat),QPATHTOF(data\NVGs\p1attachments\light.rvmat),QPATHTOF(data\NVGs\p1attachments\visor.rvmat),QPATHTOF(data\NVGs\p1attachments\Headband.rvmat)};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\p1attachments\Antenna_CO.paa),QPATHTOF(data\NVGs\p1attachments\Light_CO.paa),QPATHTOF(data\NVGs\p1attachments\Visor_CO.paa),QPATHTOF(data\NVGs\p1attachments\Headband_CO.paa)};
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {2,3};
	GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
	class ItemInfo
	{
		type = 616;
		uniformModel = QPATHTOF(data\NVGs\rri_p1attachment.p3d);
		modeloff = QPATHTOF(data\NVGs\rri_p1attachment.p3d);
		mass = 20;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	};

	class ls_lighting
	{
		enabled=1;
		lightModes[]=
		{
			"ls_lighting_whiteHigh",
			"ls_lighting_whiteLow",
			"ls_lighting_redHigh",
			"ls_lighting_redLow",
			"ls_lighting_blueHigh",
			"ls_lighting_blueLow"
		};
		soundOn="ls_lighting_activationRepublic";
		soundOff="ls_lighting_deactivationRepublic";
		soundToggle="ls_lighting_toggle";
		sources[]=
		{
			"left"
		};
		class left
		{
			attachBone="head";
			attachBoneFollow=1;
			attachOffset[]={-0.275,-0.041,0.23500001};
			attachVectorDir[]={0,0,0};
			attachVectorUp[]={0,0,0};
		};
		class right: left
		{
			attachOffset[]={0.050000001,-0.001,0.13500001};
		};
	};
};

class GNVG(p1_visor): GNVG(P1_MC_Visor) {
	author = AUTHOR;
	scope = 2;
	displayName = "[SOB] Phase 1 Commander Visor";
	picture = QPATHTOF(data\ui\P1Command.paa);
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	model = QPATHTOF(data\NVGs\rri_p1_visor.p3d);
	hiddenSelectionsmaterials[] = {QPATHTOF(data\NVGs\p1attachments\antenna.rvmat),QPATHTOF(data\NVGs\p1attachments\light.rvmat),QPATHTOF(data\NVGs\p1attachments\visor.rvmat)};
	hiddenSelectionsTextures[] = {QPATHTOF(data\NVGs\p1attachments\Antenna_CO.paa),QPATHTOF(data\NVGs\p1attachments\Light_CO.paa),QPATHTOF(data\NVGs\p1attachments\Visor_CO.paa)};
	GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};

	class ItemInfo
	{
		type = 616;
		uniformModel = QPATHTOF(data\NVGs\rri_p1_visor.p3d);
		modeloff = QPATHTOF(data\NVGs\rri_p1_visor.p3d);
		mass = 20;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	};
};

class GNVG(P1_advisor_Visor): NVGoggles {
	author = AUTHOR;
	displayName = "[SOB] Phase 1 Advisor Visor";
	model = QPATHTOF(data\nvgs\rri_p1_antenna.p3d);
    modelOptics =  "-";
	picture = QPATHTOF(data\ui\P1BrigadeCommand.paa);
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsmaterials[] = {QPATHTOF(data\nvgs\p1antenna\camo1.rvmat)};
	hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\p1antenna\camo1_CO.paa)};
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {2,3};
	GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
	class ItemInfo
	{
		type = 616;
		uniformModel = QPATHTOF(data\nvgs\rri_p1_antenna.p3d);
		modeloff = QPATHTOF(data\nvgs\rri_p1_antenna.p3d);
		mass = 20;
		hiddenSelections[] = {"Camo1"};
	};

	class ls_lighting
	{
		enabled=1;
		lightModes[]=
		{
			"ls_lighting_whiteHigh",
			"ls_lighting_whiteLow",
			"ls_lighting_redHigh",
			"ls_lighting_redLow",
			"ls_lighting_blueHigh",
			"ls_lighting_blueLow"
		};
		soundOn="ls_lighting_activationRepublic";
		soundOff="ls_lighting_deactivationRepublic";
		soundToggle="ls_lighting_toggle";
		sources[]=
		{
			"left"
		};
		class left
		{
			attachBone="head";
			attachBoneFollow=1;
			attachOffset[]={-0.275,-0.041,0.23500001};
			attachVectorDir[]={0,0,0};
			attachVectorUp[]={0,0,0};
		};
		class right: left
		{
			attachOffset[]={0.050000001,-0.001,0.13500001};
		};
	};
};

class GNVG(P1_MC_Visor2): NVGoggles {
	author = AUTHOR;
	displayName = "[SOB] Phase 1 First Sergeant Visor";
	model = QPATHTOF(data\nvgs\rri_p1_visor2_off.p3d);
    modelOptics =  "-";
	picture = QPATHTOF(data\ui\P1BrigadeCommand.paa);
	hiddenSelections[] = {"Camo1","emissive"};
	hiddenSelectionsmaterials[] = {QPATHTOF(data\nvgs\p1visor\camo.rvmat),QPATHTOF(data\nvgs\p1visor\camo.rvmat)};
	hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\p1visor\camo_CO.paa),QPATHTOF(data\nvgs\p1visor\camo_CO.paa)};
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {2,3};
	GVAR_CORE(arsenal,whitelists)[] = {"Trooper"};
	class ItemInfo
	{
		type = 616;
		uniformModel = QPATHTOF(data\nvgs\rri_p1_visor2.p3d);
		modeloff = QPATHTOF(data\nvgs\rri_p1_visor2_off.p3d);
		mass = 20;
		hiddenSelections[] = {"Camo1","emissive"};
	};
};

class GNVG(P1_headlamp): NVGoggles {
	author = AUTHOR;
	displayName = "[SOB] Phase 1 Headlamp";
	model = QPATHTOF(data\NVGs\rri_headlamp_p1.p3d);
    modelOptics =  "-";
	picture = QPATHTOF(data\ui\P1BrigadeCommand.paa);
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsmaterials[] = {QPATHTOF(data\nvgs\headlamp\camo1.rvmat)};
	hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\headlamp\camo1_co.paa)};
	visionMode[] = {""};
	thermalMode[] = {""};
	GVAR_CORE(arsenal,whitelists)[] = {"Trooper","Arc","FieldSupport","JumpTrooper","Commando"};
	class ItemInfo
	{
		type = 616;
		uniformModel = QPATHTOF(data\NVGs\rri_headlamp_p1.p3d);
		modeloff = QPATHTOF(data\NVGs\rri_headlamp_p1.p3d);
		mass = 20;
		hiddenSelections[] = {"Camo1"};
	};

	class ls_lighting
	{
		enabled=1;
		lightModes[]=
		{
			"ls_lighting_whiteHigh",
			"ls_lighting_whiteLow",
			"ls_lighting_redHigh",
			"ls_lighting_redLow",
			"ls_lighting_blueHigh",
			"ls_lighting_blueLow"
		};
		soundOn="ls_lighting_activationRepublic";
		soundOff="ls_lighting_deactivationRepublic";
		soundToggle="ls_lighting_toggle";
		sources[]=
		{
			"right"
		};
		class left
		{
			attachBone="head";
			attachBoneFollow=1;
			attachOffset[]={-0.275,-0.041,0.23500001};
			attachVectorDir[]={0,0,0};
			attachVectorUp[]={0,0,0};
		};
		class right: left
		{
			attachOffset[]={0.060000001,-0.004,0.13500001};
		};
	};

	class XtdGearInfo {
        model = QGVAR(headlamp);
        camo = "P1";
    };
};

class GNVG(p2_headlamp): GNVG(P1_headlamp) {
	scope = 2;
	displayName = "[SOB] p2 Headlamp";
	model = QPATHTOF(data\NVGs\rri_headlamp_p2.p3d);

	class ItemInfo: ItemInfo
	{
		uniformModel = QPATHTOF(data\NVGs\rri_headlamp_p2.p3d);
		modeloff = QPATHTOF(data\NVGs\rri_headlamp_p2.p3d);
	};

	class ls_lighting
	{
		enabled=1;
		lightModes[]=
		{
			"ls_lighting_whiteHigh",
			"ls_lighting_whiteLow",
			"ls_lighting_redHigh",
			"ls_lighting_redLow",
			"ls_lighting_blueHigh",
			"ls_lighting_blueLow"
		};
		soundOn="ls_lighting_activationRepublic";
		soundOff="ls_lighting_deactivationRepublic";
		soundToggle="ls_lighting_toggle";
		sources[]=
		{
			"right"
		};
		class left
		{
			attachBone="head";
			attachBoneFollow=1;
			attachOffset[]={-0.275,-0.041,0.23500001};
			attachVectorDir[]={0,0,0};
			attachVectorUp[]={0,0,0};
		};
		class right: left
		{
			attachOffset[]={0.060000001,-0.005,0.13500001};
		};
	};

	class XtdGearInfo {
        model = QGVAR(headlamp);
        camo = "P2";
    };
};
