#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMapIconType.h"
#include "EUiSceneMapIconType.h"
#include "MapArrangeItemNode.h"
#include "UiSceneMapIconNode.h"
#include "UISceneMapFunctionLibrary.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UUISceneMapFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUISceneMapFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinimapIconGetElementListUse(UObject* WorldContextObject, int32 Location, int32 Area, int32 valiation, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, UPARAM(Ref) TArray<FUiSceneMapIconNode>& resultList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinimapIconGetElementList_OtherArea(UObject* WorldContextObject, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, UPARAM(Ref) TArray<FUiSceneMapIconNode>& resultList, FName AreaName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinimapIconGetElementList(UObject* WorldContextObject, TArray<UDataTable*> IconTables, EUiSceneMapIconType Type, UPARAM(Ref) TArray<FUiSceneMapIconNode>& resultList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EMapIconType MinimapIconGetArrangeIconType(UObject* WorldContextObject, TArray<UDataTable*> IconTables, FName pointName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinimapIconGetArrangeElementList(UObject* WorldContextObject, UDataTable* ArrangePointTable, int32 LocationNo, int32 AreaNo, EMapIconType map_Icon_Type, UPARAM(Ref) TArray<FMapArrangeItemNode>& resultList);
    
};

