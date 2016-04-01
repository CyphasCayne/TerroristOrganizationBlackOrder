#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_O_MAN_SCIENTIST",
            "TERROR_O_SOLDIER_SCIENTIST"
        };
        weapons[] = {
            "TERROR_U_ScienceCoveralls_1",
            "TERROR_U_ScienceCoveralls_2",
            "TERROR_U_ScienceCoveralls_3"
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