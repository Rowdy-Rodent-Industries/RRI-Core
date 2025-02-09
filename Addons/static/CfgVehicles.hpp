class CfgVehicles
{
	class NATO_Box_Base;
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
	#include "cfg\props.hpp"
};

