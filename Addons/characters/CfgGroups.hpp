class CfgGroups {
	class EAST {
		class TERROR_Faction_Groups {
			name = "Black Order";
			class Infantry {
				name = "Infantry";
				class TERROR_InfSquad {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Squad";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_SL";						
					};
					class Unit1 {
						position[] = {0,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit2 {
						position[] = {2,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_LAT";						
					};
					class Unit3 {
						position[] = {4,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AR";						
					};
					class Unit4 {
						position[] = {6,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_GL";						
					};
					class Unit5 {
						position[] = {0,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit6 {
						position[] = {2,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R2";						
					};
					class Unit7 {
						position[] = {4,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AR";						
					};
					class Unit8 {
						position[] = {6,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_MEDIC";						
					};
				};
				class TERROR_InfSquad_Weapons {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Squad";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_SL";						
					};
					class Unit1 {
						position[] = {0,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit2 {
						position[] = {2,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit3 {
						position[] = {4,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AR";						
					};
					class Unit4 {
						position[] = {6,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AT";						
					};
					class Unit5 {
						position[] = {0,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit6 {
						position[] = {2,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit7 {
						position[] = {4,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AR";						
					};
					class Unit8 {
						position[] = {6,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_LAT";						
					};
				};
				class TERROR_InfTeam {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit1 {
						position[] = {2,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit2 {
						position[] = {4,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AR";						
					};
					class Unit3 {
						position[] = {6,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_GL";
					};
				};
/*				class TERROR_InfTeam_AA {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Air-defense Team";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit1 {
						position[] = {2,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit2 {
						position[] = {4,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_AA";						
					};
					class Unit3 {
						position[] = {6,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_AA";
					};
				}; */
				class TERROR_InfTeam_AT {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-armor Team";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_FTL";						
					};
					class Unit1 {
						position[] = {2,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit2 {
						position[] = {4,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AT";						
					};
					class Unit3 {
						position[] = {6,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_AT";
					};
				};
				class TERROR_InfSquad_Sentry {
					faction = "TERROR_Faction_O";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_R";						
					};
					class Unit1 {
						position[] = {2,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TERROR_O_SOLDIER_GL";						
					};
                };
            };
        };
    };
};