class RscControlsGroupNoScrollbars;
class RscFrame;
class RscVignette;
class RscMapControlTooltip;
class RscPicture;
class RscXListBox;
class RscButtonMenuCancel;
class RscMessageBox;
class ctrlDefault;
class RscText;


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMap
    SOURCE ADD-ON(S): A3_3DEN
*/

class ctrlMap: ctrlDefault
{
    type = 101;
    style = 48;
    x = "safezoneXAbs";
    y = "safezoneY";
    w = "safezoneWAbs";
    h = "safezoneH";
    sizeEx = 0.05;
    font = "RobotoCondensedLight";
    colorText[] = {0,0,0,1};
    moveOnEdges = 1;
    ptsPerSquareSea = 5;
    ptsPerSquareTxt = 20;
    ptsPerSquareCLn = 10;
    ptsPerSquareExp = 10;
    ptsPerSquareCost = 10;
    ptsPerSquareFor = 9;
    ptsPerSquareForEdge = 9;
    ptsPerSquareObj = 9;
    ptsPerSquareForLod1 = 4;
    ptsPerSquareForLod2 = 1;
    ptsPerSquareRoad = 6;
    ptsPerSquareMainRoad = 6;
    ptsPerSquareRoadSimple = 1;
    ptsPerSquareMainRoadSimple = 1;
    drawShaded = 0.25;
    shadedSea = 0.3;
    runwayFont = "LCD14";
    scaleMin = 0.0001;
    scaleMax = 1;
    scaleDefault = 0.16;
    maxSatelliteAlpha = 0.85;
    alphaFadeStartScale = 2;
    alphaFadeEndScale = 2;
    text = "#(argb,8,8,3)color(1,1,1,1)";
    colorBackground[] = {0.969,0.957,0.949,1};
    colorOutside[] = {0,0,0,1};
    colorSea[] = {0.467,0.631,0.851,0.5};
    colorForest[] = {0.624,0.78,0.388,0.5};
    colorForestTextured[] = {0.624,0.78,0.388,0.25};
    colorForestBorder[] = {0,0,0,0};
    colorRocks[] = {0,0,0,0.3};
    colorRocksBorder[] = {0,0,0,0};
    colorLevels[] = {0.286,0.177,0.094,0.5};
    colorMainCountlines[] = {0.572,0.354,0.188,0.5};
    colorCountlines[] = {0.572,0.354,0.188,0.25};
    colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
    colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
    colorPowerLines[] = {0.1,0.1,0.1,1};
    colorRailWay[] = {1,0,0,1};
    colorNames[] = {0.1,0.1,0.1,0.9};
    colorInactive[] = {1,1,1,0.5};
    colorTracks[] = {0.84,0.76,0.65,0.15};
    colorTracksFill[] = {0.84,0.76,0.65,1};
    colorRoads[] = {0.7,0.7,0.7,1};
    colorRoadsFill[] = {1,1,1,1};
    colorMainRoads[] = {0.9,0.5,0.3,1};
    colorMainRoadsFill[] = {1,0.6,0.4,1};
    colorTrails[] = {0.84,0.76,0.65,0.15};
    colorTrailsFill[] = {0.84,0.76,0.65,0.65};
    colorGrid[] = {0.1,0.1,0.1,0.6};
    colorGridMap[] = {0.1,0.1,0.1,0.6};
    widthRailWay = 4;
    fontLabel = "RobotoCondensedLight";
    sizeExLabel = 0.05;
    fontGrid = "TahomaB";
    sizeExGrid = 0.02;
    fontUnits = "TahomaB";
    sizeExUnits = 0.05;
    fontNames = "RobotoCondensed";
    sizeExNames = 0.05;
    fontInfo = "RobotoCondensedLight";
    sizeExInfo = 0.05;
    fontLevel = "TahomaB";
    sizeExLevel = 0.02;
    showCountourInterval = 1;
    idcMarkerColor = -1;
    idcMarkerIcon = -1;
    textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
    showMarkers = "true";
    class LineMarker
    {
        lineWidthThin = 0.008;
        lineWidthThick = 0.014;
        lineDistanceMin = 3e-005;
        lineLengthMin = 5;
    };
    class Legend
    {
        x = 0.5;
        y = 0.5;
        w = 0.4;
        h = 0.1;
        color[] = {0,0,0,1};
        colorBackground[] = {1,1,1,0.5};
        font = "RobotoCondensedLight";
        sizeEX = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
    };
    class Task
    {
        icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
        color[] = {1,1,1,1};
        iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
        colorCreated[] = {1,1,0,1};
        iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
        colorCanceled[] = {0.7,0.7,0.7,1};
        iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
        colorDone[] = {0.7,1,0.3,1};
        iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
        colorFailed[] = {1,0.3,0.2,1};
        size = 27;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class ActiveMarker
    {
        color[] = {0,0,0,1};
        size = 2;
    };
    class Waypoint
    {
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        importance = 1;
        size = 24;
    };
    class WaypointCompleted: Waypoint
    {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
    };
    class CustomMark: Waypoint
    {
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
    };
    class Command: Waypoint
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
    };
    class Bush: Waypoint
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.007;
        size = 7;
    };
    class SmallTree: Bush
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.36;
        size = 12;
    };
    class Tree: SmallTree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.72;
    };
    class Rock: SmallTree
    {
        color[] = {0.1,0.1,0.1,0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        importance = 0.3;
    };
    class BusStop: Bush
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
    };
    class FuelStation: Waypoint
    {
        coefMax = 1;
        coefMin = 0.85;
        // color[] = {1,1,1,1}; // REMOVE TO STOP BLACK CIV MARKERS ON MAP
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
    };
    class Hospital: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
    };
    class Church: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
    };
    class Lighthouse: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
    };
    class Power: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
    };
    class PowerSolar: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
    };
    class PowerWave: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
    };
    class PowerWind: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
    };
    class Quay: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
    };
    class Transmitter: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
    };
    class Watertower: FuelStation
    {
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
    };
    class Cross: Waypoint
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
    };
    class Chapel: Cross
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
    };
    class Shipwreck: Cross
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
    };
    class Bunker: Waypoint
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.05;
        size = 14;
    };
    class Fortress: Bunker
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.6;
        size = 16;
    };
    class Fountain: Bunker
    {
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        importance = 0.6;
        size = 11;
    };
    class Ruin: Waypoint
    {
        coefMax = 4;
        coefMin = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        importance = 0.96;
        size = 16;
    };
    class Stack: Waypoint
    {
        coefMax = 2;
        coefMin = 0.4;
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        importance = 1.6;
        size = 16;
    };
    class Tourism: Waypoint
    {
        coefMax = 4;
        coefMin = 0.7;
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        importance = 2.8;
        size = 16;
    };
    class ViewTower: Waypoint
    {
        coefMax = 4;
        coefMin = 0.5;
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        importance = 2;
        size = 16;
    };
    onCanDestroy = "";
    onDestroy = "";
    onSetFocus = "";
    onKillFocus = "";
    onKeyDown = "";
    onKeyUp = "";
    onMouseButtonDown = "";
    onMouseButtonUp = "";
    onMouseButtonClick = "";
    onMouseButtonDblClick = "";
    onMouseZChanged = "";
    onMouseMoving = "";
    onMouseHolding = "";
    onDraw = "";
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMapEmpty
    SOURCE ADD-ON(S): A3_3DEN
*/

class ctrlMapEmpty: ctrlMap
{
    ptsPerSquareSea = 1000;
    ptsPerSquareTxt = 1000;
    ptsPerSquareCLn = 1000;
    ptsPerSquareExp = 1000;
    ptsPerSquareCost = 1000;
    ptsPerSquareFor = 1000;
    ptsPerSquareForEdge = 1000;
    ptsPerSquareRoad = 1000;
    ptsPerSquareObj = 1000;
    alphaFadeStartScale = 0;
    alphaFadeEndScale = 0;
    colorBackground[] = {1,1,1,1};
    colorOutside[] = {1,1,1,1};
    colorSea[] = {0,0,0,0};
    colorForest[] = {0,0,0,0};
    colorForestBorder[] = {0,0,0,0};
    colorRocks[] = {0,0,0,0};
    colorRocksBorder[] = {0,0,0,0};
    colorLevels[] = {0,0,0,0};
    colorMainCountlines[] = {0,0,0,0};
    colorCountlines[] = {0,0,0,0};
    colorMainCountlinesWater[] = {0,0,0,0};
    colorCountlinesWater[] = {0,0,0,0};
    colorPowerLines[] = {0,0,0,0};
    colorRailWay[] = {0,0,0,0};
    colorNames[] = {0,0,0,0};
    colorInactive[] = {0,0,0,0};
    colorGrid[] = {0,0,0,0};
    colorGridMap[] = {0,0,0,0};
    class Task: Task
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        iconCreated = "#(argb,8,8,3)color(0,0,0,0)";
        iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
        iconDone = "#(argb,8,8,3)color(0,0,0,0)";
        iconFailed = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        colorCreated[] = {0,0,0,0};
        colorCanceled[] = {0,0,0,0};
        colorDone[] = {0,0,0,0};
        colorFailed[] = {0,0,0,0};
        size = 0;
    };
    class Waypoint: Waypoint
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class WaypointCompleted: WaypointCompleted
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class CustomMark: CustomMark
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Command: Command
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Bush: Bush
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Rock: Rock
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class SmallTree: SmallTree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Tree: Tree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class busstop: BusStop
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class fuelstation: FuelStation
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class hospital: Hospital
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class church: Church
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class lighthouse: Lighthouse
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class power: Power
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powersolar: PowerSolar
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powerwave: PowerWave
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powerwind: PowerWind
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class quay: Quay
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class shipwreck: Shipwreck
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class transmitter: Transmitter
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class watertower: Watertower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Bunker: Bunker
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Cross: Cross
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Fortress: Fortress
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Fountain: Fountain
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Chapel: Chapel
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Ruin: Ruin
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Stack: Stack
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Tourism: Tourism
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class ViewTower: ViewTower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMapMain
    SOURCE ADD-ON(S): 
*/

class ctrlMapMain: ctrlMap
{
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscMap
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscMap
{
    class controls
    {
        class Map: RscMapControl
        {
            shadow = 0;
            moveOnEdges = 0;
            x = "SafeZoneXAbs";
            y = "SafeZoneY";
            w = "SafeZoneWAbs";
            h = "SafeZoneH";
        };
    };
    idd = -1;
    access = 0;
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscMapControl
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscMapControl
{
    deletable = 0;
    fade = 0;
    access = 0;
    type = 101;
    idc = 51;
    style = 48;
    colorBackground[] = {0.969,0.957,0.949,1};
    colorOutside[] = {0,0,0,1};
    colorText[] = {0,0,0,1};
    font = "TahomaB";
    sizeEx = 0.04;
    colorSea[] = {0.467,0.631,0.851,0.5};
    colorForest[] = {0.624,0.78,0.388,0.5};
    colorRocks[] = {0,0,0,0.3};
    colorCountlines[] = {0.572,0.354,0.188,0.25};
    colorMainCountlines[] = {0.572,0.354,0.188,0.5};
    colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
    colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
    colorForestBorder[] = {0,0,0,0};
    colorRocksBorder[] = {0,0,0,0};
    colorPowerLines[] = {0.1,0.1,0.1,1};
    colorRailWay[] = {0.8,0.2,0,1};
    colorNames[] = {0.1,0.1,0.1,0.9};
    colorInactive[] = {1,1,1,0.5};
    colorLevels[] = {0.286,0.177,0.094,0.5};
    colorTracks[] = {0.84,0.76,0.65,0.15};
    colorRoads[] = {0.7,0.7,0.7,1};
    colorMainRoads[] = {0.9,0.5,0.3,1};
    colorTracksFill[] = {0.84,0.76,0.65,1};
    colorRoadsFill[] = {1,1,1,1};
    colorMainRoadsFill[] = {1,0.6,0.4,1};
    colorGrid[] = {0.1,0.1,0.1,0.6};
    colorGridMap[] = {0.1,0.1,0.1,0.6};
    stickX[] = {0.2,{"Gamma",1,1.5}};
    stickY[] = {0.2,{"Gamma",1,1.5}};
    class Legend
    {
        colorBackground[] = {1,1,1,0.5};
        color[] = {0,0,0,1};
        x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
        y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
        h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        font = "RobotoCondensed";
        sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    };
    class ActiveMarker
    {
        color[] = {0.3,0.1,0.9,1};
        size = 50;
    };
    class Command
    {
        color[] = {1,1,1,1};
        icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Task
    {
        taskNone = "#(argb,8,8,3)color(0,0,0,0)";
        taskCreated = "#(argb,8,8,3)color(0,0,0,1)";
        taskAssigned = "#(argb,8,8,3)color(1,1,1,1)";
        taskSucceeded = "#(argb,8,8,3)color(0,1,0,1)";
        taskFailed = "#(argb,8,8,3)color(1,0,0,1)";
        taskCanceled = "#(argb,8,8,3)color(1,0.5,0,1)";
        colorCreated[] = {1,1,1,1};
        colorCanceled[] = {0.7,0.7,0.7,1};
        colorDone[] = {0.7,1,0.3,1};
        colorFailed[] = {1,0.3,0.2,1};
        color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
        icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
        iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
        iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
        iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
        iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
        size = 27;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class CustomMark
    {
        color[] = {1,1,1,1};
        icon = "\a3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Tree
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = 12;
        importance = "0.9 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class SmallTree
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = 12;
        importance = "0.6 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Bush
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = "14/2";
        importance = "0.2 * 14 * 0.05 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Church
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Chapel
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Cross
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Rock
    {
        color[] = {0.1,0.1,0.1,0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        size = 12;
        importance = "0.5 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Bunker
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 14;
        importance = "1.5 * 14 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Fortress
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Fountain
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        size = 11;
        importance = "1 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class ViewTower
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        size = 16;
        importance = "2.5 * 16 * 0.05";
        coefMin = 0.5;
        coefMax = 4;
    };
    class Lighthouse
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Quay
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Fuelstation
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Hospital
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class BusStop
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class LineMarker
    {
        textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
        lineWidthThin = 0.008;
        lineWidthThick = 0.014;
        lineDistanceMin = 3e-005;
        lineLengthMin = 5;
    };
    class Transmitter
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Stack
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.4;
        coefMax = 2;
    };
    class Ruin
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        size = 16;
        importance = "1.2 * 16 * 0.05";
        coefMin = 1;
        coefMax = 4;
    };
    class Tourism
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        size = 16;
        importance = "1 * 16 * 0.05";
        coefMin = 0.7;
        coefMax = 4;
    };
    class Watertower
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Waypoint
    {
        color[] = {1,1,1,1};
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
    };
    class WaypointCompleted
    {
        color[] = {1,1,1,1};
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "\a3\ui_f\data\map\mapcontrol\waypointcompleted_ca.paa";
        size = 18;
    };
    moveOnEdges = 1;
    x = "SafeZoneXAbs";
    y = "SafeZoneY + 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    w = "SafeZoneWAbs";
    h = "SafeZoneH - 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    shadow = 0;
    ptsPerSquareSea = 5;
    ptsPerSquareTxt = 20;
    ptsPerSquareCLn = 10;
    ptsPerSquareExp = 10;
    ptsPerSquareCost = 10;
    ptsPerSquareFor = 9;
    ptsPerSquareForEdge = 9;
    ptsPerSquareRoad = 6;
    ptsPerSquareObj = 9;
    showCountourInterval = 0;
    scaleMin = 0.001;
    scaleMax = 1;
    scaleDefault = 0.16;
    maxSatelliteAlpha = 0.85;
    alphaFadeStartScale = 2;
    alphaFadeEndScale = 2;
    colorTrails[] = {0.84,0.76,0.65,0.15};
    colorTrailsFill[] = {0.84,0.76,0.65,0.65};
    widthRailWay = 4;
    fontLabel = "RobotoCondensed";
    sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontGrid = "TahomaB";
    sizeExGrid = 0.02;
    fontUnits = "TahomaB";
    sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontNames = "RobotoCondensed";
    sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
    fontInfo = "RobotoCondensed";
    sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontLevel = "TahomaB";
    sizeExLevel = 0.02;
    text = "#(argb,8,8,3)color(1,1,1,1)";
    idcMarkerColor = -1;
    idcMarkerIcon = -1;
    textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
    showMarkers = 1;
    class power
    {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {1,1,1,1};
    };
    class powersolar
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {1,1,1,1};
    };
    class powerwave
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {1,1,1,1};
    };
    class powerwind
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {1,1,1,1};
    };
    class Shipwreck
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {0,0,0,1};
    };
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscMapControlEmpty
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscMapControlEmpty: RscMapControl
{
    type = 101;
    ptsPerSquareSea = 1000;
    ptsPerSquareTxt = 1000;
    ptsPerSquareCLn = 1000;
    ptsPerSquareExp = 1000;
    ptsPerSquareCost = 1000;
    ptsPerSquareFor = 1000;
    ptsPerSquareForEdge = 1000;
    ptsPerSquareRoad = 1000;
    ptsPerSquareObj = 1000;
    alphaFadeStartScale = 0;
    alphaFadeEndScale = 0;
    colorBackground[] = {1,1,1,1};
    colorOutside[] = {1,1,1,1};
    colorSea[] = {0,0,0,0};
    colorForest[] = {0,0,0,0};
    colorForestBorder[] = {0,0,0,0};
    colorRocks[] = {0,0,0,0};
    colorRocksBorder[] = {0,0,0,0};
    colorLevels[] = {0,0,0,0};
    colorMainCountlines[] = {0,0,0,0};
    colorCountlines[] = {0,0,0,0};
    colorMainCountlinesWater[] = {0,0,0,0};
    colorCountlinesWater[] = {0,0,0,0};
    colorPowerLines[] = {0,0,0,0};
    colorRailWay[] = {0,0,0,0};
    colorNames[] = {0,0,0,0};
    colorInactive[] = {0,0,0,0};
    colorGrid[] = {0,0,0,0};
    colorGridMap[] = {0,0,0,0};
    class Task: Task
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        iconCreated = "#(argb,8,8,3)color(0,0,0,0)";
        iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
        iconDone = "#(argb,8,8,3)color(0,0,0,0)";
        iconFailed = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        colorCreated[] = {0,0,0,0};
        colorCanceled[] = {0,0,0,0};
        colorDone[] = {0,0,0,0};
        colorFailed[] = {0,0,0,0};
        size = 0;
    };
    class Waypoint: Waypoint
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class WaypointCompleted: WaypointCompleted
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class CustomMark: CustomMark
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Command: Command
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Bush: Bush
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Rock: Rock
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class SmallTree: SmallTree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Tree: Tree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class busstop: BusStop
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class fuelstation: Fuelstation
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class hospital: Hospital
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class church: Church
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class lighthouse: Lighthouse
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class power: power
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powersolar: powersolar
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powerwave: powerwave
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class powerwind: powerwind
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class quay: Quay
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class shipwreck: Shipwreck
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class transmitter: Transmitter
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class watertower: Watertower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Bunker: Bunker
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Cross: Cross
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Fortress: Fortress
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Fountain: Fountain
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Chapel: Chapel
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Ruin: Ruin
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Stack: Stack
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class Tourism: Tourism
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
    class ViewTower: ViewTower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
    };
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscDisplayStrategicMap
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscDisplayStrategicMap
{
    scriptName = "RscDisplayStrategicMap";
    scriptPath = "GUI";
    onLoad = "[""onLoad"",_this,""RscDisplayStrategicMap"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "[""onUnload"",_this,""RscDisplayStrategicMap"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
    idd = 506;
    enableSimulation = 0;
    movingEnable = 0;
    effectTilesAlpha = 0.03;
    class controlsBackground
    {
        class Map: RscMapControl
        {
            x = "safezoneXAbs";
            y = "safezoneY";
            w = "safezoneWAbs";
            h = "safezoneH";
            drawObjects = 0;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            maxSatelliteAlpha = "uinamespace getvariable ['RscDisplayStrategicMap_maxSatelliteAlpha',1]";
            alphaFadeStartScale = 100;
            alphaFadeEndScale = 100;
            scaleMin = "uinamespace getvariable ['RscDisplayStrategicMap_scaleMin',0.3]";
            scaleMax = "uinamespace getvariable ['RscDisplayStrategicMap_scaleMax',0.3]";
            scaleDefault = "uinamespace getvariable ['RscDisplayStrategicMap_scaleDefault',0.3]";
            colorBackground[] = {1,1,1,1};
            colorOutside[] = {"uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_R',0]","uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_G',0]","uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_B',0]",1};
            colorSea[] = {0.467,0.631,0.851,0.25};
            colorCountlines[] = {0,0,0,0};
            colorMainCountlines[] = {0,0,0,0};
            colorCountlinesWater[] = {0,0,0,0};
            colorMainCountlinesWater[] = {0,0,0,0};
            colorForest[] = {1,1,1,1};
            colorRocks[] = {0,0,0,0};
            colorGrid[] = {0,0,0,0};
            colorGridMap[] = {0,0,0,0};
            ptsPerSquareTxt = 20;
            ptsPerSquareRoad = 200;
            ptsPerSquareObj = 200;
            ptsPerSquareCLn = 200;
            ptsPerSquareCost = 200;
            ptsPerSquareFor = 200;
            ptsPerSquareForEdge = 200;
            sizeExLabel = 0;
            sizeExGrid = 0;
            sizeExUnits = 0;
            sizeExNames = 0;
            sizeExInfo = 0;
            sizeExLevel = 0;
            moveOnEdges = 1;
            showCountourInterval = 0;
            class Task: Task
            {
                size = 0;
            };
        };
    };
    class controls
    {
        class TileGroup: RscControlsGroupNoScrollbars
        {
            idc = 115099;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
            disableCustomColors = 1;
            onLoad = "[ctrlParent (_this select 0), ""RscDisplayStrategicMap""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
            class Controls
            {
                class TileFrame: RscFrame
                {
                    idc = 114999;
                    x = 0;
                    y = 0;
                    w = "safezoneW";
                    h = "safezoneH";
                    colortext[] = {0,0,0,1};
                };
                class Tile_0_0: RscText
                {
                    idc = 115000;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_0_1: RscText
                {
                    idc = 115001;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_0_2: RscText
                {
                    idc = 115002;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_0_3: RscText
                {
                    idc = 115003;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_0_4: RscText
                {
                    idc = 115004;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_0_5: RscText
                {
                    idc = 115005;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_0: RscText
                {
                    idc = 115010;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_1: RscText
                {
                    idc = 115011;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_2: RscText
                {
                    idc = 115012;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_3: RscText
                {
                    idc = 115013;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_4: RscText
                {
                    idc = 115014;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_1_5: RscText
                {
                    idc = 115015;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_0: RscText
                {
                    idc = 115020;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_1: RscText
                {
                    idc = 115021;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_2: RscText
                {
                    idc = 115022;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_3: RscText
                {
                    idc = 115023;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_4: RscText
                {
                    idc = 115024;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_2_5: RscText
                {
                    idc = 115025;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_0: RscText
                {
                    idc = 115030;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_1: RscText
                {
                    idc = 115031;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_2: RscText
                {
                    idc = 115032;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_3: RscText
                {
                    idc = 115033;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_4: RscText
                {
                    idc = 115034;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_3_5: RscText
                {
                    idc = 115035;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_0: RscText
                {
                    idc = 115040;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_1: RscText
                {
                    idc = 115041;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_2: RscText
                {
                    idc = 115042;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_3: RscText
                {
                    idc = 115043;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_4: RscText
                {
                    idc = 115044;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_4_5: RscText
                {
                    idc = 115045;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_0: RscText
                {
                    idc = 115050;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_1: RscText
                {
                    idc = 115051;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_2: RscText
                {
                    idc = 115052;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_3: RscText
                {
                    idc = 115053;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_4: RscText
                {
                    idc = 115054;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
                class Tile_5_5: RscText
                {
                    idc = 115055;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                };
            };
        };
        class Vignette: RscVignette
        {
            idc = 114998;
        };
        class Tooltip: RscMapControlTooltip
        {
        };
        class Measure: RscControlsGroupNoScrollbars
        {
            idc = 2301;
            x = -1;
            y = -1;
            w = 0;
            h = 0;
            class Controls
            {
                class km0: RscPicture
                {
                    idc = 1200;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class km1: km0
                {
                    idc = 1201;
                };
                class km2: km0
                {
                    idc = 1202;
                };
                class km3: km0
                {
                    idc = 1203;
                };
                class km4: km0
                {
                    idc = 1204;
                };
                class m0: km0
                {
                    idc = 1205;
                };
                class text_0: RscText
                {
                    idc = 1002;
                    text = "0";
                    style = 2;
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class text_m: text_0
                {
                    idc = 1003;
                    style = 0;
                    text = "1 M";
                };
                class text_km: text_0
                {
                    idc = 1004;
                    style = 1;
                    text = "1 Km";
                };
            };
        };
        class ButtonBackground: RscText
        {
            idc = 1000;
            style = 1;
            font = "RobotoCondensedLight";
            shadow = 0;
            x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
            y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
            w = "SafezoneW - (8.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0.7};
        };
        class Missions: RscXListBox
        {
            idc = 1500;
            x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
            y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
            w = "SafezoneW - (8.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ButtonCancel: RscButtonMenuCancel
        {
            default = 1;
            text = "Close";
            x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
            y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
            w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class FadeEffect: RscText
        {
            idc = 1099;
            x = "safezoneXAbs";
            y = "safezoneY";
            w = "safezoneWAbs";
            h = "safezoneH";
            colorBackground[] = {0,0,0,1};
        };
        class MessageBox: RscMessageBox
        {
        };
    };
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/CfgMarkerColors
    SOURCE ADD-ON(S): A3_Ui_F, A3_Missions_F_Beta
*/

class CfgMarkerColors
{
    class Default
    {
        name = "Default";
        color[] = {0,0,0,1};
        scope = 1;
    };
    class ColorBlack: Default
    {
        name = "Black";
        color[] = {0,0,0,1};
        scope = 2;
    };
    class ColorGrey: Default
    {
        name = "Grey";
        color[] = {0.5,0.5,0.5,1};
    };
    class ColorRed: Default
    {
        name = "Red";
        color[] = {0.9,0,0,1};
        scope = 2;
    };
    class ColorBrown: Default
    {
        name = "Brown";
        color[] = {0.5,0.25,0,1};
    };
    class ColorOrange: Default
    {
        name = "Orange";
        color[] = {0.85,0.4,0,1};
    };
    class ColorYellow: Default
    {
        name = "Yellow";
        color[] = {0.85,0.85,0,1};
        scope = 2;
    };
    class ColorKhaki: Default
    {
        name = "Khaki";
        color[] = {0.5,0.6,0.4,1};
    };
    class ColorGreen: Default
    {
        name = "Green";
        color[] = {0,0.8,0,1};
        scope = 2;
    };
    class ColorBlue: Default
    {
        name = "Blue";
        color[] = {0,0,1,1};
        scope = 2;
    };
    class ColorPink: Default
    {
        name = "Pink";
        color[] = {1,0.3,0.4,1};
    };
    class ColorWhite: Default
    {
        name = "White";
        color[] = {1,1,1,1};
        scope = 2;
    };
    class ColorWEST: Default
    {
        name = "BLUFOR";
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        scope = 2;
    };
    class ColorEAST: Default
    {
        name = "OPFOR";
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        scope = 2;
    };
    class ColorGUER: Default
    {
        name = "Independent";
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        scope = 2;
    };
    class ColorCIV: Default
    {
        name = "Civilian";
        color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
        scope = 2;
    };
    class ColorUNKNOWN: Default
    {
        name = "Unknown side";
        color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])","(profilenamespace getvariable ['Map_Unknown_G',1])","(profilenamespace getvariable ['Map_Unknown_B',1])","(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
        scope = 2;
    };
    class colorBLUFOR: ColorWEST
    {
        scope = 0;
    };
    class colorOPFOR: ColorEAST
    {
        scope = 0;
    };
    class colorIndependent: ColorGUER
    {
        scope = 0;
    };
    class colorCivilian: ColorCIV
    {
        scope = 0;
    };
    class Color1_FD_F: Default
    {
        name = "Red (Firing Drills)";
        color[] = {0.694118,0.2,0.223529,1};
        scope = 0;
    };
    class Color2_FD_F: Default
    {
        name = "Green (Firing Drills)";
        color[] = {0.678431,0.74902,0.513726,1};
        scope = 0;
    };
    class Color3_FD_F: Default
    {
        name = "Orange (Firing Drills)";
        color[] = {0.941176,0.509804,0.192157,1};
        scope = 0;
    };
    class Color4_FD_F: Default
    {
        name = "Blue (Firing Drills)";
        color[] = {0.403922,0.545098,0.607843,1};
        scope = 0;
    };
    class Color5_FD_F: Default
    {
        name = "Purple (Firing Drills)";
        color[] = {0.690196,0.25098,0.654902,1};
        scope = 0;
    };
    class Color6_FD_F: Default
    {
        name = "Gray (Firing Drills)";
        color[] = {0.352941,0.34902,0.352941,1};
        scope = 0;
    };
};


/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/CfgLocationTypes
    SOURCE ADD-ON(S): A3_Ui_F, A3_Ui_F_Orange, A3_Ui_F_Enoch
*/


class CfgLocationTypes
{
    class Mount
    {
        name = "Mount";
        drawStyle = "mount";
        texture = "";
        color[] = {0,0,0,1};
        size = 0;
        textSize = 0.04;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class Name
    {
        name = "Name";
        drawStyle = "name";
        texture = "";
        color[] = {0,0,0,1};
        size = 0;
        textSize = 0.04;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class Strategic: Name
    {
        name = "Strategic key point";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
    };
    class StrongpointArea: Strategic
    {
        name = "Strongpoint area";
    };
    class FlatArea: Strategic
    {
        name = "Flat area";
    };
    class FlatAreaCity: FlatArea
    {
        name = "Flat area in a city";
    };
    class FlatAreaCitySmall: FlatAreaCity
    {
        name = "Flat area in a city - small";
    };
    class CityCenter: Strategic
    {
        color[] = {0.25,0.4,0.2,0};
        name = "Center of the village/town/city";
    };
    class Airport: Strategic
    {
        name = "Airport";
        texture = "#(argb,8,8,3)color(1,1,1,1)";
        importance = 20;
    };
    class NameMarine: Name
    {
        name = "Name Marine";
        color[] = {0.05,0.4,0.8,0.8};
        textSize = 0.05;
        importance = 3;
        font = "RobotoCondensed";
    };
    class NameCityCapital: Name
    {
        name = "Name Capital";
        textSize = 0.07;
        importance = 7;
    };
    class NameCity: Name
    {
        name = "Name City";
        textSize = 0.06;
        importance = 6;
    };
    class NameVillage: Name
    {
        name = "Name Village";
        textSize = 0.05;
        importance = 5;
    };
    class NameLocal: Name
    {
        name = "Name Local";
        color[] = {0.44,0.38,0.3,1};
        textSize = 0.05;
        importance = 4;
    };
    class Hill: Name
    {
        name = "Hill";
        drawStyle = "icon";
        color[] = {0,0,0,1};
        size = 14;
        textSize = 0.04;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\hill_ca.paa";
        font = "RobotoCondensed";
    };
    class ViewPoint: Hill
    {
        name = "View Point";
        drawStyle = "icon";
        color[] = {0.78,0,0.05,1};
        textSize = 0.04;
        shadow = 0;
        importance = 1;
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
    };
    class RockArea: Hill
    {
        name = "Rock Area";
        color[] = {0,0,0,1};
        size = 12;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\rockarea_ca.paa";
    };
    class BorderCrossing: Hill
    {
        name = "Border Crossing";
        color[] = {0.78,0,0.05,1};
        size = 16;
        shadow = 0;
        importance = 1;
        texture = "\A3\ui_f\data\map\locationtypes\bordercrossing_ca.paa";
    };
    class VegetationBroadleaf: Hill
    {
        name = "Vegetation Broadleaf";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationbroadleaf_ca.paa";
        font = "RobotoCondensed";
    };
    class VegetationFir: Hill
    {
        name = "Vegetation Fir";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationfir_ca.paa";
        font = "RobotoCondensed";
    };
    class VegetationPalm: Hill
    {
        name = "Vegetation Palm";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationpalm_ca.paa";
        font = "RobotoCondensed";
    };
    class VegetationVineyard: Hill
    {
        name = "Vegetation Vineyard";
        color[] = {0.25,0.4,0.2,1};
        size = 16;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationvineyard_ca.paa";
        font = "RobotoCondensed";
    };
    class fakeTown: Name
    {
        size = 0;
    };
    class Area
    {
        color[] = {0,0,0,0.5};
        drawStyle = "area";
        font = "PuristaMedium";
        name = "Area";
        shadow = 0;
        textSize = 0.05;
        texture = "#(argb,8,8,3)color(1,1,1,1)";
    };
    class Flag: Hill
    {
    };
    class b_unknown: Flag
    {
        name = "Unknown";
        icon = "\A3\ui_f\data\map\markers\nato\b_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_unknown.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
    };
    class o_unknown: b_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
    };
    class n_unknown: b_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
    };
    class b_inf: b_unknown
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
    };
    class o_inf: o_unknown
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
    };
    class n_inf: n_unknown
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
    };
    class b_motor_inf: b_unknown
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
    };
    class o_motor_inf: o_unknown
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
    };
    class n_motor_inf: n_unknown
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
    };
    class b_mech_inf: b_unknown
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
    };
    class o_mech_inf: o_unknown
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
    };
    class n_mech_inf: n_unknown
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
    };
    class b_armor: b_unknown
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
    };
    class o_armor: o_unknown
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
    };
    class n_armor: n_unknown
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
    };
    class b_recon: b_unknown
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
    };
    class o_recon: o_unknown
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
    };
    class n_recon: n_unknown
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
    };
    class b_air: b_unknown
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_air.paa";
    };
    class o_air: o_unknown
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_air.paa";
    };
    class n_air: n_unknown
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_air.paa";
    };
    class b_plane: b_unknown
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
    };
    class o_plane: o_unknown
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
    };
    class n_plane: n_unknown
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
    };
    class b_uav: b_unknown
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
    };
    class o_uav: o_unknown
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
    };
    class n_uav: n_unknown
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
    };
    class b_naval: b_unknown
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
    };
    class o_naval: o_unknown
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
    };
    class n_naval: n_unknown
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
    };
    class b_med: b_unknown
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_med.paa";
    };
    class o_med: o_unknown
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\o_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_med.paa";
    };
    class n_med: n_unknown
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\n_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_med.paa";
    };
    class b_art: b_unknown
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_art.paa";
    };
    class o_art: o_unknown
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_art.paa";
    };
    class n_art: n_unknown
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_art.paa";
    };
    class b_mortar: b_unknown
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
    };
    class o_mortar: o_unknown
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
    };
    class n_mortar: n_unknown
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
    };
    class b_hq: b_unknown
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
    };
    class o_hq: o_unknown
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
    };
    class n_hq: n_unknown
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
    };
    class b_support: b_unknown
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_support.paa";
    };
    class o_support: o_unknown
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_support.paa";
    };
    class n_support: n_unknown
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_support.paa";
    };
    class b_maint: b_unknown
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
    };
    class o_maint: o_unknown
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
    };
    class n_maint: n_unknown
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
    };
    class b_service: b_unknown
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\b_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_service.paa";
    };
    class o_service: o_unknown
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\o_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_service.paa";
    };
    class n_service: n_unknown
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\n_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_service.paa";
    };
    class b_installation: b_unknown
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
    };
    class o_installation: o_unknown
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
    };
    class n_installation: n_unknown
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
    };
    class u_installation: n_unknown
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
    };
    class b_antiair: b_unknown
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
    };
    class o_antiair: o_unknown
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
    };
    class n_antiair: n_unknown
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
    };
    class c_unknown: b_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
    };
    class c_car: c_unknown
    {
        name = "Car";
        icon = "\A3\ui_f\data\map\markers\nato\c_car.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_car.paa";
    };
    class c_ship: c_unknown
    {
        name = "Ship";
        icon = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
    };
    class c_air: c_unknown
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\c_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_air.paa";
    };
    class c_plane: c_unknown
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
    };
    class group_0: b_unknown
    {
        name = "Fire Team";
        icon = "\A3\ui_f\data\map\markers\nato\group_0.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_0.paa";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        commander = "Corporal";
    };
    class group_1: group_0
    {
        name = "Squad";
        icon = "\A3\ui_f\data\map\markers\nato\group_1.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_1.paa";
        commander = "Sergeant";
    };
    class group_2: group_0
    {
        name = "Section";
        icon = "\A3\ui_f\data\map\markers\nato\group_2.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_2.paa";
        commander = "Sergeant";
    };
    class group_3: group_0
    {
        name = "Platoon";
        icon = "\A3\ui_f\data\map\markers\nato\group_3.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_3.paa";
        commander = "Lieutenant";
    };
    class group_4: group_0
    {
        name = "Company";
        icon = "\A3\ui_f\data\map\markers\nato\group_4.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_4.paa";
        commander = "Captain";
    };
    class group_5: group_0
    {
        name = "Battalion";
        icon = "\A3\ui_f\data\map\markers\nato\group_5.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_5.paa";
        commander = "Colonel";
    };
    class group_6: group_0
    {
        name = "Regiment";
        icon = "\A3\ui_f\data\map\markers\nato\group_6.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_6.paa";
        commander = "Colonel";
    };
    class group_7: group_0
    {
        name = "Brigade";
        icon = "\A3\ui_f\data\map\markers\nato\group_7.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_7.paa";
        commander = "General";
    };
    class group_8: group_0
    {
        name = "Division";
        icon = "\A3\ui_f\data\map\markers\nato\group_8.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_8.paa";
        commander = "General";
    };
    class group_9: group_0
    {
        name = "Corps";
        icon = "\A3\ui_f\data\map\markers\nato\group_9.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_9.paa";
        commander = "General";
    };
    class group_10: group_0
    {
        name = "Army";
        icon = "\A3\ui_f\data\map\markers\nato\group_10.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_10.paa";
        commander = "General";
    };
    class group_11: group_0
    {
        name = "Army Group";
        icon = "\A3\ui_f\data\map\markers\nato\group_11.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_11.paa";
        commander = "General";
    };
    class respawn_unknown: Flag
    {
        scope = 1;
        name = "Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_inf: Flag
    {
        scope = 1;
        name = "Infantry Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_motor: Flag
    {
        scope = 1;
        name = "Car Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_armor: Flag
    {
        scope = 1;
        name = "Armor Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_air: Flag
    {
        scope = 1;
        name = "Helicopter Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_plane: Flag
    {
        scope = 1;
        name = "Plane Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_naval: Flag
    {
        scope = 1;
        name = "Naval Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class respawn_para: Flag
    {
        scope = 1;
        name = "Airborne Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
    };
    class Invisible
    {
        drawStyle = "area";
        color[] = {0,0,0,0};
        texture = "#(argb,8,8,3)color(0,0,0,0)";
        font = "RobotoCondensed";
        textSize = 0;
        shadow = 0;
    };
    class HistoricalSite
    {
        drawStyle = "area";
        color[] = {0,0,0,0};
        texture = "#(argb,8,8,3)color(1,1,1,1)";
        font = "RobotoCondensed";
        textSize = 0;
        shadow = 0;
    };
    class CivilDefense: Strategic
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
        color[] = {1,1,1,1};
    };
    class CulturalProperty: Strategic
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
        color[] = {1,1,1,1};
    };
    class DangerousForces: Strategic
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
        color[] = {1,1,1,1};
    };
    class SafetyZone: Strategic
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
        color[] = {1,1,1,1};
    };
    class HandDrawnCamp
    {
        color[] = {0,0,0,1};
        drawStyle = "icon";
        texture = "#(rgb,1,1,1)color(0,0,0,0)";
        font = "RobotoCondensed";
        name = "Name";
        shadow = 0;
        size = 32;
        textSize = 0.08;
    };
};