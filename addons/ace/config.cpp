#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_map",
            "A3_Ui_F",
            "A3_Missions_F_Beta", 
            "A3_3DEN", 
            "A3_Ui_F_Orange", 
            "A3_Ui_F_Enoch",
            "A3_Ui_F_Curator", 
            "A3_Missions_F_Heli", 
            "A3_Ui_F_Exp", 
            "A3_Ui_F_Orange", 
            "A3_Missions_F_Oldman"
            };
        author = "Seb";
        VERSION_CONFIG;
    };
};

#include "config_colours_patched.cpp"