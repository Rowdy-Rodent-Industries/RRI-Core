class GNVG(Chip): JLTS_NVG_droid_chip_1
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] NVG Chip";
	visionMode[] = {"Normal","NVG"};
	thermalMode[] = {};

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Chip";
    };
};

class GNVG(Visor): lsd_gar_standard_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] NVG Visor";
	visionMode[] = {"Normal","NVG"};
	thermalMode[] = {};
	modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Visor";
    };
};

class GNVG(Spec_Visor): lsd_gar_standardSPC_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Specialist Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Spec_Visor";
    };
};

class GNVG(RangeFinder): lsd_gar_rangefinder_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] RangeFinder";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "RangeFinder";
    };
};

class GNVG(HeadLamp): lsd_gar_p2SingleHeadLamp_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Headlamp";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "HeadLamp";
    };
};

class GNVG(Medic_Scanner): lsd_gar_medicalScannerSPC_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Medical Scanner";
	visionMode[] = {"Normal","NVG"};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Medic_Scanner";
    };
};

class GNVG(Commander): lsd_gar_p2Commander_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Commander Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Commander";
    };
};

class GNVG(MC): lsd_gar_p2MarshalCommander_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Marshal Commander Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "MC";
    };
};

class GNVG(Engineer): SWLB_CEE_Engineer_Comms
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Engineer Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Engineer";
    };
};

class GNVG(Gunner): lsd_gar_artilleryGunner_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Gunner Plating";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "Gunner";
    };
};

class GNVG(SpecOp): ls_memefor_splinterCell_nvg
{
	author = AUTHOR;
	scope = 2;
	scopeCurator = 2;
	displayName = "[41st] Spec-Ops Visor";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
    modelOptics = "-";

	class XtdGearInfo {
        model = QGVAR(nvg);
        camo = "SpecOp";
    };
};