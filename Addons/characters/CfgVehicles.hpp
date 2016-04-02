class CfgVehicles {
    
    class O_Soldier_base_F;
    class TERROR_O_SOLDIER_BASE : O_Soldier_base_F {
        scope = 0;
        author = "Brostrom.A";
        faction = "TERROR_Faction_O";
        side = 0;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
        genericNames = "EnglishMen";
        icon = "iconMan";
        glassesEnabled = 1;
    };
    class TERROR_O_SOLDIER_R : TERROR_O_SOLDIER_BASE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_R";
        displayName = "Rifleman";
        editorSubcategory = "EdSubcat_Personnel";
        uniformClass = "TERROR_U_Uniform_1";
        backpack = "";
        uniformAccessories[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\uniform\TERROR_U_Uniform_1.paa)
        };
        weapons[] = {"TERROR_MBRifle_01","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_01","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        magazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_R2 : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_R2";
        displayName = "Rifleman (Scope)";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        magazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_R_Lite : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_R_Lite";
        displayName = "Rifleman Light";
        editorSubcategory = "EdSubcat_Personnel_TERROR_Light";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_MBRifle_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA2(ACE_CableTie)
        };
        RespawnItems[] = {
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA2(ACE_CableTie)
        };
        magazines[] = {
            QUA3(ACE_20Rnd_762x51_M118LR_Mag),
            QUA3(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(HandGrenade),
            QUA1(SmokeShell)
        };
        respawnMagazines[] = {
            QUA3(ACE_20Rnd_762x51_M118LR_Mag),
            QUA3(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(HandGrenade),
            QUA1(SmokeShell)
        };
        linkedItems[] = {"TERROR_H_MilCap","TERROR_V_Chestrig","ItemWatch"};
        respawnLinkedItems[] = {"TERROR_H_MilCap","TERROR_V_Chestrig","ItemWatch"};
        glassesEnabled = 0;
    };
    class TERROR_O_SOLDIER_R_Lite2 : TERROR_O_SOLDIER_R_Lite {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_R_Lite2";
        displayName = "Rifleman Light (Baret)";
        linkedItems[] = {"TERROR_H_Beret","TERROR_V_Chestrig","ItemWatch"};
        respawnLinkedItems[] = {"TERROR_H_Beret","TERROR_V_Chestrig","ItemWatch"};
    };
    class TERROR_O_SOLDIER_SL : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_SL";
        displayName = "Squad Leader";
        icon = "iconManLeader";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","Laserdesignator","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","Laserdesignator","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_microDAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_CableTie),
            QUA1(ACE_microDAGR)
        };
        magazines[] = {
            QUA5(ACE_20Rnd_762x51_M118LR_Mag),
            QUA3(ACE_20Rnd_762x51_Mag_Tracer),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA2(SmokeShellGreen),
            QUA2(SmokeShellRed),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green),
            QUA1(Laserbatteries)
        };
        respawnMagazines[] = {
            QUA5(ACE_20Rnd_762x51_M118LR_Mag),
            QUA3(ACE_20Rnd_762x51_Mag_Tracer),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA2(SmokeShellGreen),
            QUA2(SmokeShellRed),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green),
            QUA1(Laserbatteries)
        };
        linkedItems[] = {"G_Tactical_Black","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"G_Tactical_Black","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_FTL : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_FTL";
        displayName = "Fire Team Leader";
        icon = "iconManLeader";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","ACE_Vector","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_02","TERROR_SideArm_00","ACE_Vector","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA2(ACE_CableTie),
            QUA1(ACE_microDAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA2(ACE_CableTie),
            QUA1(ACE_microDAGR)
        };
        magazines[] = {
            QUA6(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(ACE_20Rnd_762x51_Mag_Tracer),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA2(SmokeShellGreen),
            QUA2(SmokeShellRed),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA6(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(ACE_20Rnd_762x51_Mag_Tracer),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA2(SmokeShellGreen),
            QUA2(SmokeShellRed),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_GL : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_GL";
        displayName = "Grenadier";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_MBRifle_01","rhs_weap_M320","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_01","rhs_weap_M320","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        magazines[] = {
            QUA6(ACE_20Rnd_762x51_M118LR_Mag),
            QUA8(rhs_mag_M441_HE),
            QUA2(rhs_mag_M433_HEDP),
            QUA2(rhs_mag_m713_Red),
            QUA1(rhs_mag_m662_red),
            QUA2(rhs_mag_m714_White)
        };
        respawnMagazines[] = {
            QUA6(ACE_20Rnd_762x51_M118LR_Mag),
            QUA8(rhs_mag_M441_HE),
            QUA2(rhs_mag_M433_HEDP),
            QUA2(rhs_mag_m713_Red),
            QUA1(rhs_mag_m662_red),
            QUA2(rhs_mag_m714_White)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_AR : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_AR";
        displayName = "Automatic Rifleman";
        icon = "iconManMG";
        uniformClass = "TERROR_U_Uniform_1";
        backpack = "";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_AR_L_00","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_AR_L_00","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds)
        };
        magazines[] = {
            QUA3(rhsusf_100Rnd_556x45_soft_pouch),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA4(rhsusf_100Rnd_556x45_soft_pouch),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_MEDIC : TERROR_O_SOLDIER_BASE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_MEDIC";
        displayName = "Medic";
        uniformClass = "TERROR_U_Uniform_2";
        backpack = "TERROR_B_AssaultPack_MEDIC";
        uniformAccessories[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\uniform\TERROR_U_Uniform_2.paa)
        };
        weapons[] = {"TERROR_MBRifle_01","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_MBRifle_01","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_DAGR)
        };
        magazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        respawnMagazines[] = {
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA4(ACE_20Rnd_762x51_M118LR_Mag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA1(Chemlight_red),
            QUA1(Chemlight_blue),
            QUA1(Chemlight_green)
        };
        linkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier_MEDIC","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"rhs_googles_clear","TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier_MEDIC","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_UNARMED : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_UNARMED";
        displayName = "Unarmed";
        uniformClass = "TERROR_U_Uniform_1";
        backpack = "";
        uniformAccessories[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\uniform\TERROR_U_Uniform_1.paa)
        };
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {
        };
        RespawnItems[] = {
        };
        magazines[] = {
        };
        respawnMagazines[] = {
        };
        linkedItems[] = {"TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier"};
        respawnLinkedItems[] = {"TERROR_H_CombatHelmet_1","TERROR_V_PlateCarrier"};
        glassesEnabled = 0;
    };
    class TERROR_O_SOLDIER_UNARMED2 : TERROR_O_SOLDIER_UNARMED {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_UNARMED2";
        displayName = "Unarmed 2";
        linkedItems[] = {"TERROR_V_PlateCarrier"};
        respawnLinkedItems[] = {"TERROR_V_PlateCarrier"};
    };
    class TERROR_O_SOLDIER_UNARMED3 : TERROR_O_SOLDIER_UNARMED {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_UNARMED3";
        displayName = "Unarmed 3";
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };

    // Backpack
    class B_AssaultPack_blk;
    class TERROR_B_AssaultPack_MEDIC : B_AssaultPack_blk {
        scope = 1;
        _generalMacro = "TERROR_B_AssaultPack_MEDIC";
        class TransportItems {
            MACRO_ADDITEM(ACE_bodyBag,2);
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_fieldDressing,12);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_packingBandage,4);
            MACRO_ADDITEM(ACE_tourniquet,2);
            MACRO_ADDITEM(ACE_morphine,6);
            MACRO_ADDITEM(ACE_epinephrine,4);
            MACRO_ADDITEM(ACE_atropine,2);
            MACRO_ADDITEM(ACE_salineIV_250,4);
        };
    };
};