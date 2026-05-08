
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class States
	{
		class GVAR(zh_Reload): Default
		{
			speed=-3.8;
			file=QPATHTOF(data\anim\zh_reload.rtm);
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.1,0,0.916,0,0.951000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			canReload=0;
			mask = "handsWeapon";
			headBobStrength=-0.2;
			headBobMode=1;
		};
		class GVAR(zh_Reload_Prone): GVAR(zh_Reload)
		{
			file = "a3\\anims_f_exp\\data\\anim\\sdr\\gst\\gesturereloadakmprone.rtm";
			mask = "handsWeapon_context";
			headBobStrength=0;
			headBobMode=1;
		};
		class GVAR(zh_Reload_Context): GVAR(zh_Reload)
		{
			mask = "handsWeapon_context";
		};
	};
};
