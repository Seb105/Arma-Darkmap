/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMap
    SOURCE ADD-ON(S): A3_3DEN
*/

class ctrlMap
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
    class WaypointCompleted
    {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class CustomMark
    {
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class Command
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Bush
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.007;
        size = 7;
    };
    class SmallTree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.36;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Tree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.72;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Rock
    {
        color[] = {0.1,0.1,0.1,0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        importance = 0.3;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
    };
    class BusStop
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        coefMax = 4;
        coefMin = 0.25;
        importance = 0.007;
        size = 7;
    };
    class FuelStation
    {
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        importance = 1;
        size = 24;
    };
    class Hospital
    {
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Church
    {
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Lighthouse
    {
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Power
    {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerSolar
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWave
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWind
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Quay
    {
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Transmitter
    {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Watertower
    {
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Cross
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Chapel
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Shipwreck
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Bunker
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.05;
        size = 14;
    };
    class Fortress
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.6;
        size = 16;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Fountain
    {
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        importance = 0.6;
        size = 11;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Ruin
    {
        coefMax = 4;
        coefMin = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        importance = 0.96;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Stack
    {
        coefMax = 2;
        coefMin = 0.4;
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        importance = 1.6;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Tourism
    {
        coefMax = 4;
        coefMin = 0.7;
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        importance = 2.8;
        size = 16;
        color[] = {0,0,0,1};
    };
    class ViewTower
    {
        coefMax = 4;
        coefMin = 0.5;
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        importance = 2;
        size = 16;
        color[] = {0,0,0,1};
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
    access = 0;
    idc = -1;
    default = 0;
    show = 1;
    fade = 0;
    blinkingPeriod = 0;
    deletable = 0;
    tooltip = "";
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
    class ScrollBar
    {
        width = 0;
        height = 0;
        scrollSpeed = 0.06;
        arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
        arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
        border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
        thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
        color[] = {1,1,1,1};
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMapEmpty
    SOURCE ADD-ON(S): A3_3DEN
*/

class ctrlMapEmpty
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
    class Task
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
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Waypoint
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class WaypointCompleted
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class CustomMark
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Command
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Bush
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 0.25;
        importance = 0.007;
    };
    class Rock
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 0.3;
        coefMax = 4;
        coefMin = 0.25;
    };
    class SmallTree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 0.36;
        coefMax = 4;
        coefMin = 0.25;
    };
    class Tree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 0.72;
        coefMax = 4;
        coefMin = 0.25;
    };
    class busstop
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 0.25;
        importance = 0.007;
    };
    class fuelstation
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class hospital
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class church
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class lighthouse
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class power
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class powersolar
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class powerwave
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class powerwind
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class quay
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class shipwreck
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class transmitter
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class watertower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 0.85;
        importance = 1;
    };
    class Bunker
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 0.25;
        importance = 1.05;
    };
    class Cross
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Fortress
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1.6;
        coefMax = 4;
        coefMin = 0.25;
    };
    class Fountain
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 0.6;
        coefMax = 4;
        coefMin = 0.25;
    };
    class Chapel
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Ruin
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 1;
        importance = 0.96;
    };
    class Stack
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 2;
        coefMin = 0.4;
        importance = 1.6;
    };
    class Tourism
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 0.7;
        importance = 2.8;
    };
    class ViewTower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        coefMax = 4;
        coefMin = 0.5;
        importance = 2;
    };
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
    ptsPerSquareForLod1 = 4;
    ptsPerSquareForLod2 = 1;
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
    text = "#(argb,8,8,3)color(1,1,1,1)";
    colorForestTextured[] = {0.624,0.78,0.388,0.25};
    colorTracks[] = {0.84,0.76,0.65,0.15};
    colorTracksFill[] = {0.84,0.76,0.65,1};
    colorRoads[] = {0.7,0.7,0.7,1};
    colorRoadsFill[] = {1,1,1,1};
    colorMainRoads[] = {0.9,0.5,0.3,1};
    colorMainRoadsFill[] = {1,0.6,0.4,1};
    colorTrails[] = {0.84,0.76,0.65,0.15};
    colorTrailsFill[] = {0.84,0.76,0.65,0.65};
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
    class ActiveMarker
    {
        color[] = {0,0,0,1};
        size = 2;
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
    access = 0;
    idc = -1;
    default = 0;
    show = 1;
    fade = 0;
    blinkingPeriod = 0;
    deletable = 0;
    tooltip = "";
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
    class ScrollBar
    {
        width = 0;
        height = 0;
        scrollSpeed = 0.06;
        arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
        arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
        border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
        thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
        color[] = {1,1,1,1};
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMapMain
    SOURCE ADD-ON(S): 
*/


class ctrlMapMain
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
    class WaypointCompleted
    {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class CustomMark
    {
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class Command
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Bush
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.007;
        size = 7;
    };
    class SmallTree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.36;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Tree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.72;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Rock
    {
        color[] = {0.1,0.1,0.1,0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        importance = 0.3;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
    };
    class BusStop
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        coefMax = 4;
        coefMin = 0.25;
        importance = 0.007;
        size = 7;
    };
    class FuelStation
    {
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        importance = 1;
        size = 24;
    };
    class Hospital
    {
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Church
    {
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Lighthouse
    {
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Power
    {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerSolar
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWave
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWind
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Quay
    {
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Transmitter
    {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Watertower
    {
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Cross
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Chapel
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Shipwreck
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Bunker
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.05;
        size = 14;
    };
    class Fortress
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.6;
        size = 16;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Fountain
    {
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        importance = 0.6;
        size = 11;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Ruin
    {
        coefMax = 4;
        coefMin = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        importance = 0.96;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Stack
    {
        coefMax = 2;
        coefMin = 0.4;
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        importance = 1.6;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Tourism
    {
        coefMax = 4;
        coefMin = 0.7;
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        importance = 2.8;
        size = 16;
        color[] = {0,0,0,1};
    };
    class ViewTower
    {
        coefMax = 4;
        coefMin = 0.5;
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        importance = 2;
        size = 16;
        color[] = {0,0,0,1};
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
    access = 0;
    idc = -1;
    default = 0;
    show = 1;
    fade = 0;
    blinkingPeriod = 0;
    deletable = 0;
    tooltip = "";
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
    class ScrollBar
    {
        width = 0;
        height = 0;
        scrollSpeed = 0.06;
        arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
        arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
        border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
        thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
        color[] = {1,1,1,1};
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscMap
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscMap
{
    class controls
    {
        class Map
        {
            shadow = 0;
            moveOnEdges = 0;
            x = "SafeZoneXAbs";
            y = "SafeZoneY";
            w = "SafeZoneWAbs";
            h = "SafeZoneH";
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
    };
    idd = -1;
    access = 0;
};

/*
    INCLUDE INHERITED ENTRIES: true
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
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/RscMapControlEmpty
    SOURCE ADD-ON(S): A3_Ui_F
*/

class RscMapControlEmpty
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
    class Task
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
        taskNone = "#(argb,8,8,3)color(0,0,0,0)";
        taskCreated = "#(argb,8,8,3)color(0,0,0,1)";
        taskAssigned = "#(argb,8,8,3)color(1,1,1,1)";
        taskSucceeded = "#(argb,8,8,3)color(0,1,0,1)";
        taskFailed = "#(argb,8,8,3)color(1,0,0,1)";
        taskCanceled = "#(argb,8,8,3)color(1,0.5,0,1)";
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Waypoint
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class WaypointCompleted
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class CustomMark
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Command
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Bush
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "0.2 * 14 * 0.05 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Rock
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "0.5 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class SmallTree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "0.6 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Tree
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "0.9 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class busstop
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class fuelstation
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class hospital
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class church
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class lighthouse
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class power
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class powersolar
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class powerwave
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class powerwind
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class quay
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class shipwreck
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class transmitter
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class watertower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Bunker
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "1.5 * 14 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Cross
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Fortress
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "2 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Fountain
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "1 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Chapel
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Ruin
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "1.2 * 16 * 0.05";
        coefMin = 1;
        coefMax = 4;
    };
    class Stack
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "2 * 16 * 0.05";
        coefMin = 0.4;
        coefMax = 2;
    };
    class Tourism
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "1 * 16 * 0.05";
        coefMin = 0.7;
        coefMax = 4;
    };
    class ViewTower
    {
        icon = "#(argb,8,8,3)color(0,0,0,0)";
        color[] = {0,0,0,0};
        size = 0;
        importance = "2.5 * 16 * 0.05";
        coefMin = 0.5;
        coefMax = 4;
    };
    deletable = 0;
    fade = 0;
    access = 0;
    idc = 51;
    style = 48;
    colorText[] = {0,0,0,1};
    font = "TahomaB";
    sizeEx = 0.04;
    colorTracks[] = {0.84,0.76,0.65,0.15};
    colorRoads[] = {0.7,0.7,0.7,1};
    colorMainRoads[] = {0.9,0.5,0.3,1};
    colorTracksFill[] = {0.84,0.76,0.65,1};
    colorRoadsFill[] = {1,1,1,1};
    colorMainRoadsFill[] = {1,0.6,0.4,1};
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
    class LineMarker
    {
        textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
        lineWidthThin = 0.008;
        lineWidthThick = 0.014;
        lineDistanceMin = 3e-005;
        lineLengthMin = 5;
    };
    moveOnEdges = 1;
    x = "SafeZoneXAbs";
    y = "SafeZoneY + 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    w = "SafeZoneWAbs";
    h = "SafeZoneH - 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    shadow = 0;
    showCountourInterval = 0;
    scaleMin = 0.001;
    scaleMax = 1;
    scaleDefault = 0.16;
    maxSatelliteAlpha = 0.85;
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
};

/*
    INCLUDE INHERITED ENTRIES: true
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
        class Map
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
            class Task
            {
                size = 0;
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
                importance = 1;
                coefMin = 1;
                coefMax = 1;
            };
            deletable = 0;
            fade = 0;
            access = 0;
            type = 101;
            idc = 51;
            style = 48;
            colorText[] = {0,0,0,1};
            font = "TahomaB";
            sizeEx = 0.04;
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
            shadow = 0;
            ptsPerSquareSea = 5;
            ptsPerSquareExp = 10;
            colorTrails[] = {0.84,0.76,0.65,0.15};
            colorTrailsFill[] = {0.84,0.76,0.65,0.65};
            widthRailWay = 4;
            fontLabel = "RobotoCondensed";
            fontGrid = "TahomaB";
            fontUnits = "TahomaB";
            fontNames = "RobotoCondensed";
            fontInfo = "RobotoCondensed";
            fontLevel = "TahomaB";
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
    };
    class controls
    {
        class TileGroup
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
                class TileFrame
                {
                    idc = 114999;
                    x = 0;
                    y = 0;
                    w = "safezoneW";
                    h = "safezoneH";
                    colortext[] = {0,0,0,1};
                    type = 0;
                    deletable = 0;
                    style = 64;
                    shadow = 2;
                    colorBackground[] = {0,0,0,0};
                    font = "RobotoCondensed";
                    sizeEx = 0.02;
                    text = "";
                };
                class Tile_0_0
                {
                    idc = 115000;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_0_1
                {
                    idc = 115001;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_0_2
                {
                    idc = 115002;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_0_3
                {
                    idc = 115003;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_0_4
                {
                    idc = 115004;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_0_5
                {
                    idc = 115005;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_0
                {
                    idc = 115010;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_1
                {
                    idc = 115011;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_2
                {
                    idc = 115012;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_3
                {
                    idc = 115013;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_4
                {
                    idc = 115014;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_1_5
                {
                    idc = 115015;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_0
                {
                    idc = 115020;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_1
                {
                    idc = 115021;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_2
                {
                    idc = 115022;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_3
                {
                    idc = 115023;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_4
                {
                    idc = 115024;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_2_5
                {
                    idc = 115025;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_0
                {
                    idc = 115030;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_1
                {
                    idc = 115031;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_2
                {
                    idc = 115032;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_3
                {
                    idc = 115033;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_4
                {
                    idc = 115034;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_3_5
                {
                    idc = 115035;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_0
                {
                    idc = 115040;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_1
                {
                    idc = 115041;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_2
                {
                    idc = 115042;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_3
                {
                    idc = 115043;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_4
                {
                    idc = 115044;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_4_5
                {
                    idc = 115045;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_0
                {
                    idc = 115050;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_1
                {
                    idc = 115051;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_2
                {
                    idc = 115052;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_3
                {
                    idc = 115053;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_4
                {
                    idc = 115054;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Tile_5_5
                {
                    idc = 115055;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0,0,0,0.1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
            };
            class VScrollbar
            {
                width = 0;
                color[] = {1,1,1,1};
                autoScrollEnabled = 1;
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                height = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            class HScrollbar
            {
                height = 0;
                color[] = {1,1,1,1};
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                width = 0;
                autoScrollEnabled = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            deletable = 0;
            fade = 0;
            type = 15;
            shadow = 0;
            style = 16;
        };
        class Vignette
        {
            idc = 114998;
            x = "safezoneXAbs";
            y = "safezoneY";
            w = "safezoneWAbs";
            h = "safezoneH";
            text = "\A3\ui_f\data\gui\rsccommon\rscvignette\vignette_gs.paa";
            colortext[] = {0,0,0,0.3};
            deletable = 0;
            fade = 0;
            access = 0;
            type = 0;
            style = 48;
            colorBackground[] = {0,0,0,0};
            font = "TahomaB";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
            shadow = 0;
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
        };
        class Tooltip
        {
            idc = 2350;
            x = -1;
            y = -1;
            w = 0;
            h = 0;
            class Controls
            {
                class Background
                {
                    idc = 235000;
                    x = 1;
                    y = 1;
                    w = 1;
                    h = 1;
                    colorBackground[] = {0,0,0,1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class InfoBackground
                {
                    idc = 235001;
                    x = 0;
                    y = 0;
                    w = 1;
                    h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {1,1,1,0.15};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 13;
                    style = 0;
                    colorText[] = {1,1,1,1};
                    class Attributes
                    {
                        font = "RobotoCondensed";
                        color = "#ffffff";
                        colorLink = "#D09B43";
                        align = "left";
                        shadow = 1;
                    };
                    text = "";
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    shadow = 1;
                };
                class Info
                {
                    idc = 235002;
                    x = 1;
                    y = 1;
                    w = 1;
                    h = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 13;
                    style = 0;
                    colorText[] = {1,1,1,1};
                    class Attributes
                    {
                        font = "RobotoCondensed";
                        color = "#ffffff";
                        colorLink = "#D09B43";
                        align = "left";
                        shadow = 1;
                    };
                    text = "";
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    shadow = 1;
                };
                class AssetsBackground
                {
                    idc = 235003;
                    x = 1;
                    y = 1;
                    w = 1;
                    h = 1;
                    colorBackground[] = {0,0,0,1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 13;
                    style = 0;
                    colorText[] = {1,1,1,1};
                    class Attributes
                    {
                        font = "RobotoCondensed";
                        color = "#ffffff";
                        colorLink = "#D09B43";
                        align = "left";
                        shadow = 1;
                    };
                    text = "";
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    shadow = 1;
                };
                class Assets
                {
                    idc = 235004;
                    x = 1;
                    y = 1;
                    w = 1;
                    h = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 13;
                    style = 0;
                    colorText[] = {1,1,1,1};
                    class Attributes
                    {
                        font = "RobotoCondensed";
                        color = "#ffffff";
                        colorLink = "#D09B43";
                        align = "left";
                        shadow = 1;
                    };
                    text = "";
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    shadow = 1;
                };
                class PictureBackground
                {
                    idc = 235005;
                    x = 1;
                    y = 1;
                    w = 1;
                    h = 1;
                    colorBackground[] = {0,0,0,1};
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class PictureX
                {
                    idc = 235006;
                    x = -1;
                    y = -1;
                    w = 0;
                    h = 0;
                    autoplay = 1;
                    loops = 1;
                    style = "0x30 + 0x800";
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
            };
            class VScrollbar
            {
                width = 0;
                color[] = {1,1,1,1};
                autoScrollEnabled = 1;
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                height = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            class HScrollbar
            {
                height = 0;
                color[] = {1,1,1,1};
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                width = 0;
                autoScrollEnabled = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            deletable = 0;
            fade = 0;
            type = 15;
            shadow = 0;
            style = 16;
        };
        class Measure
        {
            idc = 2301;
            x = -1;
            y = -1;
            w = 0;
            h = 0;
            class Controls
            {
                class km0
                {
                    idc = 1200;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class km1
                {
                    idc = 1201;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class km2
                {
                    idc = 1202;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class km3
                {
                    idc = 1203;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class km4
                {
                    idc = 1204;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class m0
                {
                    idc = 1205;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    style = 48;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    font = "TahomaB";
                    sizeEx = 0;
                    lineSpacing = 0;
                    text = "";
                    fixedWidth = 0;
                    shadow = 0;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class text_0
                {
                    idc = 1002;
                    text = "0";
                    style = 2;
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    fixedWidth = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class text_m
                {
                    idc = 1003;
                    style = 0;
                    text = "1 M";
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    fixedWidth = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class text_km
                {
                    idc = 1004;
                    style = 1;
                    text = "1 Km";
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorBackground[] = {0,0,0,0};
                    colorText[] = {1,1,1,1};
                    fixedWidth = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
            };
            class VScrollbar
            {
                width = 0;
                color[] = {1,1,1,1};
                autoScrollEnabled = 1;
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                height = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            class HScrollbar
            {
                height = 0;
                color[] = {1,1,1,1};
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                width = 0;
                autoScrollEnabled = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            deletable = 0;
            fade = 0;
            type = 15;
            shadow = 0;
            style = 16;
        };
        class ButtonBackground
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
            deletable = 0;
            fade = 0;
            access = 0;
            type = 0;
            colorText[] = {1,1,1,1};
            text = "";
            fixedWidth = 0;
            colorShadow[] = {0,0,0,0.5};
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            linespacing = 1;
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
        };
        class Missions
        {
            idc = 1500;
            x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
            y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
            w = "SafezoneW - (8.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            deletable = 0;
            fade = 0;
            type = 42;
            color[] = {1,1,1,0.6};
            colorActive[] = {1,1,1,1};
            colorDisabled[] = {1,1,1,0.25};
            colorSelect[] = {0.95,0.95,0.95,1};
            colorText[] = {1,1,1,1};
            soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
            colorPicture[] = {1,1,1,1};
            colorPictureSelected[] = {1,1,1,1};
            colorPictureDisabled[] = {1,1,1,0.25};
            colorPictureRight[] = {1,1,1,1};
            colorPictureRightSelected[] = {1,1,1,1};
            colorPictureRightDisabled[] = {1,1,1,0.25};
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
            style = "0x400 + 0x02 +	0x10";
            shadow = 2;
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
            border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
            font = "RobotoCondensed";
            sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
        };
        class ButtonCancel
        {
            default = 1;
            text = "Close";
            x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
            y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
            w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            idc = 2;
            shortcuts[] = {"0x00050000 + 1"};
            type = 16;
            style = "0x02 + 0xC0";
            shadow = 0;
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
            colorBackground[] = {0,0,0,0.8};
            colorBackgroundFocused[] = {1,1,1,1};
            colorBackground2[] = {0.75,0.75,0.75,1};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,1};
            color2[] = {0,0,0,1};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,1,1,0.25};
            textSecondary = "";
            colorSecondary[] = {1,1,1,1};
            colorFocusedSecondary[] = {0,0,0,1};
            color2Secondary[] = {0,0,0,1};
            colorDisabledSecondary[] = {1,1,1,0.25};
            sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            fontSecondary = "PuristaLight";
            period = 1.2;
            periodFocus = 1.2;
            periodOver = 1.2;
            size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
            class TextPos
            {
                left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
                right = 0.005;
                bottom = 0;
            };
            class Attributes
            {
                font = "PuristaLight";
                color = "#E5E5E5";
                align = "left";
                shadow = "false";
            };
            class ShortcutPos
            {
                left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                top = 0;
                w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            };
            soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
            soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
            soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
            soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
            deletable = 0;
            fade = 0;
            class HitZone
            {
                left = 0;
                top = 0;
                right = 0;
                bottom = 0;
            };
            textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
            font = "RobotoCondensed";
            url = "";
            action = "";
            class AttributesImage
            {
                font = "RobotoCondensed";
                color = "#E5E5E5";
                align = "left";
            };
        };
        class FadeEffect
        {
            idc = 1099;
            x = "safezoneXAbs";
            y = "safezoneY";
            w = "safezoneWAbs";
            h = "safezoneH";
            colorBackground[] = {0,0,0,1};
            deletable = 0;
            fade = 0;
            access = 0;
            type = 0;
            colorText[] = {1,1,1,1};
            text = "";
            fixedWidth = 0;
            style = 0;
            shadow = 1;
            colorShadow[] = {0,0,0,0.5};
            font = "RobotoCondensed";
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            linespacing = 1;
            tooltipColorText[] = {1,1,1,1};
            tooltipColorBox[] = {1,1,1,1};
            tooltipColorShade[] = {0,0,0,0.65};
        };
        class MessageBox
        {
            idc = 2351;
            x = -1;
            y = -1;
            w = 0;
            h = 0;
            class Controls
            {
                class BcgCommonTop
                {
                    idc = 235100;
                    x = 0;
                    y = 0;
                    w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
                    align = "top";
                    moving = 1;
                    background = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    colorText[] = {1,1,1,1};
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class BcgCommon
                {
                    idc = 235101;
                    x = 0;
                    y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    background = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class Text
                {
                    idc = 235102;
                    x = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 13;
                    style = 0;
                    colorText[] = {1,1,1,1};
                    class Attributes
                    {
                        font = "RobotoCondensed";
                        color = "#ffffff";
                        colorLink = "#D09B43";
                        align = "left";
                        shadow = 1;
                    };
                    text = "";
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    shadow = 1;
                };
                class BackgroundButtonOK
                {
                    idc = 235103;
                    x = 0;
                    y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    background = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class BackgroundButtonMiddle
                {
                    idc = 235104;
                    x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    background = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class BackgroundButtonCancel
                {
                    idc = 235105;
                    x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorBackground[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    background = 1;
                    deletable = 0;
                    fade = 0;
                    access = 0;
                    type = 0;
                    text = "";
                    fixedWidth = 0;
                    style = 0;
                    shadow = 1;
                    colorShadow[] = {0,0,0,0.5};
                    font = "RobotoCondensed";
                    SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    linespacing = 1;
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                };
                class ButtonOK
                {
                    default = 1;
                    idc = 235106;
                    colorBackground[] = {0,0,0,1};
                    x = 0;
                    y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    shortcuts[] = {"0x00050000 + 0",28,57,156};
                    text = "OK";
                    soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
                    type = 16;
                    style = "0x02 + 0xC0";
                    shadow = 0;
                    animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
                    colorBackgroundFocused[] = {1,1,1,1};
                    colorBackground2[] = {0.75,0.75,0.75,1};
                    color[] = {1,1,1,1};
                    colorFocused[] = {0,0,0,1};
                    color2[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    colorDisabled[] = {1,1,1,0.25};
                    textSecondary = "";
                    colorSecondary[] = {1,1,1,1};
                    colorFocusedSecondary[] = {0,0,0,1};
                    color2Secondary[] = {0,0,0,1};
                    colorDisabledSecondary[] = {1,1,1,0.25};
                    sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    fontSecondary = "PuristaLight";
                    period = 1.2;
                    periodFocus = 1.2;
                    periodOver = 1.2;
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                    class TextPos
                    {
                        left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
                        right = 0.005;
                        bottom = 0;
                    };
                    class Attributes
                    {
                        font = "PuristaLight";
                        color = "#E5E5E5";
                        align = "left";
                        shadow = "false";
                    };
                    class ShortcutPos
                    {
                        left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        top = 0;
                        w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    };
                    soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
                    soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
                    soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
                    deletable = 0;
                    fade = 0;
                    class HitZone
                    {
                        left = 0;
                        top = 0;
                        right = 0;
                        bottom = 0;
                    };
                    textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
                    font = "RobotoCondensed";
                    url = "";
                    action = "";
                    class AttributesImage
                    {
                        font = "RobotoCondensed";
                        color = "#E5E5E5";
                        align = "left";
                    };
                };
                class ButtonCancel
                {
                    idc = 235107;
                    colorBackground[] = {0,0,0,1};
                    x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    shortcuts[] = {"0x00050000 + 1"};
                    text = "Cancel";
                    type = 16;
                    style = "0x02 + 0xC0";
                    default = 0;
                    shadow = 0;
                    animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
                    animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
                    animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
                    colorBackgroundFocused[] = {1,1,1,1};
                    colorBackground2[] = {0.75,0.75,0.75,1};
                    color[] = {1,1,1,1};
                    colorFocused[] = {0,0,0,1};
                    color2[] = {0,0,0,1};
                    colorText[] = {1,1,1,1};
                    colorDisabled[] = {1,1,1,0.25};
                    textSecondary = "";
                    colorSecondary[] = {1,1,1,1};
                    colorFocusedSecondary[] = {0,0,0,1};
                    color2Secondary[] = {0,0,0,1};
                    colorDisabledSecondary[] = {1,1,1,0.25};
                    sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    fontSecondary = "PuristaLight";
                    period = 1.2;
                    periodFocus = 1.2;
                    periodOver = 1.2;
                    size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    tooltipColorText[] = {1,1,1,1};
                    tooltipColorBox[] = {1,1,1,1};
                    tooltipColorShade[] = {0,0,0,0.65};
                    class TextPos
                    {
                        left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
                        right = 0.005;
                        bottom = 0;
                    };
                    class Attributes
                    {
                        font = "PuristaLight";
                        color = "#E5E5E5";
                        align = "left";
                        shadow = "false";
                    };
                    class ShortcutPos
                    {
                        left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        top = 0;
                        w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                        h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    };
                    soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
                    soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
                    soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
                    soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
                    deletable = 0;
                    fade = 0;
                    class HitZone
                    {
                        left = 0;
                        top = 0;
                        right = 0;
                        bottom = 0;
                    };
                    textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
                    font = "RobotoCondensed";
                    url = "";
                    action = "";
                    class AttributesImage
                    {
                        font = "RobotoCondensed";
                        color = "#E5E5E5";
                        align = "left";
                    };
                };
            };
            class VScrollbar
            {
                width = 0;
                color[] = {1,1,1,1};
                autoScrollEnabled = 1;
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                height = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            class HScrollbar
            {
                height = 0;
                color[] = {1,1,1,1};
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                shadow = 0;
                scrollSpeed = 0.06;
                width = 0;
                autoScrollEnabled = 0;
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
            };
            deletable = 0;
            fade = 0;
            type = 15;
            shadow = 0;
            style = 16;
        };
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    CONFIG PATH: bin\config.bin/ctrlMap
    SOURCE ADD-ON(S): A3_3DEN
*/

class ctrlMap
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
    class WaypointCompleted
    {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class CustomMark
    {
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        coefMax = 1;
        coefMin = 1;
        color[] = {0,0,0,1};
        importance = 1;
        size = 24;
    };
    class Command
    {
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        coefMax = 1;
        coefMin = 1;
        importance = 1;
    };
    class Bush
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.007;
        size = 7;
    };
    class SmallTree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.36;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Tree
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.72;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0.45,0.64,0.33,0.4};
    };
    class Rock
    {
        color[] = {0.1,0.1,0.1,0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        importance = 0.3;
        size = 12;
        coefMax = 4;
        coefMin = 0.25;
    };
    class BusStop
    {
        color[] = {0.45,0.64,0.33,0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        coefMax = 4;
        coefMin = 0.25;
        importance = 0.007;
        size = 7;
    };
    class FuelStation
    {
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        importance = 1;
        size = 24;
    };
    class Hospital
    {
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Church
    {
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Lighthouse
    {
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Power
    {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerSolar
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWave
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class PowerWind
    {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Quay
    {
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Transmitter
    {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Watertower
    {
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        coefMax = 1;
        coefMin = 0.85;
        color[] = {1,1,1,1};
        importance = 1;
        size = 24;
    };
    class Cross
    {
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Chapel
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Shipwreck
    {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        color[] = {0,0,0,1};
        coefMax = 1;
        coefMin = 1;
        importance = 1;
        size = 24;
    };
    class Bunker
    {
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.05;
        size = 14;
    };
    class Fortress
    {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        importance = 1.6;
        size = 16;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Fountain
    {
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        importance = 0.6;
        size = 11;
        coefMax = 4;
        coefMin = 0.25;
        color[] = {0,0,0,1};
    };
    class Ruin
    {
        coefMax = 4;
        coefMin = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        importance = 0.96;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Stack
    {
        coefMax = 2;
        coefMin = 0.4;
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        importance = 1.6;
        size = 16;
        color[] = {0,0,0,1};
    };
    class Tourism
    {
        coefMax = 4;
        coefMin = 0.7;
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        importance = 2.8;
        size = 16;
        color[] = {0,0,0,1};
    };
    class ViewTower
    {
        coefMax = 4;
        coefMin = 0.5;
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        importance = 2;
        size = 16;
        color[] = {0,0,0,1};
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
    access = 0;
    idc = -1;
    default = 0;
    show = 1;
    fade = 0;
    blinkingPeriod = 0;
    deletable = 0;
    tooltip = "";
    tooltipMaxWidth = 0.5;
    tooltipColorShade[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {0,0,0,0};
    class ScrollBar
    {
        width = 0;
        height = 0;
        scrollSpeed = 0.06;
        arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
        arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
        border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
        thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
        color[] = {1,1,1,1};
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
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
    class ColorBlack
    {
        name = "Black";
        color[] = {0,0,0,1};
        scope = 2;
    };
    class ColorGrey
    {
        name = "Grey";
        color[] = {0.5,0.5,0.5,1};
        scope = 1;
    };
    class ColorRed
    {
        name = "Red";
        color[] = {0.9,0,0,1};
        scope = 2;
    };
    class ColorBrown
    {
        name = "Brown";
        color[] = {0.5,0.25,0,1};
        scope = 1;
    };
    class ColorOrange
    {
        name = "Orange";
        color[] = {0.85,0.4,0,1};
        scope = 1;
    };
    class ColorYellow
    {
        name = "Yellow";
        color[] = {0.85,0.85,0,1};
        scope = 2;
    };
    class ColorKhaki
    {
        name = "Khaki";
        color[] = {0.5,0.6,0.4,1};
        scope = 1;
    };
    class ColorGreen
    {
        name = "Green";
        color[] = {0,0.8,0,1};
        scope = 2;
    };
    class ColorBlue
    {
        name = "Blue";
        color[] = {0,0,1,1};
        scope = 2;
    };
    class ColorPink
    {
        name = "Pink";
        color[] = {1,0.3,0.4,1};
        scope = 1;
    };
    class ColorWhite
    {
        name = "White";
        color[] = {1,1,1,1};
        scope = 2;
    };
    class ColorWEST
    {
        name = "BLUFOR";
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        scope = 2;
    };
    class ColorEAST
    {
        name = "OPFOR";
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        scope = 2;
    };
    class ColorGUER
    {
        name = "Independent";
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        scope = 2;
    };
    class ColorCIV
    {
        name = "Civilian";
        color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
        scope = 2;
    };
    class ColorUNKNOWN
    {
        name = "Unknown side";
        color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])","(profilenamespace getvariable ['Map_Unknown_G',1])","(profilenamespace getvariable ['Map_Unknown_B',1])","(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
        scope = 2;
    };
    class colorBLUFOR
    {
        scope = 0;
        name = "BLUFOR";
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
    };
    class colorOPFOR
    {
        scope = 0;
        name = "OPFOR";
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
    };
    class colorIndependent
    {
        scope = 0;
        name = "Independent";
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
    };
    class colorCivilian
    {
        scope = 0;
        name = "Civilian";
        color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
    };
    class Color1_FD_F
    {
        name = "Red (Firing Drills)";
        color[] = {0.694118,0.2,0.223529,1};
        scope = 0;
    };
    class Color2_FD_F
    {
        name = "Green (Firing Drills)";
        color[] = {0.678431,0.74902,0.513726,1};
        scope = 0;
    };
    class Color3_FD_F
    {
        name = "Orange (Firing Drills)";
        color[] = {0.941176,0.509804,0.192157,1};
        scope = 0;
    };
    class Color4_FD_F
    {
        name = "Blue (Firing Drills)";
        color[] = {0.403922,0.545098,0.607843,1};
        scope = 0;
    };
    class Color5_FD_F
    {
        name = "Purple (Firing Drills)";
        color[] = {0.690196,0.25098,0.654902,1};
        scope = 0;
    };
    class Color6_FD_F
    {
        name = "Gray (Firing Drills)";
        color[] = {0.352941,0.34902,0.352941,1};
        scope = 0;
    };
};

/*
    INCLUDE INHERITED ENTRIES: true
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
    class Strategic
    {
        name = "Strategic key point";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class StrongpointArea
    {
        name = "Strongpoint area";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class FlatArea
    {
        name = "Flat area";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class FlatAreaCity
    {
        name = "Flat area in a city";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class FlatAreaCitySmall
    {
        name = "Flat area in a city - small";
        color[] = {0.25,0.4,0.2,0.7};
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class CityCenter
    {
        color[] = {0.25,0.4,0.2,0};
        name = "Center of the village/town/city";
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class Airport
    {
        name = "Airport";
        texture = "#(argb,8,8,3)color(1,1,1,1)";
        importance = 20;
        color[] = {0.25,0.4,0.2,0.7};
        font = "RobotoCondensed";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class NameMarine
    {
        name = "Name Marine";
        color[] = {0.05,0.4,0.8,0.8};
        textSize = 0.05;
        importance = 3;
        font = "RobotoCondensed";
        drawStyle = "name";
        texture = "";
        size = 0;
        shadow = 1;
    };
    class NameCityCapital
    {
        name = "Name Capital";
        textSize = 0.07;
        importance = 7;
        drawStyle = "name";
        texture = "";
        color[] = {0,0,0,1};
        size = 0;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class NameCity
    {
        name = "Name City";
        textSize = 0.06;
        importance = 6;
        drawStyle = "name";
        texture = "";
        color[] = {0,0,0,1};
        size = 0;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class NameVillage
    {
        name = "Name Village";
        textSize = 0.05;
        importance = 5;
        drawStyle = "name";
        texture = "";
        color[] = {0,0,0,1};
        size = 0;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class NameLocal
    {
        name = "Name Local";
        color[] = {0.44,0.38,0.3,1};
        textSize = 0.05;
        importance = 4;
        drawStyle = "name";
        texture = "";
        size = 0;
        shadow = 1;
        font = "RobotoCondensed";
    };
    class Hill
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
    class ViewPoint
    {
        name = "View Point";
        drawStyle = "icon";
        color[] = {0.78,0,0.05,1};
        textSize = 0.04;
        shadow = 0;
        importance = 1;
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
        font = "RobotoCondensed";
    };
    class RockArea
    {
        name = "Rock Area";
        color[] = {0,0,0,1};
        size = 12;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\rockarea_ca.paa";
        drawStyle = "icon";
        textSize = 0.04;
        font = "RobotoCondensed";
    };
    class BorderCrossing
    {
        name = "Border Crossing";
        color[] = {0.78,0,0.05,1};
        size = 16;
        shadow = 0;
        importance = 1;
        texture = "\A3\ui_f\data\map\locationtypes\bordercrossing_ca.paa";
        drawStyle = "icon";
        textSize = 0.04;
        font = "RobotoCondensed";
    };
    class VegetationBroadleaf
    {
        name = "Vegetation Broadleaf";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationbroadleaf_ca.paa";
        font = "RobotoCondensed";
        drawStyle = "icon";
        textSize = 0.04;
    };
    class VegetationFir
    {
        name = "Vegetation Fir";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationfir_ca.paa";
        font = "RobotoCondensed";
        drawStyle = "icon";
        textSize = 0.04;
    };
    class VegetationPalm
    {
        name = "Vegetation Palm";
        color[] = {0.25,0.4,0.2,1};
        size = 18;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationpalm_ca.paa";
        font = "RobotoCondensed";
        drawStyle = "icon";
        textSize = 0.04;
    };
    class VegetationVineyard
    {
        name = "Vegetation Vineyard";
        color[] = {0.25,0.4,0.2,1};
        size = 16;
        shadow = 0;
        importance = 2;
        texture = "\A3\ui_f\data\map\locationtypes\vegetationvineyard_ca.paa";
        font = "RobotoCondensed";
        drawStyle = "icon";
        textSize = 0.04;
    };
    class fakeTown
    {
        size = 0;
        name = "Name";
        drawStyle = "name";
        texture = "";
        color[] = {0,0,0,1};
        textSize = 0.04;
        shadow = 1;
        font = "RobotoCondensed";
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
    class Flag
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
    class b_unknown
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
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        name = "Unknown";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        name = "Unknown";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_inf
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_inf
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_inf
    {
        name = "Infantry";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_motor_inf
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_motor_inf
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_motor_inf
    {
        name = "Motorized";
        icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_mech_inf
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_mech_inf
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_mech_inf
    {
        name = "Mechanized";
        icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_armor
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_armor
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_armor
    {
        name = "Armor";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_recon
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_recon
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_recon
    {
        name = "Recon";
        icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_air
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_air
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_air
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_plane
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_plane
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_plane
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_uav
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_uav
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_uav
    {
        name = "UAV";
        icon = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_naval
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_naval
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_naval
    {
        name = "Naval";
        icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_med
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_med
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\o_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_med.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_med
    {
        name = "Medical";
        icon = "\A3\ui_f\data\map\markers\nato\n_med.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_med.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_art
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_art
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_art.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_art
    {
        name = "Artillery";
        icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_art.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_mortar
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_mortar
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_mortar
    {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_hq
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_hq
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_hq
    {
        name = "HQ";
        icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_support
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_support
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_support.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_support
    {
        name = "Support";
        icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_support.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_maint
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_maint
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_maint
    {
        name = "Maintenance";
        icon = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_service
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\b_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_service.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_service
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\o_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_service.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_service
    {
        name = "Service";
        icon = "\A3\ui_f\data\map\markers\nato\n_service.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_service.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_installation
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_installation
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_installation
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class u_installation
    {
        name = "Installation";
        icon = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
        texture = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class b_antiair
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        markerClass = "NATO_BLUFOR";
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class o_antiair
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
        side = 0;
        color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
        markerClass = "NATO_OPFOR";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class n_antiair
    {
        name = "Anti-Air";
        icon = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
        texture = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
        side = 1;
        color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
        markerClass = "NATO_Independent";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class c_unknown
    {
        icon = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
        name = "Unknown";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class c_car
    {
        name = "Car";
        icon = "\A3\ui_f\data\map\markers\nato\c_car.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_car.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class c_ship
    {
        name = "Ship";
        icon = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class c_air
    {
        name = "Helicopter";
        icon = "\A3\ui_f\data\map\markers\nato\c_air.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_air.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class c_plane
    {
        name = "Plane";
        icon = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
        texture = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
        side = 1;
        color[] = {"color_Civilian",1};
        markerClass = "NATO_Civilian";
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_0
    {
        name = "Fire Team";
        icon = "\A3\ui_f\data\map\markers\nato\group_0.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_0.paa";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        commander = "Corporal";
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_1
    {
        name = "Squad";
        icon = "\A3\ui_f\data\map\markers\nato\group_1.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_1.paa";
        commander = "Sergeant";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_2
    {
        name = "Section";
        icon = "\A3\ui_f\data\map\markers\nato\group_2.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_2.paa";
        commander = "Sergeant";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_3
    {
        name = "Platoon";
        icon = "\A3\ui_f\data\map\markers\nato\group_3.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_3.paa";
        commander = "Lieutenant";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_4
    {
        name = "Company";
        icon = "\A3\ui_f\data\map\markers\nato\group_4.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_4.paa";
        commander = "Captain";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_5
    {
        name = "Battalion";
        icon = "\A3\ui_f\data\map\markers\nato\group_5.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_5.paa";
        commander = "Colonel";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_6
    {
        name = "Regiment";
        icon = "\A3\ui_f\data\map\markers\nato\group_6.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_6.paa";
        commander = "Colonel";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_7
    {
        name = "Brigade";
        icon = "\A3\ui_f\data\map\markers\nato\group_7.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_7.paa";
        commander = "General";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_8
    {
        name = "Division";
        icon = "\A3\ui_f\data\map\markers\nato\group_8.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_8.paa";
        commander = "General";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_9
    {
        name = "Corps";
        icon = "\A3\ui_f\data\map\markers\nato\group_9.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_9.paa";
        commander = "General";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_10
    {
        name = "Army";
        icon = "\A3\ui_f\data\map\markers\nato\group_10.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_10.paa";
        commander = "General";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class group_11
    {
        name = "Army Group";
        icon = "\A3\ui_f\data\map\markers\nato\group_11.paa";
        texture = "\A3\ui_f\data\map\markers\nato\group_11.paa";
        commander = "General";
        markerClass = "NATO_Sizes";
        color[] = {0,0,0,1};
        side = 1;
        size = 29;
        scope = 1;
        shadow = 0;
        showEditorMarkerColor = 1;
        drawStyle = "icon";
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_unknown
    {
        scope = 1;
        name = "Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_inf
    {
        scope = 1;
        name = "Infantry Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_motor
    {
        scope = 1;
        name = "Car Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_armor
    {
        scope = 1;
        name = "Armor Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_air
    {
        scope = 1;
        name = "Helicopter Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_plane
    {
        scope = 1;
        name = "Plane Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_naval
    {
        scope = 1;
        name = "Naval Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
    };
    class respawn_para
    {
        scope = 1;
        name = "Airborne Respawn";
        icon = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
        texture = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
        color[] = {0,0,0,1};
        shadow = 0;
        markerClass = "NATO_Respawn";
        drawStyle = "icon";
        size = 14;
        textSize = 0.04;
        importance = 2;
        font = "RobotoCondensed";
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
    class CivilDefense
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
        color[] = {1,1,1,1};
        name = "Strategic key point";
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class CulturalProperty
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
        color[] = {1,1,1,1};
        name = "Strategic key point";
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class DangerousForces
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
        color[] = {1,1,1,1};
        name = "Strategic key point";
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
    };
    class SafetyZone
    {
        font = "RobotoCondensed";
        icon = "\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
        color[] = {1,1,1,1};
        name = "Strategic key point";
        texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
        size = 16;
        textSize = 0.05;
        drawStyle = "name";
        shadow = 1;
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