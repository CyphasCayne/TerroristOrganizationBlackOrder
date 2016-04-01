class CfgWeapons {
    
    // Headgear
    class HeadgearItem;
    class rhsusf_mich_bare_tan_headset;
    class TERROR_H_CombatHelmet_2 : rhsusf_mich_bare_tan_headset {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_H_CombatHelmet_2";
        displayName = "Black Order MICH 2000";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";            // "\rhsusf\addons\rhsusf_infantry2\ui\mich2000_ca.paa";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\TERROR_H_CombatHelmet_2_bare.paa),                    //"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa",
            PATHTOF(data\headgear\TERROR_H_CombatHelmet_2_acc.paa),                     // "\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
            "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",     //PATHTOF(data\headgear\TERROR_H_CombatHelmet_1.paa),
            "rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"       //PATHTOF(data\headgear\TERROR_H_CombatHelmet_1.paa),
        };
        model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
        class ItemInfo : HeadgearItem {
            modelSides[] = {3,2,1,0};
            hiddenSelections[] = {"Camo","Camo1","Camo2"};
            uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
        };
    };
};