class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class States
	{
		class GVAR(fc36_Reload): Default
		{
			speed=-4.5;
			file=QPATHTOF(data\anims\fc36_reload.rtm);
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.04,0,0.87,0,0.921000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			canReload=0;
			mask = "handsWeapon";
			headBobStrength=-0.1;
			headBobMode=1;
		};
		class GVAR(fc36_Reload_Prone): GVAR(fc36_Reload)
		{
			file = "a3\anims_f\data\anim\sdr\wop\pne\stp\rld\rfl\awopppnemstpsrldwrfldnon.rtm";
		};
		class GVAR(fc36_Reload_Context): GVAR(fc36_Reload)
		{
			mask = "handsWeapon_context";
		};
	};
};
