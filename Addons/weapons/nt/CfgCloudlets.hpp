class CfgCloudlets
{
	class Default;
	class GVAR(nt_smoke): Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.5,1.0};
		color[]=
		{
			{1,1,1,0.30000001},
			{1,1,1,0.15000001},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.80000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		emissiveColor[] = {{ 1, 1, 1, 1 }};
	};
};

class GVAR(nt_smoke)
{
	class GVAR(nt_smoke)
	{
		simulation="particles";
		type=QGVAR(nt_smoke);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
