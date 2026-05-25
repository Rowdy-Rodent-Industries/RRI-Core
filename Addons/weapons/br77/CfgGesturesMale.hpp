
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class States
	{
		class GVAR(BR77_Reload): Default
		{
			canPullTrigger=0;
			speed=-3.5;
			file=QPATHTOEF(weapons,br77\anims\BR77_Reload.rtm);
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=0;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.08,0,0.96,0,0.99,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.02,0,0.98,0,0.995,1};
			rightHandIKEnd=1;
			canReload=0;
			mask = "handsWeapon";
			headBobStrength=-0.1;
			headBobMode=1;
		};
		class GVAR(BR77_Reload_Prone): GVAR(BR77_Reload)
		{
			speed=-3.5;
			file=QPATHTOEF(weapons,br77\anims\BR77_Reload_Prone.rtm);
			mask = "handsWeapon_context";
			headBobStrength=0;
			headBobMode=0;
			leftHandIKCurve[] = {0.188679,1,0.218868,0,0.660377,0,0.698113,1};
			rightHandIKCurve[] = {0,1,0.067925,0,0.143396,0,0.177358,1,0.732075,1,0.754717,0,0.94717,0,0.988679,1};
		};
		class GVAR(BR77_Reload_Context): GVAR(BR77_Reload)
		{
			mask = "handsWeapon_context";
		};
		class GVAR(BR77_Fire): Default
		{
			canPullTrigger=0;
			speed=-1;
			file=QPATHTOEF(weapons,br77\anims\BR77_Fire.rtm);
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.05,0,0.98,0,0.995,1};
			rightHandIKEnd=1;
			canReload=0;
			mask = "handsWeapon";
			headBobStrength=0;
			headBobMode=0;
		};
		class GVAR(BR77_Fire_Prone): GVAR(BR77_Fire)
		{
			file=QPATHTOEF(weapons,br77\anims\BR77_Fire_Prone.rtm);
			mask = "handsWeapon";
			headBobStrength=0;
			headBobMode=0;
		};
		class GVAR(BR77_Fire_Context): GVAR(BR77_Fire)
		{
			mask = "handsWeapon_context";
		};
	};
};
