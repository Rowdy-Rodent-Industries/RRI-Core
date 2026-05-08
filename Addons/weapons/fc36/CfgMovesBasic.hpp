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

		GVAR(fc36_Reload) = QGVAR(fc36_Reload);
		GVAR(fc36_Reload_Context) = QGVAR(fc36_Reload_Context);
		GVAR(fc36_Reload_Prone) = QGVAR(fc36_Reload_Prone);
	};
	class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;
        class NoActions : ManActions {
			GVAR(fc36_Reload)[] = { QGVAR(fc36_Reload), "Gesture" };
		};
		class RifleProneActions : RifleBaseStandActions {
			GVAR(fc36_Reload)[] = { QGVAR(fc36_Reload_Prone), "Gesture" };
		};
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			GVAR(fc36_Reload)[] = { QGVAR(fc36_Reload_Context), "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			GVAR(fc36_Reload)[] = { QGVAR(fc36_Reload_Context), "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			GVAR(fc36_Reload)[] = { QGVAR(fc36_Reload), "Gesture" };
		};
	};
};
