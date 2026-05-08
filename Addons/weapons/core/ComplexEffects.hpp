//Plasma
class GVAR(Plasma_Impact)
{
	class Light1
	{
		simulation="light";
		type=QGVAR(Rifle_Blue);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class SparksLight
	{
		simulation="light";
		type=QGVAR(Sparks_Lights_Base);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type=QGVAR(Sparks_Base);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type=QGVAR(Sparks_1);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSmoke
	{
		simulation="particles";
		type="ImpactSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};

class GVAR(Plasma_Impact_HP)
{
	class Light1
	{
		simulation="light";
		type=QGVAR(Rifle_Yellow);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ImpactGrenadeExp
	{
		simulation = "particles";
		type = QGVAR(HP_Exp);
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.025;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type=QGVAR(Sparks_HP);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type=QGVAR(Sparks_1);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "IEDFlameS";
		lifeTime = 7;
	};
};

class GVAR(Thermal_Impact)
{
	class Light1
	{
		simulation="light";
		type=QGVAR(Rifle_Orange);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class ImpactGrenadeExp
	{
		simulation = "particles";
		type = QGVAR(HP_Exp);
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.025;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type=QGVAR(Sparks_HP);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type=QGVAR(Sparks_1);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "IEDFlameS";
		lifeTime = 7;
	};
};


//Bullet Tracers
class GVAR(Rifle_Blue_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_Blue);
		position[] = {0,0,0};
	};
};

class GVAR(Rifle_Orange_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_Orange);
		position[] = {0,0,0};
	};
};

class GVAR(Rifle_Green_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_Green);
		position[] = {0,0,0};
	};
};

class GVAR(Rifle_Yellow_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_Yellow);
		position[] = {0,0,0};
	};
};

class GVAR(Rifle_Red_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_Red);
		position[] = {0,0,0};
	};
};

class GVAR(Rifle_White_Tracer)
{
    class Light
	{
		simulation = "light";
		type = QGVAR(Rifle_White);
		position[] = {0,0,0};
	};
};

//Rocket Trails
class GVAR(Missle_Trail_Base)
{
	class trail_effect
	{
		simulation="particles";
		type=QGVAR(Smoke_Base);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class light_effect
	{
		simulation="light";
		type=QGVAR(Light_base);
		position[]={0,0,0};
		intensity=0.0049999999;
		interval=1;
		lifeTime=100;
	};
};

class GVAR(Missle_Trail_Red)
{
	class trail_effect
	{
		simulation="particles";
		type=QGVAR(Smoke_Red);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class light_effect
	{
		simulation="light";
		type=QGVAR(Light_Red);
		position[]={0,0,0};
		intensity=0.0049999999;
		interval=1;
		lifeTime=100;
	};
};

class GVAR(Missle_Trail_Pink)
{
	class trail_effect
	{
		simulation="particles";
		type=QGVAR(Smoke_Pink);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class light_effect
	{
		simulation="light";
		type=QGVAR(Light_Pink);
		position[]={0,0,0};
		intensity=0.0049999999;
		interval=1;
		lifeTime=100;
	};
};

class GVAR(Missle_Trail_Blue)
{
	class trail_effect
	{
		simulation="particles";
		type=QGVAR(Smoke_Blue);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class light_effect
	{
		simulation="light";
		type=QGVAR(Light_Blue);
		position[]={0,0,0};
		intensity=0.0049999999;
		interval=1;
		lifeTime=100;
	};
};


class GVAR(Missile_Trail_Blue_nolight)
{
	class trail_effect
	{
		simulation="particles";
		type=QGVAR(Smoke_Blue);
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
};

//40mm stuff
class MTI_40mm_cluster_effect {
	class ExploAmmoFlash {
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExploAmmoFlash";
	};

    class ExploSmoke {
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "MTI_40mm_cluster_ExploSmoke";
	};

    class FiredLightMed {
		intensity = 0;
		interval = 1;
		lifeTime = 0.1;
		position[] = {0,0,0};
		simulation = "light";
		type = "FiredLightMed";
	};
};

//Smokes
class GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect {
		simulation = "particles";
		type = QGVAR(Smoke_Impact_White_Effect);
		qualityLevel = -1;
		lifetime = 240;
		position[] = {0, 0, 0};
		start = -1;
		enabled = 1;
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_white_Effect_2);
	};

	class SmokeShelWhiteUW: SmokeEffect {
		type = "SmokeShellWhiteUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellWhite2UW";
	};
};

class GVAR(Smoke_Impact_Red_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Red_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Red_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellRedUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellRed2UW";
	};
};

class GVAR(Smoke_Impact_Green_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Green_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Green_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellGreenUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellGreen2UW";
	};
};

class GVAR(Smoke_Impact_Yellow_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Yellow_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Yellow_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellYellowUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellYellow2UW";
	};
};

class GVAR(Smoke_Impact_Purple_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Purple_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Purple_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellPurpleUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellPurple2UW";
	};
};

class GVAR(Smoke_Impact_Blue_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Blue_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Blue_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellBlueUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellBlue2UW";
	};
};

class GVAR(Smoke_Impact_Orange_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Orange_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Orange_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellOrangeUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellOrange2UW";
	};
};

class GVAR(Smoke_Impact_LightBlue_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_LightBlue_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_LightBlue_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellWhiteUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellWhite2UW";
	};
};

class GVAR(Smoke_Impact_Pink_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Pink_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Pink_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellWhiteUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellWhite2UW";
	};
};

class GVAR(Smoke_Impact_Black_Effect): GVAR(Smoke_Impact_White_Effect) {
	class SmokeEffect: SmokeEffect {
		type = QGVAR(Smoke_Impact_Black_Effect);
	};

	class SmokeEffect2: SmokeEffect {
		type = QGVAR(Smoke_Impact_Black_Effect_2);
	};

	class SmokeShellUW: SmokeEffect {
		type = "SmokeShellWhiteUW";
	};

	class SmokeShellUW2: SmokeEffect {
		type = "SmokeShellWhite2UW";
	};
};

class GVAR(Smoke_Shadow_Virus): GVAR(Smoke_Impact_White_Effect)
{
	class SmokeEffect: SmokeEffect
	{
		type = QGVAR(Smoke_Shadow_Virus);
		lifetime = 70;
	};
};

class GVAR(Smoke_Halothane_Effect): GVAR(Smoke_Impact_White_Effect)
{
	class SmokeEffect: SmokeEffect
	{
		type = QGVAR(Smoke_Halothane_Effect);
		lifetime = 70;

	};
};

class GVAR(Smoke_Rust_Effect): GVAR(Smoke_Impact_White_Effect)
{
	class SmokeEffect: SmokeEffect
	{
		type = QGVAR(Smoke_Rust_Effect);
		lifetime = 70;
	};
};

class GVAR(Smoke_white_big): GVAR(Smoke_Impact_White_Effect)
{
	class SmokeEffect: SmokeEffect
	{
		type = QGVAR(Smoke_white_big);
		lifetime = 70;
	};
};

class GVAR(defib_effectFly) {
    class Light {
        simulation = "light";
        type = QGVAR(defib_plasmaOrange);
        position[] = {0, 0, 0};
        intensity = 0;
        interval = 1;
        lifeTime = 0.1;
    };

    class Sparks1 {
        simulation = "particles";
        type = QGVAR(defib_sparksPlasma1);
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
    };

    class Sparks2 {
        simulation = "particles";
        type = QGVAR(defib_sparksPlasma2);
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
    };

    class Bolts1 {
        simulation = "particles";
        type = QGVAR(defib_bolts);
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
    };
};

class GVAR(gunfire_smoke)
{
	class GVAR(gunfire_smoke)
	{
		simulation="particles";
		type=QGVAR(gunfire_smoke);
		position[]={0,0,0};
		intensity=0.8;
		interval=1;
		lifeTime=1.1;
	};
	class GVAR(gunfire_heat)
	{
		simulation="particles";
		type=QGVAR(gunfire_heat);
		position[]={0,0,0};
		intensity=0.5;
		interval=1;
		lifeTime=0.9;
	};
};

class GVAR(gunfire_smoke_hp): GVAR(gunfire_smoke)
{
	class GVAR(gunfire_smoke_hp): GVAR(gunfire_smoke)
	{
		simulation="particles";
		type=QGVAR(gunfire_smoke_hp);
		position[]={0,0,0};
		intensity=0.9;
		interval=1;
		lifeTime=1.2;
	};
};
