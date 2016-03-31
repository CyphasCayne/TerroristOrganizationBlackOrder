#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_O_SOLDIER_SF",
            "TERROR_O_SOLDIER_SF2"
        };
        weapons[] = {
            "TERROR_H_CombatHelmet_2"
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "TOBlackOrder_Characters",
            "TOBlackOrder_Weapons"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"