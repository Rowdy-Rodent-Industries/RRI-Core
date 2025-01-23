class CfgVehicles
{
	class GVAR(LogiBox_Aircraft): MTI_LogiBox_aircraft
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Aircraft Left";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Airact";
	};

	class GVAR(LogiBox_Aircraft_alt): MTI_LogiBox_aircraft_alt
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Aircraft Right";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Airact";
	};

	class GVAR(LogiBox_Vehicles): MTI_LogiBox_vehicles
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Vehicles (Left)";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Vehicles";
	};

	class GVAR(LogiBox_Vehicles_Alt): MTI_LogiBox_vehicles_alt
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Vehicles (Right)";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Vehicles";
	};

	class GVAR(Logibox_crates): MTI_LogiBox_crates
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Crates (Left)";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Crates";
	};

	class GVAR(Logibox_crates_alt): MTI_LogiBox_crates_alt
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] LogiBox Crates (Right)";

		editorCategory = QEGVAR(edcat,EC);
		editorSubCategory = QEGVAR(edsubcat,Logi);

		GVAR(type) = "RRI_Crates";
	};
};