#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArrangeItemDataCell.h"
#include "EItemCategory.h"
#include "EItemRarity.h"
#include "ItemDataCell.h"
#include "ItemDataUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UItemDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MakeItemID(EItemCategory Category, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MakeItemDataName(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidItemId(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInvalidSell(const FItemDataCell& ItemDataCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCategoryAttachment(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 getNumOfEquipment(const UObject* WorldContextObject, const FName& ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLotteryResultItemID(const UObject* WorldContextObject, const bool isRare, const FArrangeItemDataCell& ArrangeItemDataCell, FName& ItemId, int32& itemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemRarity GetItemRarity(const FItemDataCell& ItemDataCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetItemIndex(const UObject* WorldContextObject, FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemIDs(const UObject* WorldContextObject, TArray<FName>& ItemIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetItemDataName(const UObject* WorldContextObject, const FItemDataCell& ItemDataCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetItemDataDescription(const UObject* WorldContextObject, const FItemDataCell& ItemDataCell);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetItemDataCellByItemId(const UObject* WorldContextObject, FItemDataCell& ItemData, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetItemDataCell(const UObject* WorldContextObject, FItemDataCell& ItemData, FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCategoryID(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemCategory GetItemCategory(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetArrangeItemDataCell(const UObject* WorldContextObject, FArrangeItemDataCell& ItemData, FName ID);
    
};

