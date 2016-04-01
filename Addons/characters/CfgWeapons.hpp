class CfgWeapons {
    
    // Uniform
    class UniformItem;
    class U_C_Scientist;
    class U_B_CTRG_1;
    class U_Marshal;
    
    class TERROR_U_Uniform_1 : U_B_CTRG_1 {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_Uniform_1";
        displayName = "Black Order Uniform";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_Uniform_1.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "TERROR_O_SOLDIER_R";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_Uniform_1.paa)
            };
            containerClass = "Supply40";
        };
    };
    class TERROR_U_Uniform_2 : U_B_CTRG_1 {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_Uniform_2";
        displayName = "Black Order Uniform (MEDIC)";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_Uniform_1.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "TERROR_O_SOLDIER_MEDIC";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_Uniform_2.paa)
            };
            containerClass = "Supply40";
        };
    };
    class TERROR_U_OfficeClothings_1 : U_Marshal {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_OfficeClothings_1";
        displayName = "Black Order Office Uniform";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_OfficeClothings_1.paa));
        model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "CAV_TO_ADMIN_01";
            hiddenSelections[] = {"Camo","insignia"};
            hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"};
            containerClass = "Supply10";
        };
    };

    // Vest
    class V_TacVest_blk_POLICE;
    class V_PlateCarrier1_blk;
    class V_Chestrig_blk;

    class TERROR_V_Chestrig : V_Chestrig_blk {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_V_Chestrig";
        displayName = "Black Order Chestrig";
        hiddenSelections[] = {"Camo1","Camo2"};
        picture = QUOTE(PATHTOF(data\vest\icon\TERROR_V_Chestrig.paa)); //WIP
        hiddenSelectionsTextures[] = {
            PATHTOF(data\vest\TERROR_V_ChestrigEquipment.paa),
            PATHTOF(data\vest\TERROR_V_Chestrig.paa)
        };
    };
    class TERROR_V_PlateCarrier : V_PlateCarrier1_blk {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_V_PlateCarrier";
        displayName = "Black Order Carrier Lite";
        picture = QUOTE(PATHTOF(data\Vest\icon\TERROR_V_PlateCarrier.paa));
        hiddenSelectionsTextures[] = {
            PATHTOF(data\Vest\TERROR_V_PlateCarrier.paa)
        };
    };
    class TERROR_V_PlateCarrier_MEDIC : TERROR_V_PlateCarrier {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_V_PlateCarrier_MEDIC";
        displayName = "Black Order Carrier Lite MEDIC";
        picture = QUOTE(PATHTOF(data\vest\icon\TERROR_V_PlateCarrier_MEDIC.paa)); //WIP
        hiddenSelectionsTextures[] = {
            PATHTOF(data\vest\TERROR_V_PlateCarrier_MEDIC.paa)
        };
    };

    // Headgear
    class HeadgearItem;
    class H_HelmetB;
    class H_Beret_02;
    class H_MilCap_gry;
    
    class TERROR_H_CombatHelmet_1 : H_HelmetB {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_H_CombatHelmet_1";
        displayName = "Black Order Combat Helmet";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        //picture = QUOTE(PATHTOF(data\headgear\icon\TERROR_H_CombatHelmet_1.paa)); //WIP
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\TERROR_H_CombatHelmet_1.paa)
        };
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
        class ItemInfo : HeadgearItem {
            modelSides[] = {3,2,1,0};
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
            armor = 4;
            passThrough = 0.5;
        };
    };
    class TERROR_H_Beret : H_Beret_02 {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_H_Beret";
        displayName = "Black Order Beret";
        picture = QUOTE(PATHTOF(data\headgear\icon\TERROR_H_Beret.paa));
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\TERROR_H_Beret.paa)
        };
        model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
        class ItemInfo : HeadgearItem {
            modelSides[] = {3,2,1,0};
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
        };
    };
    class TERROR_H_MilCap : H_MilCap_gry {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_H_MilCap";
        displayName = "Black Order Military Cap";
        picture = QUOTE(PATHTOF(data\headgear\icon\TERROR_H_MilCap.paa));
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\TERROR_H_MilCap.paa)
        };
        model = "\A3\Characters_F\Common\cappatrol";
        class ItemInfo : HeadgearItem {
            modelSides[] = {3,2,1,0};
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
        };
    };
};