class SmokeShellWhiteEffect;

class CfgCloudlets
{
    class Default;
	class GrenadeExp;
	class ExploAmmoSmoke;
	class SmokeShellWhite;
	class SmokeShellWhite2;
    class GVAR(Smoke_Base): Default 
    {
        interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleEffects = "ExplosionShardsFire";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]= {1,1,2.8};
		color[]= {{1,0,0,0.08},{0,1,0,0.08},{0,0,1,0.08},{1,0,0,0.08},{0,1,0,0.08},{0,0,1,0.08}};
		animationSpeed[]={5,5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
    };

	class GVAR(Smoke_Red): GVAR(Smoke_Base)
	{
		color[] =
		{
			{1,0,0,0.07},
			{1,0,0,0.07},
			{1,0,0,0.07},
			{0,0,0,0.004},
			{0,0,0,0.003}
		};
	};

	class GVAR(Smoke_Pink): GVAR(Smoke_Base)
	{
		color[] =
		{
			{0.68,0,0.63,0.8},
			{0,0,0,0.5},
			{0.68,0,0.63,0.004},
			{0,0,0,0.003}
		};
	};

	class GVAR(Smoke_Blue): GVAR(Smoke_Base)
	{
		color[] =
		{
			{0,0,1,0.07},
			{1,0,1,0.07},
			{0,0,1,0.07},
			{0,0,0.75,0.004},
			{0,0,0,0.003}
		};
	};

	class GVAR(Smoke_Shell_Base): SmokeShellWhiteEffect
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 5;
		rubbing = 0.05;
		size[] = {2, 2, 12};
		color[] = {{0.6,0.6,0.6,0.2},{0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0}};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

    class GVAR(40mm_cluster_smoke): ExploAmmoSmoke {
		size[] = {0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,1};
		lifeTime = 2.25;
		positionVar[] = {0,0.5,0.1,0.15};
	};

	class GVAR(Smoke_Impact_White_Effect): SmokeShellWhite {
		color[] = {{0.6, 0.6, 0.6, 0.2}, {0.6, 0.6, 0.6, 0.05}, {0.6, 0.6, 0.6, 0}};
		colorCoef[] = {1, 1, 1, 1};
	};

	class GVAR(Smoke_Impact_Red_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.8438, 0.1383, 0.1353, 1};
	};

	class GVAR(Smoke_Impact_Green_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.2125, 0.6258, 0.4891, 1};
	};

	class GVAR(Smoke_Impact_Yellow_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.9883, 0.8606, 0.0719, 1};
	};

	class GVAR(Smoke_Impact_Purple_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.4341, 0.1388, 0.4144, 1};
	};

	class GVAR(Smoke_Impact_Blue_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.1183, 0.1867, 1, 1};
	};

	class GVAR(Smoke_Impact_Orange_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.6697, 0.2275, 0.10053, 1};
	};

	class GVAR(Smoke_Impact_LightBlue_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.3569, 0.8118, 0.9843, 1};
	};

	class GVAR(Smoke_Impact_Pink_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0.9647, 0.6667, 0.7255, 1};
	};

	class GVAR(Smoke_Impact_Black_Effect): GVAR(Smoke_Impact_White_Effect) {
		colorCoef[] = {0, 0, 0, 1};
	};

	class GVAR(Smoke_Impact_white_Effect_2): SmokeShellWhite2
	{
		color[] = {{0.6, 0.6, 0.6, 1}, {0.6, 0.6, 0.6, 0.5}, {0.6, 0.6, 0.6, 0}};
		colorCoef[] = {1, 1, 1, 1};
	};
	class GVAR(Smoke_Impact_Red_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.8438, 0.1383, 0.1353, 1};
	};
	class GVAR(Smoke_Impact_Green_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.2125, 0.6258, 0.4891, 1};
	};
	class GVAR(Smoke_Impact_Yellow_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.9883, 0.8606, 0.0719, 1};
	};
	class GVAR(Smoke_Impact_Purple_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.4341, 0.1388, 0.4144, 1};
	};
	class GVAR(Smoke_Impact_Blue_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.1183, 0.1867, 1, 1};
	};
	class GVAR(Smoke_Impact_Orange_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.6697, 0.2275, 0.10053, 1};
	};
	class GVAR(Smoke_Impact_LightBlue_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.3569, 0.8118, 0.9843, 1};
	};
	class GVAR(Smoke_Impact_Pink_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0.9647, 0.6667, 0.7255, 1};
	};
	class GVAR(Smoke_Impact_Black_Effect_2): GVAR(Smoke_Impact_white_Effect_2)
	{
		colorCoef[] = {0, 0, 0, 1};
	};

	class GVAR(Smoke_Shadow_Virus): GVAR(Smoke_Impact_White_Effect)
	{
		interval=0.03;
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		size[]={0.5, 4, 6, 8};
		sizeVar=0.5;
		moveVelocity[]={0.2,0.2,0};
		MoveVelocityVar[]={1.2,0.35,1.2};
		rotationVelocity=1;
		rotationVelocityVar=20;
		angleVar=0.1;
		animationSpeed[]={1.5,0.5};
		positionVar[]={0,0,0};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.04;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.6;
		
		weight=1.27;
		volume=1;
		rubbing=0.05;
		ignoreWind="true";

		color[]=
		{
			{1, 1, 1, 0.7},
			{1, 1, 1, 0.5},
			{1, 1, 1, 0.25},
			{1, 1, 1, 0}
		};
		colorVar[]={0,0,0,0.35};
		colorCoef[] = {0.058, 0.098, 0.474, 1};

		lifeTime = 10;
	};
	class GVAR(Smoke_Halothane_Effect): GVAR(Smoke_Shadow_Virus)
	{
		colorCoef[] = {0.168, 0.168, 0.168, 1};
	};
	class GVAR(Smoke_Rust_Effect): GVAR(Smoke_Shadow_Virus)
	{
		colorCoef[] = {0, 0, 0, 1};
	};
	class GVAR(Smoke_white_big): GVAR(Smoke_Shadow_Virus)
	{
		color[] = {{0.6, 0.6, 0.6, 0.2}, {0.6, 0.6, 0.6, 0.05}, {0.6, 0.6, 0.6, 0}};
		colorCoef[] = {1, 1, 1, 1};
	};

    //Sparks
    class GVAR(Sparks_Base): Default
	{
		interval=0.00089999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2.5;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={1,3,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};

    class GVAR(Sparks_1): GVAR(Sparks_Base)
    {
        interval = 0.01;
        lifeTime = 0.04;
        weight = 1.275;
        volume = 1;
        rubbing = 0;
        size[] = {0.45, 0.225, 0};
        lifeTimeVar = 0.02;
        positionVar[] = {0, 0, 0};
        moveVelocityVar[] = {0, 0, 0};
        sizeVar = 0.03;
    };

	class GVAR(Sparks_HP): GVAR(Sparks_Base) {
		interval = 0.0009;
		lifeTime = 2.5;
		colorVar[] = {0.05,0.05,0.05,5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GVAR(HP_Exp): GrenadeExp
	{
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 0.5"};
		sizeCoef = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0,0,0};
		sizeVar = 0;
		lifeTime = 0.05;
		ignoreWind = "true";
	};

	class GVAR(defib_sparksPlasma1): Default {
        interval = 0.0009;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 1;
        moveVelocity[] = {"(inDirX + surfNormalX * 2) * inSpeed / 500", "(inDirY + surfNormalY * 2) * inSpeed / 500", "(inDirZ + surfNormalZ * 2) * inSpeed / 500"};
        rotationVelocity = 1;
        weight = 100;
        volume = 0.01;
        rubbing = 0.3;
        size[] = {0.12, 0};
        sizeCoef = 1;
        color[] = {{1, 0.6, 0.4, -50}};
        colorCoef[] = {1, 1, 1, 1};
        emissiveColor[] = {{10, 6, 4, 1}};
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
        lifeTimeVar = 5;
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        moveVelocityVar[] = {1, 3, 1};
        rotationVelocityVar = 0;
        sizeVar = 0;
        colorVar[] = {0.05, 0.05, 0.05, 5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
    };

    class GVAR(defib_sparksPlasma2): Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 0.039;
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        weight = 1.275;
        volume = 1;
        rubbing = 0;
        size[] = {0.45, 0.225, 0};
        sizeCoef = 1;
        color[] = {{1, 0.6, 0.4, -50}};
        colorCoef[] = {1, 1, 1, 1};
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        lifeTimeVar = 0.02;
        position[] = {0, 0, 0};
        positionVar[] = {0, 0, 0};
        moveVelocityVar[] = {0, 0, 0};
        rotationVelocityVar = 0;
        sizeVar = 0.03;
        colorVar[] = {0.05, 0.05, 0.05, 5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
    };

    class GVAR(defib_bolts): Default {
        interval = 0.001;
        particleShape = "\A3\data_f\blesk1";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "SpaceObject";
	    timerPeriod = 1;
	    lifeTime = 0.039;
	    position[] = {0,0,0};
	    //moveVelocity[] = {0,0,0};
        moveVelocity[] = {"(inDirX + surfNormalX * 2) * inSpeed / 500", "(inDirY + surfNormalY * 2) * inSpeed / 500", "(inDirZ + surfNormalZ * 2) * inSpeed / 500"};
	    rotationVelocity = 0;
	    weight = 10;
	    volume = 7.9;
	    rubbing = 0.005;
	    size[] = {0.005,0.01,0.015};
	    color[] = {{0.91, 0.01, 0.01, 1}, {0.9, 0.8, 0.1, 1}, {0.9, 0.8, 0.1, 1}};
	    animationSpeed[] = {0.08};
	    randomDirectionPeriod = 1;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";
        blockAIVisibility = 0;

        lifeTimeVar = 0;
        positionVar[] = {0.25,0.25,0.25};
        moveVelocityVar[] = {0.175,0.175,0};
        rotationVelocityVar = 0;
        sizeVar = 0.25;
        colorVar[] = {0.9,0.8,0.1,1};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;

        //angleVar = ;
        //bounceOnSurfaceVar = ;

	    // angle = ;
	    // onSurface = ;
	    // bounceOnSurface = ;
	    // emissiveColor = ;
	    // vectorDir = ;
    };

	class GVAR(gunfire_smoke): Default
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
		size[]={0.25,0.5};
		color[]=
		{
			{0.6,0.7,1,0.3},
			{0.6,0.7,1,0.15},
			{0.6,0.7,1,0.06},
			{0.6,0.7,1,0.01}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={0.7,0.8,1,0.8};
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
	class GVAR(gunfire_heat): Default
	{
		interval=0.002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape = "\A3\Data_F\ParticleEffects\Universal\Refract";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=2;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]=
		{
			"7*directionX",
			"7*directionY",
			"7*directionZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.05;
		   size[]={0.10,0.13,0.06};
		   color[]=
		   {
			   {1,0.5,0.1,0.38},
			   {1,0.35,0.05,0.22},
			   {0.8,0.2,0,0.11},
			   {0.5,0.1,0,0}
		   };
		animationSpeed[]={1.5,0.8};
		randomDirectionPeriod=0.15;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=0;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,0.4};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.04,0.04,0.06};
		moveVelocityVar[]={1.5,1.5,2};
		rotationVelocityVar=1;
		sizeVar=0.05;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.05;
		randomDirectionIntensityVar=0.1;
	};
	class GVAR(gunfire_smoke_hp): GVAR(gunfire_smoke)
	{
		color[] =
		{
			{0.92,0.88,0.65,0.35},
			{0.92,0.88,0.65,0.18},
			{0.92,0.88,0.65,0.07},
			{0.92,0.88,0.65,0.01}
		};
		colorCoef[] = {0.92, 0.88, 0.65, 0.7};
	};
};
