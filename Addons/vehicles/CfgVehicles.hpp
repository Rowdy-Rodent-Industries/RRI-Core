class CfgVehicles 
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class UserActions;
		class CargoTurret;
	};
	class 3as_laat_Base: B_Heli_Attack_01_base_F
	{
		class ACE_SelfActions;
		class UserActions: UserActions
		{
			class rampOpen;
			class rampClose;
		};
		class components: components
		{
		};
		class Turrets: Turrets
		{
			class Copilot;
			class LeftDoorgun;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};
	#include "cfg\aircraft\laati.hpp"
    #include "cfg\aircraft\laatc.hpp"

	class 3AS_Nuclass_Blank;
	class 3AS_Rho_REP_F;
	#include "cfg\aircraft\nu.hpp"

	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets;
		class Components;
		class ACE_SelfActions;
		class AnimationSources;
	};

	#include "cfg\aircraft\arc.hpp"

	class 3as_Z95_VTOL_Base;
	class 3AS_Z95_VTOL_Dynamic_Base_F: 3as_Z95_VTOL_Base
	{
		class Components;
		class ACE_SelfActions;
	};
	class 3AS_Z95_VTOL_Dynamic_Base_F_H: 3AS_Z95_VTOL_Dynamic_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
		class ACE_SelfActions: ACE_SelfActions
		{
		};
	};
	#include "cfg\aircraft\z95.hpp"
};