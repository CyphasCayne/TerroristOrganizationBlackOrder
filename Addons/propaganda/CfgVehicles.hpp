class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ACE_tagWallRed;
                class ACE_tagWallRed_Propaganda: ACE_tagWallRed {
                    displayName = "Tag propaganda";
                    condition = QUOTE(('ACE_SpraypaintRed' in items ACE_player) && {[] call FUNC(checkTaggable)});
                    statement = QUOTE([ARR_2(ACE_player,'z\toblackorder\addons\propaganda\ui\tags\red_special\0.paa')] call FUNC(tagWall));
                    icon = QUOTE(PATHTOF(UI\icons\iconTaggingRedSpecial.paa));
                };
            };
        };
    };
};