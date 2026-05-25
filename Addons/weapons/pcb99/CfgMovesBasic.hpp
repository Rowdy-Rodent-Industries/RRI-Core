class CfgMovesBasic
{
	class ManActions
	{
		GestureReload_mti_pcb = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReload_mti_pcb[] = {"GestureReload_mti_pcb","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReload_mti_pcb = "RifleReloadProneMX";

		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_mti_pcb[] = {"GestureReload_mti_pcbAnimDrive","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_mti_pcb[] = {"GestureReload_mti_pcb","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReload_mti_pcb[] = {"GestureReload_mti_pcb","Gesture"};
		};
	};
};
