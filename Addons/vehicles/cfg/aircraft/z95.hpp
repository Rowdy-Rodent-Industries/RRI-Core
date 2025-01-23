class GVAR(Z95): 3AS_Z95_VTOL_Dynamic_Base_F
{
	scope = 2;
	scopecurator = 2;

	author = AUTHOR;
	displayName = "(41st) Z-95 Headhunter";
	displayNameShort = "(41st) Z-95";

	crew = "3AS_Clone_P2_Pilot";

	side = 1;
	faction = QEGVAR(faction,41st);
	editorSubcategory = QGVAR(edsubcat_Fixed);

	model = "3AS\3as_Z95\Model\Z95_Headhunter.p3d";
	hiddenselections[]=
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[]=
	{
		"3AS\3AS_Z95\Data\green_co.paa",
		"3AS\3AS_Z95\Data\cockpit_co.paa",
		"3AS\3AS_Z95\data\glass\glass_ca"
	};

	weapons[] = {QGVAR(AA_Cannon),"ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
	magazines[] = {
        QGVAR(AA_Cannon_Mag), QGVAR(AA_Cannon_Mag),
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple",
        "ls_mag_240Rnd_CMFlareChaff_purple", "ls_mag_240Rnd_CMFlareChaff_purple",
        "Laserbatteries"
    };

	class pilotCamera
    {
        class OpticsIn
        {
            class Wide
            {
                initAngleX = 0;
                minAngleX = 0;
                maxAngleX = 0;
                initAngleY = 0;
                minAngleY = 0;
                maxAngleY = 0;
                initFov = 0.25;
                minFov = 0.25;
                maxFov = 0.25;
                directionStabilized = 1;
                visionMode[] = {"Normal","Ti","NVG"};
                thermalMode[] = {0,1};
                gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                opticsPPEffects[] = {};
            };
            class Medium: Wide
            {
                opticsDisplayName = "MFOV";
                initFov = 0.1;
                minFov = 0.1;
                maxFov = 0.1;
                gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
            };
            class Narrow: Wide
            {
                initFov = 0.02;
                minFov = 0.02;
                maxFov = 0.02;
                gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
            };
            class Close: Wide
            {
                initFov = 0.005;
                minFov = 0.005;
                maxFov = 0.005;
            };
            showMiniMapInOptics = 1;
            showUAVViewInOptics = 0;
            showSlingLoadManagerInOptics = 0;
        };
        minTurn = -360;
        maxTurn = 360;
        initTurn = 0;
        minElev = -10;
        maxElev = 90;
        initElev = 0;
        maxXRotSpeed = 0.3;
        maxYRotSpeed = 0.3;
        maxMouseXRotSpeed = 0.5;
        maxMouseYRotSpeed = 0.5;
        pilotOpticsShowCursor = 1;
        controllable = 1;
    };

    class Components: Components {
        class TransportPylonsComponent {
            UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";

            class pylons {
                class pylons1 {
                    hardpoints[] = {QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 10;
                    maxweight = 300;
                    UIposition[] = {0.6, 0.45};
                };

                class pylons2: pylons1 {
                    UIposition[] = {0.05, 0.45};
                    mirroredMissilePos = 1;
                };

                class pylons3: pylons1 {
                    hardpoints[] = {QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 9;
                    maxweight = 2500;
                    UIposition[] = {0.55, 0.35};
                };

                class pylons4: pylons3 {
                    UIposition[] = {0.1, 0.35};
                    mirroredMissilePos = 3;
                };

                class pylons5: pylons1 {
                    hardpoints[] = {QGVAR(AA_Pylon),QGVAR(AA_Heavy_Pylon)};
                    attachment = QGVAR(AA_Typhoon);
                    priority = 7;
                    maxweight = 5000;
                    UIposition[] = {0.5, 0.25};
                };

                class pylons6: pylons5 {
                    UIposition[] = {0.15, 0.25};
                    mirroredMissilePos = 5;
                };

                class Pylons7 {
                    hardpoints[] = {"z95_CANON_PYLON"};
                    priority = 5;
                    attachment = "3as_PylonWeapon_Z95_240Rnd_Heavy_Shells";
                    maxweight = 4000;
                    UIposition[] = {0.325, 0.15};
                };
            };

            class presets {
                class empty {
                    displayName = "Empty";
                    attachment[] = {};
                };
                class Default {
				displayName = "Default";
				attachment[] = {QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon),QGVAR(AA_Typhoon)};
				};
            };
        };
    };
};