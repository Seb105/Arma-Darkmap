#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Ui_F","A3_Missions_F_Beta", "A3_3DEN", "A3_Ui_F_Orange", "A3_Ui_F_Enoch"};
        author = "Seb";
        VERSION_CONFIG;
    };
};

#include "config_colours_patched.cpp"