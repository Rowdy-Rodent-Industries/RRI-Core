class GUNIFORM(Base): ls_gar_phase2_uniform
{
	scope = 2;
	displayName = "(41st) P2 Uniform";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(MC): ls_gar_marshalCommander_uniform
{
	scope = 2;
	displayName = "(41st) Marshal Commander Uniform";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};