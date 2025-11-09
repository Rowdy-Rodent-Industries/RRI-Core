// base
class GUNIFORM(Havoc_base): SFA_Havoc_Armor
{
	scope = 1;
	scopeArsenal = 1;
	author = AUTHOR;
	displayName = "[RSFD] Havoc Trooper";
	model = "SFA_Equipment_R\Uniform\Havoc\Havoc_uniform.p3d";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(Havoc_base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};