#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_O_SOLDIER_BASE",
            "TERROR_O_SOLDIER_R",
            "TERROR_O_SOLDIER_R2",
            "TERROR_O_SOLDIER_R_Lite",
            "TERROR_O_SOLDIER_R_Lite2",
            "TERROR_O_SOLDIER_SL",
            "TERROR_O_SOLDIER_FTL",
            "TERROR_O_SOLDIER_GL",
            "TERROR_O_SOLDIER_AR",
            "TERROR_O_SOLDIER_MEDIC",
            
            "TERROR_B_AssaultPack_MEDIC"
        };
        weapons[] = {
            "TERROR_U_Uniform_1",
            "TERROR_U_Uniform_2",
            "TERROR_U_OfficeClothings_1",

            "TERROR_V_PlateCarrier",
            "TERROR_V_Chestrig",
            "TERROR_V_PlateCarrier_MEDIC",
            
            "TERROR_H_CombatHelmet_1",
            "TERROR_H_CombatHelmet_2",
            "TERROR_H_Beret",
            "TERROR_H_MilCap"
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "TOBlackOrder_Weapons"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"