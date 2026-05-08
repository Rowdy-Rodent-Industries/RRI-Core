class CfgLights
{
	//Lights
	class GVAR(Light_base)
	{
		diffuse[] = {0, 0, 0};
		color[] = {0, 0, 0};
		ambient[] = {1, 0.2666, 1};
		size = 3;
		intensity = 10000;
		dayLight = 1;
		blinking = 0;
		useFlare = 1;
		flareSize = 10;
		flareMaxDistance = 1000;
		class Attenuation
		{
			start = 4;
			constant = 0;
			linear = 0;
			quadratic = 0.2;
			hardLimitStart = 1000;
			hardLimitEnd = 2000;
		};
		position[] = {0, 0, 0};
		lifeTime=10;
	};

	class GVAR(Light_Pink): GVAR(Light_base)
	{
		diffuse[] = {0.999,0,0.8};
		color[] = {1,0,0.8156,1};
	};

	class GVAR(Light_Yellow): GVAR(Light_base)
	{
		color[] = {0.9647,0.9137,0,0.8};
	};

	class GVAR(Light_Green): GVAR(Light_base)
	{
		color[] = {0,0.7411,0,0.8};
	};

    class GVAR(Light_Red): GVAR(Light_base)
	{
		color[] = {1,0,0,1};
	};

	class GVAR(Light_Blue): GVAR(Light_base)
	{
		color[] = {0.25,0.21,0.91,1};
	};

	class GVAR(Light_White): GVAR(Light_base)
	{
		color[] = {1,1,1,1};
	};

	//Bullet Tracers
	class GVAR(Bullet_Base)
	{
		color[]={0,0,0,0};
		diffuse[] = {7,36,190,1};
		ambient[]={0,0,0,0.5};
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic = 255;
			hardLimitStart = "1e20 * 0.7";
			hardLimitEnd=1000;
		};
		dayLight=1;
		useFlare=1;
		flareSize=1;
		brightness = 3;
        intensity = 300;
		drawLight = 0;
        blinking = 1;
	};
	class GVAR(Bullet_Rifle): GVAR(Bullet_Base)
	{
		diffuse[]={1,1,1,0.8};
	};
	
	class GVAR(Rifle_Blue): GVAR(Bullet_Rifle)
	{
		diffuse[] = {7,36,190,1};
	};
	class GVAR(Rifle_Orange): GVAR(Bullet_Rifle)
	{
		diffuse[]={209,100,17,0.8};
	};
	class GVAR(Rifle_Green): GVAR(Bullet_Rifle)
	{
		diffuse[]={34,212,11,0.8};
	};
	class GVAR(Rifle_Yellow): GVAR(Bullet_Rifle)
	{
		diffuse[]={208,212,11,0.8};
	};
	class GVAR(Rifle_Red): GVAR(Bullet_Rifle)
	{
		diffuse[]={212,11,11,0.8};
	};
	class GVAR(Rifle_White): GVAR(Bullet_Rifle)
	{
		color[] = {1,1,1,1};
	};

//Sparks
    class GVAR(Sparks_Lights_Base) {
        diffuse[]={1,0.80000001,0.80000001};
		color[]={1,0.80000001,0.80000001};
		ambient[]={0,0,0,0};
		brightness=50;
		size=1;
		intensity=1000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=40;
			hardLimitEnd=80;
		};
		position[]={0,0,0};
    };

	class GVAR(defib_plasmaOrange) {
        position[] = {0, 0.2, 0};
        color[] = {1, 0.37, 0, 1};
        ambient[] = {1, 0.37, 0, 1};
        diffuse[] = {0.3, 0.1, 0};
        brightness = 10;
        intensity = 4000;
        drawLight = 0;

        class Attenuation {
            start = 0;
            constant = 1;
            linear = 0;
            quadratic = 40;
        };
    };
};
