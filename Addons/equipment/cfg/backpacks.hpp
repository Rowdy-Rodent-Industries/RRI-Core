class rri_havoc_backpack_base: SFA_Havoc_backpack
{
    author = AUTHOR;
    scope = 2;
    scopeArsenal = 2;
    displayName = "[RRI] Havoc Backpack";

    tf_hasLRradio = 0;

	maximumLoad = BACKPACK_MAXLOAD;

	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\infantry_backpack_co.paa)};
};

class rri_havoc_backpack_lr: SFA_Havoc_RTO_backpack {
	displayName = "[RRI] Havoc Trooper Long-Range Radio";

	tf_dialog = "anarc210_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = LR_RANGE;
	tf_subtype = "digital_lr";

	maximumLoad = BACKPACK_MAXLOAD;

	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\rto_backpack_co.paa)};
};

class rri_havoc_backpack_at: SFA_Havoc_AT_backpack
{
	scope = 2;
	displayName = "[RRI] Havoc Trooper AT Backpack ";

	tf_hasLRradio = 0;

	maximumLoad = BACKPACK_MAXLOAD;

	hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\at_backpack_co.paa)};
};

class rri_havoc_backpack_belt: rri_havoc_backpack_base
{
	scope = 2;
	displayName = "[RRI] Republic Trooper Belt Bag";

	model="\ls\core\addons\characters_clone\backpacks\beltbag\ls_backpack_clone_beltbag.p3d";
    hiddenSelections[]=
    {
        "camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "\ls\core\addons\characters_clone\backpacks\beltbag\data\camo1_co.paa"
    };
};

class rri_havoc_backpack_medic: rri_havoc_backpack_base
{
	scope = 2;
	displayName = "[RRI] Havoc Trooper Medic Backpack";
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Backpacks\Medic_Backpack_CO.paa)
	};
};
