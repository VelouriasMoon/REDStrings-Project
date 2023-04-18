#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectID.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectID : uint8 {
    S_CafeChair01_A,
    S_CafeTable01_A,
    S_Child01_A,
    S_FancyChair01_A,
    S_FloorDebris01_A,
    S_FoodStands01_Chair_A,
    S_GasCylinder01_A,
    S_GasCylinder02_A,
    S_Pipe01_A,
    S_Planter01_A,
    S_Rock01_A,
    S_ShoppingCart01_A,
    S_Tire01_A,
    S_Trashbin01_A,
    S_Trashbin02_A,
    S_TV01_A,
    M_Beam01_A,
    M_Bicycle01A_A,
    M_Bicycle01B_A,
    M_Bicycle01C_A,
    M_CafeParasol01_A,
    M_Child01_A,
    M_Child02_A,
    M_Cushiondram01_A,
    M_Cushiondram01_B,
    M_Cushiondram01_C,
    M_Cushiondram02A_A,
    M_Cushiondram02A_B,
    M_Cushiondram02A_C,
    M_Cushiondram02B_A,
    M_Cushiondram02B_B,
    M_Cushiondram02B_C,
    M_Drum01_A,
    M_Drum02_A,
    M_Drum02_B,
    M_DrumFuel01_A,
    M_DrumSet01_A,
    M_DrumSet01_B,
    M_DrumSet01_C,
    M_DrumSet02_A,
    M_DrumSet02_B,
    M_DrumSet02_C,
    M_DrumWater01_A,
    M_Em1200Chair01_A,
    M_FuelDrum01_A,
    M_Ladder01_A,
    M_LampPole01_A,
    M_MetalBox01A_A,
    M_MetalBox01B_A,
    M_MetalCrate01_A,
    M_MetalCrate02_A,
    M_MetalFence01_A,
    M_MuseumFactoryDevice01_A,
    M_RoadBlock01_A,
    M_RoadBlock02A_A,
    M_RoadBlock02B_A,
    M_RoadFence01_A,
    M_Rock01_A,
    M_SubwayRubble01S_A,
    M_Switchboard01A_A,
    M_Switchboard01B_A,
    M_Switchboard01C_A,
    M_Tire01_A,
    L_Antenna01_A,
    L_Beams01_A,
    L_Beams01_B,
    L_Bench01_A,
    L_Bench02_A,
    L_Bench03_A,
    L_Bench04_A,
    L_Child02_A,
    L_Child03_A,
    L_ClawMachine01_A,
    L_Couch01_A,
    L_Couch01d01_A,
    L_DisplayStand01_A,
    L_Dumpster01_A,
    L_HospitalScreen01_A,
    L_IceStatue01_A,
    L_IceStatue01_B,
    L_IceStatue01_C,
    L_IceStatue01_D,
    L_IceStatue01_E,
    L_IceStatue01_F,
    L_IceStatue01_G,
    L_IceStatue01_H,
    L_MaitreyaCylinder01_A,
    L_MaitreyaLantern01_A,
    L_MetalBoxDbl01_A,
    L_MetalCrate01A_A,
    L_MetalCrate01B_A,
    L_MetalCrate03_A,
    L_MetalCrateDbl01_A,
    L_Rail01_A,
    L_Rock01_A,
    L_Scooters01_A,
    L_Scooters01_B,
    L_Scooters01_C,
    L_Scooters01_D,
    L_Scooters01_E,
    L_Switchboard01_A,
    L_Table01_A,
    L_VendingMachine01_A,
    L_VendingMachine01_B,
    L_VendingMachine01_C,
    L_VendingMachine01_D,
    L_VendingMachine02_A,
    L_VendingMachine02_B,
    L_VendingMachine02_C,
    L_VendingMachine02_D,
    L_VendingMachine03_A,
    L_VendingMachine03_B,
    L_WheelChair01_A,
    XL_CarDeliveryTruck01_A,
    XL_CarDeliveryTruck01_B,
    XL_CarDeliveryTruck01_C,
    XL_CarDeliveryTruck01_D,
    XL_CarDeliveryTruck01_E,
    XL_CarDeliveryTruck01_F,
    XL_CarKTruck01_A,
    XL_CarKTruck01_B,
    XL_CarSedan01_A,
    XL_CarSedan01_B,
    XL_CarSedan01_C,
    XL_CarSedan01_D,
    XL_CarSedan01_E,
    XL_CarStandard01_A,
    XL_CarStandard01_B,
    XL_CarStandard01_C,
    XL_CarStandard01_D,
    XL_CarStandard01_E,
    XL_CarStandardTaxi01_A,
    XL_ElectricPole_A,
    XL_ElectricPole_B,
    XL_FoodStands01_A,
    XL_FoodStands01_B,
    XL_FoodStands01_C,
    XL_IceStatue01_A,
    XL_IceStatue01_B,
    XL_IceStatue01_C,
    XL_IceStatue01_D,
    XL_IceStatue01_E,
    XL_IceStatue01_F,
    XL_IceStatue01_G,
    XL_IceStatue01_H,
    XL_OrbitBike01_A,
    XL_Rock01_A,
    XL_Rubble01_A,
    XXL_Container01_A,
    XXL_Container01_B,
    XXL_Container01_C,
    XXL_Container01_D,
    EM_IceRock01_A,
    EM_IceRock01_B,
    EM_IceRock01_C,
    EM_Cube_A,
    EM_Bomb_A,
    UQ_ElectricPole01_A,
    UQ_ElectricPole01_A_Wreckage,
    UQ_VendingMachine01_A,
    UQ_VendingMachine01_A_Cover,
    UQ_SteelBeams01_A,
    UQ_SteelBeams01_A_Beam,
    UQ_SteelBeams02_A,
    UQ_SteelBeams02_A_Beam,
    UQ_TankSet01_A,
    UQ_TankSet01_A_Tank,
    UQ_TankSet01_A_Liquid,
    UQ_TankSet02_A,
    UQ_TankSet02_A_Tank,
    UQ_TankSet02_A_Liquid,
    UQ_Fence01_A,
    UQ_Fence02_A,
    UQ_Drone01_A,
    UQ_Container01_A,
    UQ_Vehicle01_A,
    UQ_Pillar01_A,
    UQ_Statue01_A,
    UQ_Bulldozer01_A,
    UQ_DuelPole01_A,
    UQ_FloorFragment01_A,
    UQ_FloorFragment01_A_Debris,
    UQ_Cube01_A,
    UQ_Cube01_A_Parts,
    UQ_Rock01_A,
    UQ_Rock01_A_Debris,
    UQ_Rock02_A,
    UQ_Rock02_A_Debris,
    UQ_ElectronicParts01_A,
    UQ_Chandelier01_A,
    UQ_IronRailing01_A,
    UQ_IronRailing01_A_Baluster,
    UQ_DimensionEntanglement01_A,
    UQ_Chakram01_A,
    UQ_Chakram01_A_Frame,
    UQ_LightningRod01_A,
    UQ_LightningRod01_A_Wreckage,
    UQ_Truck01_A,
    UQ_Truck01_A_Parts,
    UQ_Crystal01_A,
    UQ_Mask01_A,
    UQ_Mask01_B,
    UQ_Mask01_C,
    UQ_Mask01_D,
    MG_BigIce,
    MG_BigIceMiddle,
    MG_CeilingScaffold,
    MG_DumpCar,
    MG_Hanged,
    MG_Hook,
    MG_IceScalpture,
    MG_TankLorry,
    MG_Train,
    MG_MovableBridge,
    EX_InterceptObj,
    Max,
};

