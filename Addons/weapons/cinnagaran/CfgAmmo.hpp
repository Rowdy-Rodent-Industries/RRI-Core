class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);

    class GAMMO(cinnagaran): GAMMO(HP_Base)
    {
        hit = 14;
        caliber = 2.5;
    };
};
