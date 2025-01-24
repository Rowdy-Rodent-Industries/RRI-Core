class GVAR(LAAT_LE): 3AS_Patrol_LAAT_Base {
	scope = 2;
	author = AUTHOR;
	displayName = "[41st] LAAT/LE";
	displayNameShort = "[41st] LAAT/LE";

	weapons[] = {"ls_weapon_CMFlareLauncher", "MTI_SmokeLauncher"};
    magazines[] = {
        "ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple","ls_mag_240Rnd_CMFlareChaff_purple",
        "MTI_SmokeLauncherMag", "MTI_SmokeLauncherMag"
    };

	crew = "3AS_Clone_P2_Pilot";
    typicalcargo[] = {"3AS_Clone_P2_Pilot"};
    side = 1;

	faction = QEGVAR(faction,41st);
	editorSubcategory = QEGVAR(edsubcat,heli);
	vehicleclass = "helictoper";

	ace_cargo_hasCargo = 1;
    ace_cargo_space = 25;

	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
};