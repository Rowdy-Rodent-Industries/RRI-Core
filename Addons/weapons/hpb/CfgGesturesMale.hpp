
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class States
	{
		class GVAR(hpb_Reload): Default
		{
			speed=-3.8;
			file=QPATHTOF(data\anim\hpb_reload.rtm);
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
			headBobStrength=-0.1;
			headBobMode=1;
		};
		class GVAR(hpb_Reload_Prone): GVAR(hpb_Reload)
		{
			file = "a3\anims_f\data\anim\sdr\gst\gesturereloadmk20prone.rtm";
			mask = "handsWeapon_context";
		};
		class GVAR(hpb_Reload_Context): GVAR(hpb_Reload)
		{
			mask = "handsWeapon_context";
		};
	};
};
