class CfgVehicles
{
	class ThingX;
    class ReammoBox_F;
    class NATO_Box_Base;
	class 3AS_Small_Terminal_Black_Prop;

	class RRI_Crate: NATO_Box_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "[41st] ResuplyCrate (Empty)";
		model = QPATHTOF(data\crate\RRI_crate.p3d);

		ace_cargo_canLoad = 1;
		ace_cargo_size = 2;

		editorCategory = QEGVAR(edcat,EC);
		editorSubcategory = QEGVAR(edsubcat,Supplies);

		maximumLoad = SUPPLIES_MAXLOAD;
        accuracy = 1000;

		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\crate\crate.rvmat)};
		hiddenSelectionsTextures[] = {QPATHTOF(data\crate\Crate_co.paa)};
	};
	#include "cfg\supplies.hpp"

	class StaticMGWeapon;
	class 3AS_Rho_Crate_Base_F: StaticMGWeapon
	{
		class ACE_Actions;
	};
	class 3AS_Rho_Crate_REP_Transport;
	class 3AS_Rho_Crate_REP_Barracks: 3AS_Rho_Crate_Base_F
	{
		class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
	};
	class 3AS_Rho_Crate_REP_Medical;
	#include "cfg\rhocrate.hpp"

	class Items_base_F;
	class 3AS_FOB_Banner_Prop;
	#include "cfg\props.hpp"
};

