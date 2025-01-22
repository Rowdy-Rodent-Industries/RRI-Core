class GVAR(RPS6): JLTS_RPS6
{
	author = AUTHOR;
	displayName = "(41st) RPS-6";
	descriptionShort = "Base Rocket Launcher used by the 41st Elite Corp";
	baseWeapon = QGVAR(RPS6);
	magazines[] = {QGVAR(RPS6_Mag)};

	initSpeed = -1.2;

	JLTS_friedItem = "";
	JLTS_hasElectronics = 0;
	JLTS_hasEMPProtection = 1;
};

class GVAR(RPS6_D) : 3AS_RPS6_Base {
	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable)";
	baseWeapon = QGVAR(RPS6_D);
	magazines[] = {QGVAR(RPS6_Mag)};
};

class GVAR(RPS6_D_Loaded) : GVAR(RPS6_D) {
	scope = 2;

	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable)";
	baseWeapon = QGVAR(RPS6_D_Loaded);
	magazines[] = {"CBA_FakeLauncherMagazine"};
};

class GVAR(RPS6_D_Used): GVAR(RPS6_D) {
	author = AUTHOR;
    displayName = "(41st) RPS-6 (Disposable, Used)";
	baseWeapon = QGVAR(RPS6_D_Used);
	magazines[] = {"CBA_FakeLauncherMagazine"};
};