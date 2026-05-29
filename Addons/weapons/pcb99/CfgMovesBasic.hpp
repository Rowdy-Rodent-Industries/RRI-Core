class CfgMovesBasic
{
	class ManActions
	{
		GestureReload_rri_pcb = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReload_rri_pcb[] = {"GestureReload_rri_pcb","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReload_rri_pcb = "RifleReloadProneMX";

		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_rri_pcb[] = {"GestureReload_rri_pcbAnimDrive","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_rri_pcb[] = {"GestureReload_rri_pcb","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_rri_pcb[] = {"GestureReload_rri_pcb","Gesture"};
		};
	};
};
