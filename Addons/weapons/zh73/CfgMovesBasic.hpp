class CfgMovesBasic
{
	class Default;
	class StandBase;
	class HealBase: Default
	{
		disableWeapons=1;
		disableWeaponsLong=1;
		showWeaponAim=0;
		canPullTrigger=0;
		duty=0.2;
		limitGunMovement=0;
		aiming="empty";
		aimingBody="empty";
		actions="HealActionBase";
		looped=0;
	};
	class ManActions
	{
		GVAR(zh_Reload) = QGVAR(zh_Reload);
		GVAR(zh_Reload_Context) = QGVAR(zh_Reload_Context);
		GVAR(zh_Reload_Prone) = QGVAR(zh_Reload_Prone);
	};
	class Actions {
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions : ManActions {
			GVAR(zh_Reload)[] = { QGVAR(zh_Reload), "Gesture" };
		};
		class RifleProneActions : RifleBaseStandActions {
			GVAR(zh_Reload)[] = { QGVAR(zh_Reload_Prone), "Gesture" };
		};
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			GVAR(zh_Reload)[] = { QGVAR(zh_Reload_Context), "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			GVAR(zh_Reload)[] = { QGVAR(zh_Reload_Context), "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			GVAR(zh_Reload)[] = { QGVAR(zh_Reload), "Gesture" };
		};
	};
};
