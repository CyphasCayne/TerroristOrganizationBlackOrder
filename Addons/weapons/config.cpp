#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
        };
        weapons[] = {
            "TERROR_MBRifle_00",
            "TERROR_MBRifle_01",
            "TERROR_MBRifle_02",
            "TERROR_MBRifle_03",
            
            "TERROR_SideArm_00",
            "TERROR_AR_L_00",
            "TERROR_AR_S_00"
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};

#include "CfgWeapons.hpp"