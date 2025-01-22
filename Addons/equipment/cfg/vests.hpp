class GVEST(Base_Chest): SWLB_CEE_ARF_Vest
{
	scope = 2;
	displayName = "(41st) Base Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Base = "Chest";
    };
};

class GVEST(Enlisted_Chest): SWLB_CEE_Force_Recon_NCO
{
	scope = 2;
	displayName = "(41st) Enlisted Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Enlisted = "Chest";
    };
};

class GVEST(Sergeant_Chest): SWLB_CEE_Force_Recon_NCO
{
	scope = 2;
	displayName = "(41st) Sergeant Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Sergeant = "Chest";
    };
};

class GVEST(Officer_Chest): SWLB_CEE_Force_Recon_Officer
{
	scope = 2;
	displayName = "(41st) Officer Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Officer = "Chest";
    };
};

class GVEST(Base_Engineer): SWLB_CEE_Engineer_Vest
{
	scope = 2;
	displayName = "(41st) Base Engineer Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Base = "Engineer";
    };
};

class GVEST(Enlisted_Engineer): SWLB_CEE_Engineer_Vest_NCO
{
	scope = 2;
	displayName = "(41st) Enlisted Engineer Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Enlisted = "Engineer";
    };
};

class GVEST(Officer_Engineer): SWLB_CEE_Engineer_Vest_Officer
{
	scope = 2;
	displayName = "(41st) Officer Engineer Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Officer = "Engineer";
    };
};

class GVEST(Base_Recon): SWLB_clone_recon_armor
{
	scope = 2;
	displayName = "(41st) Base Recon Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Base = "Recon";
    };
};

class GVEST(Sergeant_Recon): SWLB_clone_recon_nco_armor
{
	scope = 2;
	displayName = "(41st) Sergeant Recon Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Sergeant = "Recon";
    };
};

class GVEST(Officer_Recon): SWLB_clone_recon_officer_armor
{
	scope = 2;
	displayName = "(41st) OFficer Recon Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Officer = "Recon";
    };
};

class GVEST(Base_Heavy): ls_gar_heavy_vest
{
	scope = 2;
	displayName = "(41st) Base Heavy Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Base = "Heavy";
    };
};

class GVEST(Enlisted_Heavy): ls_gar_heavyAlt_vest
{
	scope = 2;
	displayName = "(41st) Enlisted Heavy Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Enlisted = "Heavy";
    };
};

class GVEST(Officer_Heavy): ls_gar_airborneOfficer_vest
{
	scope = 2;
	displayName = "(41st) Officer Heavy Vest";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};

	class XtdGearInfo {
        model = QGVAR(Vest);
        Officer = "Heavy";
    };
};

class GVEST(Suspenders): SWLB_clone_specialist_armor
{
	scope = 2;
	displayName = "(41st) Suspenders";

	class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;
		vestType = "Rebreather";

        VEST_PROTECTION;
	};
};

