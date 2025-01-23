class GBACKPACK(Base): ls_gar_standard_backpack
{
	scope = 2;
	displayName = "[41st] Standard Backpack";
	maximumLoad = 200;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Base";
    };
};

class GBACKPACK(Medic): ls_gar_heavyMedic_backpack
{
	scope = 2;
	displayName = "[41st] Medic Backpack";
	maximumLoad = 250;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Medic";
    };
};

class GBACKPACK(Heavy): ls_gar_heavy_backpack
{
	scope = 2;
	displayName = "[41st] Heavy Backpack";
	maximumLoad = 250;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Heavy";
    };
};

class GBACKPACK(Rocket): ls_gar_rocket_backpack
{
	scope = 2;
	displayName = "[41st] Rocket Backpack";
	maximumLoad = 250;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Rocket";
    };
};

class GBACKPACK(LR): ls_gar_mediumRadio_backpack
{
	scope = 2;
	displayName = "[41st] LongRange Backpack";
	maximumLoad = 320;
	mass = 40;
	tf_dialog = "SWLB_clone_rto_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "LR";
    };
};

class GBACKPACK(Mini): SWLB_CEE_Recon_RTO_Backpack
{
	scope = 2;
	displayName = "[41st] Mini Backpack";
	maximumLoad = 320;
	mass = 40;
	tf_dialog = "SWLB_clone_rto_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 25000;
	tf_subtype = "digital_lr";

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Mini";
    };
};

class GBACKPACK(BeltBag): SWLB_clone_bag_belt
{
	scope = 2;
	displayName = "[41st] Belt Bag";
	maximumLoad = 200;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "BeltBag";
    };
};

class GBACKPACK(Bags): SWLB_clone_bag
{
	scope = 2;
	displayName = "[41st] Bags";
	maximumLoad = 200;
	mass = 40;

	class XtdGearInfo {
        model = QGVAR(backpacks);
        camo = "Bags";
    };
};

