class RscControlsGroupNoScrollbars;
class RscFrame;
class ctrlDefault;
class RscText;
class ctrlMap: ctrlDefault
{
    colorText[] = {0.85,0.85,0.85,1};
    colorBackground[] = {0.128,0.103,0.086,1};
    colorOutside[] = {0.85,0.85,0.85,1};
    colorSea[] = {0.186,0.317,0.492,0.5};
    colorForest[] = {0.428,0.547,0.248,0.5};
    colorForestTextured[] = {0.428,0.547,0.248,0.25};
    colorForestBorder[] = {0.85,0.85,0.85,0};
    colorRocks[] = {0.85,0.85,0.85,0.3};
    colorRocksBorder[] = {0.85,0.85,0.85,0};
    colorLevels[] = {0.823,0.686,0.583,0.5};
    colorMainCountlines[] = {0.735,0.531,0.376,0.5};
    colorCountlines[] = {0.735,0.531,0.376,0.25};
    colorMainCountlinesWater[] = {0.307,0.373,0.469,0.6};
    colorCountlinesWater[] = {0.307,0.373,0.469,0.3};
    colorPowerLines[] = {0.772,0.772,0.772,1};
    colorRailWay[] = {0.833,0.093,0.093,1};
    colorNames[] = {0.772,0.772,0.772,0.9};
    colorInactive[] = {0.075,0.075,0.075,0.5};
    colorTracks[] = {0.354,0.285,0.191,0.15};
    colorTracksFill[] = {0.354,0.285,0.191,1};
    colorRoads[] = {0.308,0.308,0.308,1};
    colorRoadsFill[] = {0.075,0.075,0.075,1};
    colorMainRoads[] = {0.616,0.308,0.154,1};
    colorMainRoadsFill[] = {0.554,0.226,0.061,1};
    colorTrails[] = {0.354,0.285,0.191,0.15};
    colorTrailsFill[] = {0.354,0.285,0.191,0.65};
    colorGrid[] = {0.772,0.772,0.772,0.6};
    colorGridMap[] = {0.772,0.772,0.772,0.6};
    class Legend
    {
        color[] = {0.85,0.85,0.85,1};
        colorBackground[] = {0.075,0.075,0.075,0.5};
    };
    class Task
    {
        color[] = {0.075,0.075,0.075,1};
        colorCreated[] = {0.832,0.833,0.093,1};
        colorCanceled[] = {0.308,0.308,0.308,1};
        colorDone[] = {0.386,0.623,0.069,1};
        colorFailed[] = {0.693,0.154,0.077,1};
    };
    class ActiveMarker
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class WaypointCompleted: Waypoint {};
    class CustomMark: Waypoint {};
    class Command: Waypoint
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Bush: Waypoint
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class SmallTree: Bush {};
    class Tree: SmallTree {};
    class Rock: SmallTree
    {
        color[] = {0.772,0.772,0.772,0.8};
    };
    class BusStop: Bush
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class FuelStation: Waypoint {};
    class Hospital: FuelStation {};
    class Church: FuelStation {};
    class Lighthouse: FuelStation {};
    class Power: FuelStation {};
    class PowerSolar: FuelStation {};
    class PowerWave: FuelStation {};
    class PowerWind: FuelStation {};
    class Quay: FuelStation {};
    class Transmitter: FuelStation {};
    class Watertower: FuelStation {};
    class Cross: Waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Chapel: Cross {};
    class Shipwreck: Cross {};
    class Bunker: Waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Fortress: Bunker {};
    class Fountain: Bunker {};
    class Ruin: Waypoint {};
    class Stack: Waypoint {};
    class Tourism: Waypoint {};
    class ViewTower: Waypoint {};
};
class ctrlMapEmpty: ctrlMap
{
    colorBackground[] = {0.075,0.075,0.075,1};
    colorOutside[] = {0.075,0.075,0.075,1};
    colorSea[] = {0.85,0.85,0.85,0};
    colorForest[] = {0.85,0.85,0.85,0};
    colorForestBorder[] = {0.85,0.85,0.85,0};
    colorRocks[] = {0.85,0.85,0.85,0};
    colorRocksBorder[] = {0.85,0.85,0.85,0};
    colorLevels[] = {0.85,0.85,0.85,0};
    colorMainCountlines[] = {0.85,0.85,0.85,0};
    colorCountlines[] = {0.85,0.85,0.85,0};
    colorMainCountlinesWater[] = {0.85,0.85,0.85,0};
    colorCountlinesWater[] = {0.85,0.85,0.85,0};
    colorPowerLines[] = {0.85,0.85,0.85,0};
    colorRailWay[] = {0.85,0.85,0.85,0};
    colorNames[] = {0.85,0.85,0.85,0};
    colorInactive[] = {0.85,0.85,0.85,0};
    colorGrid[] = {0.85,0.85,0.85,0};
    colorGridMap[] = {0.85,0.85,0.85,0};
    class Task: Task
    {
        color[] = {0.85,0.85,0.85,0};
        colorCreated[] = {0.85,0.85,0.85,0};
        colorCanceled[] = {0.85,0.85,0.85,0};
        colorDone[] = {0.85,0.85,0.85,0};
        colorFailed[] = {0.85,0.85,0.85,0};
    };
    class Waypoint: Waypoint
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class WaypointCompleted: WaypointCompleted
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class CustomMark: CustomMark
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Command: Command
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Bush: Bush
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Rock: Rock
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class SmallTree: SmallTree
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Tree: Tree
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class busstop: BusStop
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class fuelstation: FuelStation
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class hospital: Hospital
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class church: Church
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class lighthouse: Lighthouse
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class power: Power
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powersolar: PowerSolar
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powerwave: PowerWave
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powerwind: PowerWind
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class quay: Quay
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class shipwreck: Shipwreck
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class transmitter: Transmitter
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class watertower: Watertower
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Bunker: Bunker
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Cross: Cross
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Fortress: Fortress
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Fountain: Fountain
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Chapel: Chapel
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Ruin: Ruin
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Stack: Stack
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Tourism: Tourism
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class ViewTower: ViewTower
    {
        color[] = {0.85,0.85,0.85,0};
    };
};
class RscMapControl
{
    colorBackground[] = {0.128,0.103,0.086,1};
    colorOutside[] = {0.85,0.85,0.85,1};
    colorText[] = {0.85,0.85,0.85,1};
    colorSea[] = {0.186,0.317,0.492,0.5};
    colorForest[] = {0.428,0.547,0.248,0.5};
    colorRocks[] = {0.85,0.85,0.85,0.3};
    colorCountlines[] = {0.735,0.531,0.376,0.25};
    colorMainCountlines[] = {0.735,0.531,0.376,0.5};
    colorCountlinesWater[] = {0.307,0.373,0.469,0.3};
    colorMainCountlinesWater[] = {0.307,0.373,0.469,0.6};
    colorForestBorder[] = {0.85,0.85,0.85,0};
    colorRocksBorder[] = {0.85,0.85,0.85,0};
    colorPowerLines[] = {0.772,0.772,0.772,1};
    colorRailWay[] = {0.908,0.356,0.172,1};
    colorNames[] = {0.772,0.772,0.772,0.9};
    colorInactive[] = {0.075,0.075,0.075,0.5};
    colorLevels[] = {0.823,0.686,0.583,0.5};
    colorTracks[] = {0.354,0.285,0.191,0.15};
    colorRoads[] = {0.308,0.308,0.308,1};
    colorMainRoads[] = {0.616,0.308,0.154,1};
    colorTracksFill[] = {0.354,0.285,0.191,1};
    colorRoadsFill[] = {0.075,0.075,0.075,1};
    colorMainRoadsFill[] = {0.554,0.226,0.061,1};
    colorGrid[] = {0.772,0.772,0.772,0.6};
    colorGridMap[] = {0.772,0.772,0.772,0.6};
    class Legend
    {
        colorBackground[] = {0.075,0.075,0.075,0.5};
        color[] = {0.85,0.85,0.85,1};
    };
    class ActiveMarker
    {
        color[] = {0.315,0.166,0.759,1};
    };
    class Command
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Task
    {
        colorCreated[] = {0.075,0.075,0.075,1};
        colorCanceled[] = {0.308,0.308,0.308,1};
        colorDone[] = {0.386,0.623,0.069,1};
        colorFailed[] = {0.693,0.154,0.077,1};
    };
    class CustomMark
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Tree
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class SmallTree
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class Bush
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class Church
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Chapel
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Cross
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Rock
    {
        color[] = {0.772,0.772,0.772,0.8};
    };
    class Bunker
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Fortress
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Fountain
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class ViewTower
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Lighthouse
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Quay
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Fuelstation
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Hospital
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class BusStop
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Transmitter
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Stack
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Ruin
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Tourism
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Watertower
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Waypoint
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class WaypointCompleted
    {
        color[] = {0.075,0.075,0.075,1};
    };
    colorTrails[] = {0.354,0.285,0.191,0.15};
    colorTrailsFill[] = {0.354,0.285,0.191,0.65};
    class power
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class powersolar
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class powerwave
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class powerwind
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Shipwreck
    {
        color[] = {0.85,0.85,0.85,1};
    };
};
class RscMapControlEmpty: RscMapControl
{
    colorBackground[] = {0.075,0.075,0.075,1};
    colorOutside[] = {0.075,0.075,0.075,1};
    colorSea[] = {0.85,0.85,0.85,0};
    colorForest[] = {0.85,0.85,0.85,0};
    colorForestBorder[] = {0.85,0.85,0.85,0};
    colorRocks[] = {0.85,0.85,0.85,0};
    colorRocksBorder[] = {0.85,0.85,0.85,0};
    colorLevels[] = {0.85,0.85,0.85,0};
    colorMainCountlines[] = {0.85,0.85,0.85,0};
    colorCountlines[] = {0.85,0.85,0.85,0};
    colorMainCountlinesWater[] = {0.85,0.85,0.85,0};
    colorCountlinesWater[] = {0.85,0.85,0.85,0};
    colorPowerLines[] = {0.85,0.85,0.85,0};
    colorRailWay[] = {0.85,0.85,0.85,0};
    colorNames[] = {0.85,0.85,0.85,0};
    colorInactive[] = {0.85,0.85,0.85,0};
    colorGrid[] = {0.85,0.85,0.85,0};
    colorGridMap[] = {0.85,0.85,0.85,0};
    class Task: Task
    {
        color[] = {0.85,0.85,0.85,0};
        colorCreated[] = {0.85,0.85,0.85,0};
        colorCanceled[] = {0.85,0.85,0.85,0};
        colorDone[] = {0.85,0.85,0.85,0};
        colorFailed[] = {0.85,0.85,0.85,0};
    };
    class Waypoint: Waypoint
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class WaypointCompleted: WaypointCompleted
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class CustomMark: CustomMark
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Command: Command
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Bush: Bush
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Rock: Rock
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class SmallTree: SmallTree
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Tree: Tree
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class busstop: BusStop
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class fuelstation: Fuelstation
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class hospital: Hospital
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class church: Church
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class lighthouse: Lighthouse
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class power: power
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powersolar: powersolar
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powerwave: powerwave
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class powerwind: powerwind
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class quay: Quay
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class shipwreck: Shipwreck
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class transmitter: Transmitter
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class watertower: Watertower
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Bunker: Bunker
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Cross: Cross
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Fortress: Fortress
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Fountain: Fountain
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Chapel: Chapel
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Ruin: Ruin
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Stack: Stack
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class Tourism: Tourism
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class ViewTower: ViewTower
    {
        color[] = {0.85,0.85,0.85,0};
    };
};
class RscDisplayStrategicMap
{
    class controlsBackground
    {
        class Map: RscMapControl
        {
            colorBackground[] = {0.075,0.075,0.075,1};
            colorSea[] = {0.186,0.317,0.492,0.25};
            colorCountlines[] = {0.85,0.85,0.85,0};
            colorMainCountlines[] = {0.85,0.85,0.85,0};
            colorCountlinesWater[] = {0.85,0.85,0.85,0};
            colorMainCountlinesWater[] = {0.85,0.85,0.85,0};
            colorForest[] = {0.075,0.075,0.075,1};
            colorRocks[] = {0.85,0.85,0.85,0};
            colorGrid[] = {0.85,0.85,0.85,0};
            colorGridMap[] = {0.85,0.85,0.85,0};
            class Task: Task {};
        };
    };
    class controls
    {
        class TileGroup: RscControlsGroupNoScrollbars
        {
            class Controls
            {
                class TileFrame: RscFrame
                {
                    colortext[] = {0.85,0.85,0.85,1};
                };
                class Tile_0_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_0_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_0_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_0_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_0_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_0_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_1_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_2_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_3_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_4_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_0: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_1: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_2: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_3: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_4: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
                class Tile_5_5: RscText
                {
                    colorBackground[] = {0.85,0.85,0.85,0.1};
                };
            };
        };
        class ButtonBackground: RscText
        {
            colorBackground[] = {0.85,0.85,0.85,0.7};
        };
        class FadeEffect: RscText
        {
            colorBackground[] = {0.85,0.85,0.85,1};
        };
    };
};
class CfgMarkerColors
{
    class Default
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class ColorBlack: Default
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class ColorGrey: Default
    {
        color[] = {0.463,0.463,0.463,1};
    };
    class ColorRed: Default
    {
        color[] = {0.9,0.102,0.102,1};
    };
    class ColorBrown: Default
    {
        color[] = {0.931,0.656,0.381,1};
    };
    class ColorOrange: Default
    {
        color[] = {0.904,0.498,0.137,1};
    };
    class ColorYellow: Default
    {
        color[] = {0.904,0.904,0.137,1};
    };
    class ColorKhaki: Default
    {
        color[] = {0.463,0.536,0.389,1};
    };
    class ColorGreen: Default
    {
        color[] = {0.172,0.908,0.172,1};
    };
    class ColorBlue: Default
    {
        color[] = {0.093,0.093,0.833,1};
    };
    class ColorPink: Default
    {
        color[] = {0.623,0.069,0.148,1};
    };
    class ColorWhite: Default
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Color1_FD_F: Default
    {
        color[] = {0.723,0.284,0.305,1};
    };
    class Color2_FD_F: Default
    {
        color[] = {0.398,0.453,0.269,1};
    };
    class Color3_FD_F: Default
    {
        color[] = {0.695,0.368,0.127,1};
    };
    class Color4_FD_F: Default
    {
        color[] = {0.382,0.487,0.534,1};
    };
    class Color5_FD_F: Default
    {
        color[] = {0.666,0.304,0.637,1};
    };
    class Color6_FD_F: Default
    {
        color[] = {0.58,0.576,0.58,1};
    };
};
class CfgMarkers
{
    class Empty
    {
        color[] = {0.601,0.491,0.821,1};
    };
    class Flag
    {
        color[] = {0.833,0.093,0.093,1};
    };
    class mil_objective: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class hd_dot: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class b_unknown: Flag {};
    class group_0: b_unknown
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_unknown: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_inf: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_motor: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_armor: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_air: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_plane: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_naval: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_para: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Tree: Flag
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class loc_SmallTree: loc_Tree
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class loc_Bush: loc_Tree
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class loc_Church: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Chapel: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Cross: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Rock: loc_Tree
    {
        color[] = {0.772,0.772,0.772,0.8};
    };
    class loc_Bunker: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Fountain: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_ViewTower: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Lighthouse: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Quay: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Fuelstation: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Hospital: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_BusStop: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Transmitter: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Stack: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Ruin: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_Tourism: loc_Tree
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_WaterTower: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_Power: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_PowerSolar: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_PowerWave: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_PowerWind: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class flag_NATO: Flag
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Select: Flag
    {
        color[] = {0.833,0.093,0.093,1};
    };
    class waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class KIA
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Minefield
    {
        color[] = {0.9,0.102,0.102,1};
    };
    class GroundSupport_CAS_WEST
    {
        color[] = {0.311,0.617,0.923,1};
    };
    class GroundSupport_CAS_EAST: GroundSupport_CAS_WEST
    {
        color[] = {0.931,0.381,0.381,1};
    };
    class GroundSupport_CAS_RESISTANCE: GroundSupport_CAS_WEST
    {
        color[] = {0.381,0.931,0.381,1};
    };
    class GroundSupport_ARTY_WEST: GroundSupport_CAS_WEST {};
    class GroundSupport_ARTY_EAST: GroundSupport_ARTY_WEST
    {
        color[] = {0.931,0.381,0.381,1};
    };
    class GroundSupport_ARTY_RESISTANCE: GroundSupport_ARTY_WEST
    {
        color[] = {0.381,0.931,0.381,1};
    };
    class MemoryFragment: Flag
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class RedCrystal: flag_NATO
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class White: flag_NATO
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_CivilDefense: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_CulturalProperty: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_DangerousForces: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class loc_SafetyZone: loc_Tree
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Contact_arrow1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrow2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrow3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrowLeft: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrowRight: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrowSmall1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_arrowSmall2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_art1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_art2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_circle1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_circle2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_circle3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_circle4: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dashedLine1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dashedLine2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dashedLine3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_defenseLine: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_defenseLineOver: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dot1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dot2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dot3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dot4: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_dot5: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilCircle1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilCircle2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilCircle3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDoodle1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDoodle2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDoodle3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDot1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDot2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilDot3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilTask1: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilTask2: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Contact_pencilTask3: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class loc_LetterA: Empty
    {
        color[] = {0.85,0.85,0.85,1};
    };
};
class CfgLocationTypes
{
    class Mount
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Name
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Strategic: Name
    {
        color[] = {0.566,0.719,0.515,0.7};
    };
    class CityCenter: Strategic
    {
        color[] = {0.566,0.719,0.515,0};
    };
    class NameMarine: Name
    {
        color[] = {0.182,0.498,0.859,0.8};
    };
    class NameLocal: Name
    {
        color[] = {0.629,0.573,0.497,1};
    };
    class Hill: Name
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class ViewPoint: Hill
    {
        color[] = {0.91,0.186,0.232,1};
    };
    class RockArea: Hill
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class BorderCrossing: Hill
    {
        color[] = {0.91,0.186,0.232,1};
    };
    class VegetationBroadleaf: Hill
    {
        color[] = {0.566,0.719,0.515,1};
    };
    class VegetationFir: Hill
    {
        color[] = {0.566,0.719,0.515,1};
    };
    class VegetationPalm: Hill
    {
        color[] = {0.566,0.719,0.515,1};
    };
    class VegetationVineyard: Hill
    {
        color[] = {0.566,0.719,0.515,1};
    };
    class Area
    {
        color[] = {0.85,0.85,0.85,0.5};
    };
    class Flag: Hill {};
    class b_unknown: Flag {};
    class group_0: b_unknown
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_unknown: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_inf: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_motor: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_armor: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_air: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_plane: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_naval: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class respawn_para: Flag
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Invisible
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class HistoricalSite
    {
        color[] = {0.85,0.85,0.85,0};
    };
    class CivilDefense: Strategic
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class CulturalProperty: Strategic
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class DangerousForces: Strategic
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class SafetyZone: Strategic
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class HandDrawnCamp
    {
        color[] = {0.85,0.85,0.85,1};
    };
};