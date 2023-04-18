#include "UISceneMapFunctionLibrary.h"

class UDataTable;
class UObject;

void UUISceneMapFunctionLibrary::MinimapIconGetElementListUse(UObject* WorldContextObject, int32 Location, int32 Area, int32 valiation, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, TArray<FUiSceneMapIconNode>& resultList) {
}

void UUISceneMapFunctionLibrary::MinimapIconGetElementList_OtherArea(UObject* WorldContextObject, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, TArray<FUiSceneMapIconNode>& resultList, FName AreaName) {
}

void UUISceneMapFunctionLibrary::MinimapIconGetElementList(UObject* WorldContextObject, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, TArray<FUiSceneMapIconNode>& resultList) {
}

EMapIconType UUISceneMapFunctionLibrary::MinimapIconGetArrangeIconType(UObject* WorldContextObject, TArray<UDataTable*> IconTables, FName pointName) {
    return EMapIconType::TreasureBox;
}

void UUISceneMapFunctionLibrary::MinimapIconGetArrangeElementList(UObject* WorldContextObject, UDataTable* ArrangePointTable, int32 LocationNo, int32 AreaNo, EMapIconType map_Icon_Type, TArray<FMapArrangeItemNode>& resultList) {
}

UUISceneMapFunctionLibrary::UUISceneMapFunctionLibrary() {
}

