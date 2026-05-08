

class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class States
	{
		class GVAR(causality_Reload): Default
		{
			canPullTrigger=0;
			speed=-4.7;
			file=QPATHTOF(data\anim\Causality_Reload.rtm);
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.1,0,0.9,0,0.94,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.1,0,0.97,0,0.999,1};
			rightHandIKEnd=1;
			canReload=0;
			mask = "handsWeapon";
			headBobStrength=-0.05;
			headBobMode=1;
		};
		class GVAR(causality_Reload_Prone): GVAR(causality_Reload)
		{
			file=QPATHTOF(data\anim\Causality_Reload_Prone.rtm);
			mask = "handsWeapon_context";
			headBobStrength=0;
			headBobMode=1;
		};
		class GVAR(causality_Reload_Context): GVAR(causality_Reload)
		{
			mask = "handsWeapon_context";
		};
	};
};
