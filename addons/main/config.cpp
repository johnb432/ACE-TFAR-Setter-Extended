#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "johnb43";
        authors[] = {"johnb43", "Chatter", "M3ales", "Tirpitz93"};
        url = "https://github.com/johnb432/ACE-TFAR-Setter-Extended";
        requiredAddons[] = {
            "cba_main",
            "ace_interact_menu",
            "task_force_radio",
            "zen_main"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods {
    class PREFIX {
        name = COMPONENT_NAME;
        actionName = "GitHub";
        action = "https://github.com/johnb432/ACE-TFAR-Setter-Extended";
        description = "A Simple Quality of Life mod for the ARMA 3 TFAR Addon. Allows you to save your current configuration, and reload it at any point in the future.";
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"

/*
    TFAR radio settings (array):
    0: active channel <NUMBER>
    1: Volume <NUMBER>
    2: Frequencies for channels <ARRAY>
    3: Stereo setting <NUMBER>
    4: Encryption code <STRING>
    5: Additional active channel <NUMBER>
    6: Additional active channel stereo mode <NUMBER>
    7: Owner's UID <STRING>
    8: Speaker mode <NUMBER>
    9: turned on <BOOL>
*/

/*
    Profile: [[], [], [], false]:
    0: SR sttings (from TFAR_fnc_getSwSettings; see above for layout of that)
    1: LR settings (from TFAR_fnc_getLrSettings; see above for layout of that)
    2: VLR settings (from TFAR_fnc_getLrSettings; see above for layout of that)
    3: Headset status (from missionNamespace getVariable ["TFAR_core_isHeadsetLowered", false])
*/