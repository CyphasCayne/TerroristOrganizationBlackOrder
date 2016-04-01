class CfgVehicles {
    
    class TERROR_O_SOLDIER_R;
    class TERROR_O_SOLDIER_SF : TERROR_O_SOLDIER_R {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_SF";
        displayName = "Special Forces";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        backpack = "";
        uniformClass = "TERROR_U_Uniform_1";
        uniformAccessories[] = {};
        weapons[] = {"TERROR_SFRifle_00","TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_SFRifle_00","TERROR_SideArm_00","Throw","Put"};
        Items[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_microDAGR),
            QUA1(ACE_HuntIR_monitor),
            QUA1(ACE_IR_Strobe_Item)
        };
        RespawnItems[] = {
            QUA1(ACE_MapTools),
            QUA1(ACE_Flashlight_XL50),
            QUA2(ACE_fieldDressing),
            QUA1(ACE_Morphine),
            QUA1(ACE_EarBuds),
            QUA1(ACE_CableTie),
            QUA1(ACE_microDAGR),
            QUA1(ACE_HuntIR_monitor),
            QUA1(ACE_IR_Strobe_Item)
        };
        magazines[] = {
            QUA6(rhs_mag_30Rnd_556x45_Mk318_Stanag),
            QUA2(rhs_mag_30Rnd_556x45_Mk318_Stanag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA4(rhs_mag_M441_HE),
            QUA2(rhs_mag_M433_HEDP),
            QUA1(ACE_HuntIR_M203),
            QUA2(1Rnd_SmokeRed_Grenade_shell),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(ACE_HandFlare_White),
            QUA1(Chemlight_blue)
        };
        respawnMagazines[] = {
            QUA6(rhs_mag_30Rnd_556x45_Mk318_Stanag),
            QUA2(rhs_mag_30Rnd_556x45_Mk318_Stanag),
            QUA2(rhsusf_mag_17Rnd_9x19_FMJ),
            QUA4(rhs_mag_M441_HE),
            QUA2(rhs_mag_M433_HEDP),
            QUA1(ACE_HuntIR_M203),
            QUA2(1Rnd_SmokeRed_Grenade_shell),
            QUA2(HandGrenade),
            QUA2(SmokeShell),
            QUA1(SmokeShellGreen),
            QUA2(ACE_HandFlare_White),
            QUA1(Chemlight_blue)
        };
        linkedItems[] = {"G_Balaclava_blk","TERROR_H_CombatHelmet_2","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
        respawnLinkedItems[] = {"G_Balaclava_blk","TERROR_H_CombatHelmet_2","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };
    class TERROR_O_SOLDIER_SF2 : TERROR_O_SOLDIER_SF {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_SF2";
        displayName = "Special Forces (Operator)";
        linkedItems[] = {"rhs_googles_black","rhsusf_Bowman","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"rhs_googles_black","rhsusf_Bowman","TERROR_V_PlateCarrier","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
};
