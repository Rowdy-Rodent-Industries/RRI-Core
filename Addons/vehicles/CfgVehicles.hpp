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

	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class 3AS_Delta7_Base_F: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
	};
	#include "cfg\aircraft\delta.hpp"

	class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class Components;
        class TextureSources;
        class pilotCamera;
        class Turrets;
        class UserActions;
        class ACE_SelfActions;
    };
	#include "cfg\aircraft\bltb.hpp"

	class Car;
	class Car_F: Car
    {
        class NewTurret;
        class EventHandlers;
    };
    class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class CommanderOptics;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
		class Sounds;
		class HitPoints;
	};
    class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
    };
	class 3AS_ATTE_Base: APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurret
			{
				class ViewGunner;
			};
			class MainTurretFront:MainTurretTop
			{
				class ViewGunner;
			};
			class MainTurretBack: MainTurretFront
			{
				class ViewGunner;
			};
		};
	};
	#include "cfg\tank\atte.hpp"

	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class CargoTurret;
		class Components;
		class AnimationSources;
		class ACE_SelfActions: ACE_SelfActions
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3as_saber_01_Base: Tank_F
	{
		class HitPoints:HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};
			class Mainturret_top: MainTurret_bottom
			{
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};
		};
	};
	class 3AS_Saber_03_Base: 3as_saber_01_Base
	{
		class HitPoints:HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};
			class MainTurret_top: MainTurret_bottom
			{
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};
		};
	};

	class WM_iftx_01_Base: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret_bottom: MainTurret {
                class OpticsIn: Optics_Gunner_APC_01
                {
                    class Wide: Wide
                    {
                    };
                    class Medium: Medium
                    {
                    };
                    class Narrow: Narrow
                    {
                    };
                };
            };
            class MainTurret_top: NewTurret {};
        };
    };
	#include "cfg\tank\saber.hpp"

	class 3as_ATAP_base: APC_Wheeled_01_base_F
	{
		class MainTurret1: MainTurret
		{
			class ViewGunner;
		};
		class MainTurretTop: MainTurret1
		{
			class ViewGunner;
		};
		class MainTurretBottom: MainTurretTop
		{
			class ViewGunner;
		};
	};
	#include "cfg\tank\atap.hpp"

	class 3AS_PX10_REP_F;
	class 3AS_PX10_REP_UP;
	class 3AS_PX10_REP_R3;
	#include "cfg\tank\px10.hpp"

	class 3AS_RX200_Base;
	#include "cfg\tank\rx200.hpp"

	class 3AS_Patrol_LAAT_Base;
	#include "cfg\aircraft\laatle.hpp"
};