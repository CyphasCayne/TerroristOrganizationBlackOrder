class CfgVehicles {

    // Research Division
    class TERROR_O_SOLDIER_BASE;
    class TERROR_O_MAN_SCIENTIST : TERROR_O_SOLDIER_BASE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_MAN_SCIENTIST";
        displayName = "Scientist";
        editorSubcategory = "EdSubcat_Personnel_TERROR_ResearchDivision";
        uniformClass = "TERROR_U_ScienceCoveralls_1";
        backpack = "";
        uniformAccessories[] = {};
        model = "\A3\characters_F\common\coveralls";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\uniform\TERROR_U_ScienceCoveralls_1.paa)
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
        linkedItems[] = {"ItemWatch"};
        respawnLinkedItems[] = {"ItemWatch"};
        glassesEnabled = 0;
    };
    class TERROR_O_SOLDIER_SCIENTIST : TERROR_O_MAN_SCIENTIST {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_O_SOLDIER_SCIENTIST";
        displayName = "Scientist (Armed)";
        uniformClass = "TERROR_U_ScienceCoveralls_1";
        weapons[] = {"TERROR_SideArm_00","Throw","Put"};
        respawnWeapons[] = {"TERROR_SideArm_00","Throw","Put"};
        magazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            QUA3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
};