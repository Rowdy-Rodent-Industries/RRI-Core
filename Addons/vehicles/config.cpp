#include "script_component.hpp"

#include "config_lists.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {VEHICLE_LIST};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rri_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

	class Mode_SemiAuto;
	class Mode_Burst;
    class Mode_FullAuto;
    class CowsSlot;

    class SensorTemplatePassiveRadar;
    class SensorTemplateAntiRadiation;
    class SensorTemplateActiveRadar;
    class SensorTemplateIR;
    class SensorTemplateVisual;
    class SensorTemplateMan;
    class SensorTemplateLaser;
    class SensorTemplateNV;
    class SensorTemplateDataLink;
    class DefaultVehicleSystemsDisplayManagerLeft
    {
        class components;
    };
    class DefaultVehicleSystemsDisplayManagerRight
    {
        class components;
    };
    class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
    {
        class components;
    };
    class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
    {
        class components;
    };

    class RCWSOptics;
    class Optics_Armored;
    class Optics_Gunner_APC_01: Optics_Armored
    {
        class Wide;
        class Medium;
        class Narrow;
    };

    class Extended_init_EventHandlers
    {
        class GVAR(LAAT)
        {
            class laat_init_eh
            {
                init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor";
            };
        };
        class GVAR(LAATMK2)
        {
            class laat_init_eh
            {
                init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor";
            };
        };
        class GVAR(LAAT_LE)
        {
            class laat_init_eh
            {
                init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor";
            };
        };
        class GVAR(LAATC)
        {
            class laat_init_eh
            {
                init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor";
            };
        };
    };

    #include "CfgWeapons.hpp"
    #include "CfgMagazines.hpp"
    #include "CfgAmmo.hpp" 
    #include "CfgVehicles.hpp"