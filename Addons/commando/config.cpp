#include "script_component.hpp"
#include "config_lists.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QADDON;
        name = COMPONENT_NAME;
        units[] = {
            UNIT_LIST
        };
        weapons[] = {
            ITEM_LIST
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_loadorder",
            "jlts_core"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "XtdGearModels.hpp"

class CfgSounds
{
    class GVAR(shield_activate)
    {
        sound[] = {"", 1, 1, 100};
        titles[] = {};
    };
    class GVAR(shield_full)
    {
        sound[] = {"", 1, 1, 100};
        titles[] = {};
    };
    class GVAR(shield_half)
    {
        sound[] = {"", 1, 1, 100};
        titles[] = {};
    };
    class GVAR(shield_breach)
    {
        sound[] = {"", 1, 1, 100};
        titles[] = {};
    };
};

class RscPicture;
class RscStructuredText;

class RscTitles
{
    class RRI_CommandoShieldHUD
    {
        idd = 9100;
        duration = 1e+11;
        movingEnable = 0;
        fadein = 0;
        fadeout = 0;
        onLoad  = "uiNamespace setVariable ['RRI_CommandoShieldHUD', _this select 0]";
        onUnload = "uiNamespace setVariable ['RRI_CommandoShieldHUD', displayNull]";
        class controls
        {
            // Dark track behind the bar
            class ShieldBarBG : RscStructuredText
            {
                idc = 3100;
                text = "";
                // Bottom-left, above the default A3 gear widget
                x = "safezoneX + safezoneW * 0.015";
                y = "safezoneY + safezoneH * 0.875";
                w = "safezoneW * 0.22";
                h = "safezoneH * 0.018";
                colorBackground[] = {0.0, 0.05, 0.15, 0.80};
            };
            // Cyan/blue fill — SQF resizes width each tick
            class ShieldBarFill : RscStructuredText
            {
                idc = 3101;
                text = "";
                x = "safezoneX + safezoneW * 0.015";
                y = "safezoneY + safezoneH * 0.875";
                w = "safezoneW * 0.22";
                h = "safezoneH * 0.018";
                colorBackground[] = {0.0, 0.70, 1.0, 0.90};
            };
            // "SHIELD" label above the bar
            class ShieldLabel : RscStructuredText
            {
                idc = 3102;
                text = "<t align='left' size='0.45' color='#00BFFF' font='PuristaMedium'>SHIELD</t>";
                x = "safezoneX + safezoneW * 0.015";
                y = "safezoneY + safezoneH * 0.854";
                w = "safezoneW * 0.12";
                h = "safezoneH * 0.022";
                colorBackground[] = {0, 0, 0, 0};
            };
            // Numeric readout "50 / 50" to the right of the label
            class ShieldValue : RscStructuredText
            {
                idc = 3103;
                text = "";
                x = "safezoneX + safezoneW * 0.09";
                y = "safezoneY + safezoneH * 0.854";
                w = "safezoneW * 0.145";
                h = "safezoneH * 0.022";
                colorBackground[] = {0, 0, 0, 0};
            };
            // Status tag ("ACTIVE" / "OFFLINE" / "RECHARGING")
            class ShieldStatus : RscStructuredText
            {
                idc = 3104;
                text = "";
                x = "safezoneX + safezoneW * 0.015";
                y = "safezoneY + safezoneH * 0.895";
                w = "safezoneW * 0.22";
                h = "safezoneH * 0.018";
                colorBackground[] = {0, 0, 0, 0};
            };
        };
    };
};
