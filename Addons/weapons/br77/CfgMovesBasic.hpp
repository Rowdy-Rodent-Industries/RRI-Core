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
		GVAR(BR77_Reload) = QGVAR(BR77_Reload);
		GVAR(BR77_Reload_Context) = QGVAR(BR77_Reload_Context);
		GVAR(BR77_Reload_Prone) = QGVAR(BR77_Reload_Prone);
		
		GVAR(BR77_Fire) = QGVAR(BR77_Fire);
		GVAR(BR77_Fire_Context) = QGVAR(BR77_Fire_Context);
		GVAR(BR77_Fire_Prone) = QGVAR(BR77_Fire_Prone);
	};
	class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;
        class NoActions : ManActions {
			GVAR(BR77_Reload)[] = { QGVAR(BR77_Reload), "Gesture" };
			GVAR(BR77_Fire)[] = { QGVAR(BR77_Fire), "Gesture" };
		};
		class RifleProneActions : RifleBaseStandActions {
			GVAR(BR77_Reload)[] = { QGVAR(BR77_Reload_Prone), "Gesture" };
			GVAR(BR77_Fire)[] = { QGVAR(BR77_Fire_Prone), "Gesture" };
		};
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			GVAR(BR77_Reload)[] = { QGVAR(BR77_Reload_Context), "Gesture" };
			GVAR(BR77_Fire)[] = { QGVAR(BR77_Fire_Context), "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			GVAR(BR77_Reload)[] = { QGVAR(BR77_Reload_Context), "Gesture" };
			GVAR(BR77_Fire)[] = { QGVAR(BR77_Fire_Context), "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			GVAR(BR77_Reload)[] = { QGVAR(BR77_Reload), "Gesture" };
			GVAR(BR77_Fire)[] = { QGVAR(BR77_Fire), "Gesture" };
		};
	};
};

