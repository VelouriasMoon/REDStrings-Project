#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TradeItem.h"
#include "TradeItemData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTradeItemData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* tradeItemDataTable_;
    
public:
    UTradeItemData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTradeItemDataTable() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTItemDataFromDataTable(const FString& tradeTablePath);
    
    UFUNCTION(BlueprintCallable)
    bool GetDataLineByIndex(const FName Index, FTradeItem& TradeItem);
    
};

