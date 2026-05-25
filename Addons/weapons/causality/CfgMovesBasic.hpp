
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
		GVAR(causality_Reload) = QGVAR(causality_Reload);
		GVAR(causality_Reload_Context) = QGVAR(causality_Reload_Context);
		GVAR(causality_Reload_Prone) = QGVAR(causality_Reload_Prone);
	};
	class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;
        class NoActions : ManActions {
			GVAR(causality_Reload)[] = { QGVAR(causality_Reload), "Gesture" };
		};
		class RifleProneActions : RifleBaseStandActions {
			GVAR(causality_Reload)[] = { QGVAR(causality_Reload_Prone), "Gesture" };
		};
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			GVAR(causality_Reload)[] = { QGVAR(causality_Reload_Context), "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			GVAR(causality_Reload)[] = { QGVAR(causality_Reload_Context), "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			GVAR(causality_Reload)[] = { QGVAR(causality_Reload), "Gesture" };
		};
	};
};
