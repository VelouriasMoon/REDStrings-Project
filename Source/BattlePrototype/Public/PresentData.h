#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "PresentEventDataCell.h"
#include "PresentData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPresentData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* presentData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* presentLocationData_;
    
public:
    UPresentData();
    UFUNCTION(BlueprintCallable)
    void LoadPresentDataTable(const FString& presentDataPath, const FString& presentLocationDatapath);
    
    UFUNCTION(BlueprintCallable)
    bool GetPresentEventData(FPresentEventDataCell& presentEventData, FName ItemId, FName FromCharaID, FName ForCharaID);
    
};

