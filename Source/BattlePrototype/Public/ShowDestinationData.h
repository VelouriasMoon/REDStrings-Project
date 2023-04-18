#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ShowDestinationDBDataCell.h"
#include "ShowDestinationData.generated.h"

class UShowDestinationDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UShowDestinationData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowDestinationDBAsset* showDestinationAsset_;
    
public:
    UShowDestinationData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& dtPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FShowDestinationDBDataCell> GetDB() const;
    
    UFUNCTION(BlueprintCallable)
    void GetDataCellFromActorName(FName ActorName, FShowDestinationDBDataCell& cell);
    
};

