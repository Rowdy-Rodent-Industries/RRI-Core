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
		GVAR(hpb_Reload) = QGVAR(hpb_Reload);
		GVAR(hpb_Reload_Context) = QGVAR(hpb_Reload_Context);
		GVAR(hpb_Reload_Prone) = QGVAR(hpb_Reload_Prone);
	};
	class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;
        class NoActions : ManActions {
			GVAR(hpb_Reload)[] = { QGVAR(hpb_Reload), "Gesture" };
		};
		class RifleProneActions : RifleBaseStandActions {
			GVAR(hpb_Reload)[] = { QGVAR(hpb_Reload_Prone), "Gesture" };
		};
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
			GVAR(hpb_Reload)[] = { QGVAR(hpb_Reload_Context), "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
			GVAR(hpb_Reload)[] = { QGVAR(hpb_Reload_Context), "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
			GVAR(hpb_Reload)[] = { QGVAR(hpb_Reload), "Gesture" };
		};
	};
};
