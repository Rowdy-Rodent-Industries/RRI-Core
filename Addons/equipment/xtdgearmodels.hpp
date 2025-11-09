class XtdGearModels
{
    class CfgWeapons
    {
        class rri_rank_helmets_xtd
        {
            label = "Havoc Rank Helmets";
            author = AUTHOR;
            options[] = {"Rank"};
            class Rank
            {
                changeingame = 0;
                values[] = 
                {
                    "RCT",
                    "PVT",
                    "PFC"
                };

                class RCT { label = "RCT";};
                class PVT { label = "PVT";};
                class PFC { label = "PFC";};
            };
        };
    };
};