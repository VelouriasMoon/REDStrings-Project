#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ArrangeItemDataCell.h"
#include "EItemFavorability.h"
#include "EPlayerID.h"
#include "ItemDataCell.h"
#include "ItemIDArray.h"
#include "ItemData.generated.h"

class UDataTable;
class UWorld;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UItemData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefItemTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefArrangeItemTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FItemIDArray> PresentItemDataM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FItemIDArray> PresentItemDataF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BattleItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* m_pWorld;
    
public:
    UItemData();
    UFUNCTION(BlueprintCallable)
    bool LoadItemDataTable(const FString& ItemTablePath, const FString& ArrangeItemDataTablePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTradeNumberOfTimes(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetItemIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemFavorability GetFavorability(FName ID, EPlayerID charID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDescription(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDataByItemID(FItemDataCell& ItemData, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetData(FItemDataCell& ItemData, FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetArrangeData(FArrangeItemDataCell& ArrangeItemData, FName ID);
    
};

