class CfgGesturesMale
{
    class Default;
    class States
    {
        class GestureReloadBase;
		class GestureReload_mti_pcb: GestureReloadBase
		{
			file = QPATHTOF(data\anims\pcb_reload.rtm);
			speed = 0.3;
			mask = "handsWeapon";
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[]  = {0,1, 0.1,0, 0.9,0, 1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureReload_mti_pcbContext: GestureReload_mti_pcb
		{
			mask = "handsWeapon_context";
		};
		class GestureReload_mti_pcbContextAnimDrive: GestureReload_mti_pcbContext
		{
			mask = "handsWeapon_contextAnimDrive";
		};
    };
};
