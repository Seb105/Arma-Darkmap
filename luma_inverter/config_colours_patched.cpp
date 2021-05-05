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
    class LineMarker
    {
    };
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
    class WaypointCompleted: Waypoint
    {
    };
    class CustomMark: Waypoint
    {
    };
    class Command: Waypoint
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Bush: Waypoint
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class SmallTree: Bush
    {
    };
    class Tree: SmallTree
    {
    };
    class Rock: SmallTree
    {
        color[] = {0.772,0.772,0.772,0.8};
    };
    class BusStop: Bush
    {
        color[] = {0.447,0.595,0.353,0.4};
    };
    class FuelStation: Waypoint
    {
        color[] = {0.075,0.075,0.075,1};
    };
    class Hospital: FuelStation
    {
    };
    class Church: FuelStation
    {
    };
    class Lighthouse: FuelStation
    {
    };
    class Power: FuelStation
    {
    };
    class PowerSolar: FuelStation
    {
    };
    class PowerWave: FuelStation
    {
    };
    class PowerWind: FuelStation
    {
    };
    class Quay: FuelStation
    {
    };
    class Transmitter: FuelStation
    {
    };
    class Watertower: FuelStation
    {
    };
    class Cross: Waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Chapel: Cross
    {
    };
    class Shipwreck: Cross
    {
    };
    class Bunker: Waypoint
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class Fortress: Bunker
    {
    };
    class Fountain: Bunker
    {
    };
    class Ruin: Waypoint
    {
    };
    class Stack: Waypoint
    {
    };
    class Tourism: Waypoint
    {
    };
    class ViewTower: Waypoint
    {
    };
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
class ctrlMapMain: ctrlMap
{
};
class RscMap
{
    class controls
    {
        class Map: RscMapControl
        {
        };
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
    class LineMarker
    {
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
            class Task: Task
            {
            };
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
        class Vignette: RscVignette
        {
        };
        class Tooltip: RscMapControlTooltip
        {
        };
        class Measure: RscControlsGroupNoScrollbars
        {
            class Controls
            {
                class km0: RscPicture
                {
                };
                class km1: km0
                {
                };
                class km2: km0
                {
                };
                class km3: km0
                {
                };
                class km4: km0
                {
                };
                class m0: km0
                {
                };
                class text_0: RscText
                {
                };
                class text_m: text_0
                {
                };
                class text_km: text_0
                {
                };
            };
        };
        class ButtonBackground: RscText
        {
            colorBackground[] = {0.85,0.85,0.85,0.7};
        };
        class Missions: RscXListBox
        {
        };
        class ButtonCancel: RscButtonMenuCancel
        {
        };
        class FadeEffect: RscText
        {
            colorBackground[] = {0.85,0.85,0.85,1};
        };
        class MessageBox: RscMessageBox
        {
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
    class ColorWEST: Default
    {
    };
    class ColorEAST: Default
    {
    };
    class ColorGUER: Default
    {
    };
    class ColorCIV: Default
    {
    };
    class ColorUNKNOWN: Default
    {
    };
    class colorBLUFOR: ColorWEST
    {
    };
    class colorOPFOR: ColorEAST
    {
    };
    class colorIndependent: ColorGUER
    {
    };
    class colorCivilian: ColorCIV
    {
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
    class StrongpointArea: Strategic
    {
    };
    class FlatArea: Strategic
    {
    };
    class FlatAreaCity: FlatArea
    {
    };
    class FlatAreaCitySmall: FlatAreaCity
    {
    };
    class CityCenter: Strategic
    {
        color[] = {0.566,0.719,0.515,0};
    };
    class Airport: Strategic
    {
    };
    class NameMarine: Name
    {
        color[] = {0.182,0.498,0.859,0.8};
    };
    class NameCityCapital: Name
    {
    };
    class NameCity: Name
    {
    };
    class NameVillage: Name
    {
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
    class fakeTown: Name
    {
    };
    class Area
    {
        color[] = {0.85,0.85,0.85,0.5};
    };
    class Flag: Hill
    {
    };
    class b_unknown: Flag
    {
    };
    class o_unknown: b_unknown
    {
    };
    class n_unknown: b_unknown
    {
    };
    class b_inf: b_unknown
    {
    };
    class o_inf: o_unknown
    {
    };
    class n_inf: n_unknown
    {
    };
    class b_motor_inf: b_unknown
    {
    };
    class o_motor_inf: o_unknown
    {
    };
    class n_motor_inf: n_unknown
    {
    };
    class b_mech_inf: b_unknown
    {
    };
    class o_mech_inf: o_unknown
    {
    };
    class n_mech_inf: n_unknown
    {
    };
    class b_armor: b_unknown
    {
    };
    class o_armor: o_unknown
    {
    };
    class n_armor: n_unknown
    {
    };
    class b_recon: b_unknown
    {
    };
    class o_recon: o_unknown
    {
    };
    class n_recon: n_unknown
    {
    };
    class b_air: b_unknown
    {
    };
    class o_air: o_unknown
    {
    };
    class n_air: n_unknown
    {
    };
    class b_plane: b_unknown
    {
    };
    class o_plane: o_unknown
    {
    };
    class n_plane: n_unknown
    {
    };
    class b_uav: b_unknown
    {
    };
    class o_uav: o_unknown
    {
    };
    class n_uav: n_unknown
    {
    };
    class b_naval: b_unknown
    {
    };
    class o_naval: o_unknown
    {
    };
    class n_naval: n_unknown
    {
    };
    class b_med: b_unknown
    {
    };
    class o_med: o_unknown
    {
    };
    class n_med: n_unknown
    {
    };
    class b_art: b_unknown
    {
    };
    class o_art: o_unknown
    {
    };
    class n_art: n_unknown
    {
    };
    class b_mortar: b_unknown
    {
    };
    class o_mortar: o_unknown
    {
    };
    class n_mortar: n_unknown
    {
    };
    class b_hq: b_unknown
    {
    };
    class o_hq: o_unknown
    {
    };
    class n_hq: n_unknown
    {
    };
    class b_support: b_unknown
    {
    };
    class o_support: o_unknown
    {
    };
    class n_support: n_unknown
    {
    };
    class b_maint: b_unknown
    {
    };
    class o_maint: o_unknown
    {
    };
    class n_maint: n_unknown
    {
    };
    class b_service: b_unknown
    {
    };
    class o_service: o_unknown
    {
    };
    class n_service: n_unknown
    {
    };
    class b_installation: b_unknown
    {
    };
    class o_installation: o_unknown
    {
    };
    class n_installation: n_unknown
    {
    };
    class u_installation: n_unknown
    {
    };
    class b_antiair: b_unknown
    {
    };
    class o_antiair: o_unknown
    {
    };
    class n_antiair: n_unknown
    {
    };
    class c_unknown: b_unknown
    {
    };
    class c_car: c_unknown
    {
    };
    class c_ship: c_unknown
    {
    };
    class c_air: c_unknown
    {
    };
    class c_plane: c_unknown
    {
    };
    class group_0: b_unknown
    {
        color[] = {0.85,0.85,0.85,1};
    };
    class group_1: group_0
    {
    };
    class group_2: group_0
    {
    };
    class group_3: group_0
    {
    };
    class group_4: group_0
    {
    };
    class group_5: group_0
    {
    };
    class group_6: group_0
    {
    };
    class group_7: group_0
    {
    };
    class group_8: group_0
    {
    };
    class group_9: group_0
    {
    };
    class group_10: group_0
    {
    };
    class group_11: group_0
    {
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