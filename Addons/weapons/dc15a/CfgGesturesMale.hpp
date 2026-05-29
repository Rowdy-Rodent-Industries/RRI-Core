class CfgGesturesMale
{
    class Default;
    class States
    {
        class GestureReloadBase;
		class GestureReload_rri_dc15a: GestureReloadBase
		{
			file = QPATHTOF(data\anim\dc15a_reload.rtm);
			speed = 0.3;
			mask = "handsWeapon";
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[]  = {0,1, 0.1,0, 0.9,0, 1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureReload_rri_dc15aContext: GestureReload_rri_dc15a
		{
			mask = "handsWeapon_context";
		};
		class GestureReload_rri_dc15aContextAnimDrive: GestureReload_rri_dc15aContext
		{
			mask = "handsWeapon_contextAnimDrive";
		};
    };
};
