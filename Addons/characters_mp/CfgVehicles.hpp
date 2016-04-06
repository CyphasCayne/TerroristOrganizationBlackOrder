class CfgVehicles {
    class TERROR_O_SOLDIER_BASE;
    class TERROR_O_SOLDIER_MEDIC;
    // Military Police
    class TERROR_O_SOLDIER_MP_R : TERROR_O_SOLDIER_BASE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_R";
        displayName = "MP Rifleman";
        editorSubcategory = "EdSubcat_Personnel_TERROR_MP";
        uniformClass = "TERROR_U_Uniform_3";
        backpack = "";
        uniformAccessories[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\uniform\TERROR_U_Uniform_3.paa)
        };
        weapons[] = {"TERROR_CCRifle_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_CCRifle_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        magazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
    class TERROR_O_SOLDIER_MP_R2 : TERROR_O_SOLDIER_MP_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_R2";
        displayName = "MP Rifleman (M4)";
        weapons[] = {"rhs_weap_m4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
        magazines[] = {
            QUA3(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            QUA3(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA3(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            QUA3(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
    };
    class TERROR_O_SOLDIER_MP_R3 : TERROR_O_SOLDIER_MP_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_R3";
        displayName = "MP Rifleman (M590)";
        weapons[] = {"rhs_weap_M590_8RD","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_M590_8RD","Throw","Put"};
        magazines[] = {
            QUA4(rhsusf_8Rnd_00Buck),
            QUA4(rhsusf_8Rnd_Slug),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA4(rhsusf_8Rnd_00Buck),
            QUA4(rhsusf_8Rnd_Slug),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
    };
    class TERROR_O_SOLDIER_MP_SL : TERROR_O_SOLDIER_MP_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_SL";
        displayName = "MP Squad Leader";
        uniformClass = "TERROR_U_Uniform_3";
        backpack = "";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_CCRifle_00","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_CCRifle_00","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie),
            QUA4(ACE_microDAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie),
            QUA4(ACE_microDAGR)
        };
        magazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA2(rhsusf_mag_17Rnd_9x19_JHP),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA2(rhsusf_mag_17Rnd_9x19_JHP),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_Beret","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_Beret","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
    class TERROR_O_SOLDIER_MP_MEDIC : TERROR_O_SOLDIER_MEDIC {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_MEDIC";
        displayName = "MP Medic";
        editorSubcategory = "EdSubcat_Personnel_TERROR_MP";
        uniformClass = "TERROR_U_Uniform_2";
        backpack = "TERROR_B_AssaultPack_MEDIC";
        uniformAccessories[] = {};

        weapons[] = {"TERROR_CCRifle_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_CCRifle_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        magazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA3(30Rnd_65x39_caseless_mag),
            QUA3(30Rnd_65x39_caseless_mag),
            QUA1(rhs_mag_m7a3_cs),
            QUA2(rhs_mag_mk3a2),
            QUA1(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(Chemlight_red),
            QUA2(Chemlight_blue),
            QUA2(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_TacVest_MP","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_MP_PO : TERROR_O_SOLDIER_MP_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_PO";
        displayName = "MP Patrol Officer";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_3";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA1(ACE_EarBuds),
            QUA4(ACE_CableTie)
        };
        magazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_JHP),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_JHP),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        linkedItems[] = {"TERROR_H_Beret","V_Rangemaster_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"TERROR_H_Beret","V_Rangemaster_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        glassesEnabled = 0;
    };
    class TERROR_O_SOLDIER_MP_PO2 : TERROR_O_SOLDIER_MP_PO {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MP_PO2";
        displayName = "MP Patrol Officer (M590)";
        weapons[] = {"rhs_weap_M590_8RD","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_M590_8RD","TERROR_SideArm_00","Throw","Put"};
        magazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_JHP),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(rhsusf_8Rnd_00Buck),
            QUA1(rhsusf_8Rnd_Slug)
        };
        respawnMagazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_JHP),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(rhsusf_8Rnd_00Buck),
            QUA1(rhsusf_8Rnd_Slug)
        };
    };
};