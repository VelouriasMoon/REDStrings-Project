#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "DetailedMapContentFloorDataArrayCell.h"
#include "DetailedMapContentFloorDataCell.h"
#include "DetailedMapDBDataCell.h"
#include "DetailedMapData.generated.h"

class UDetailedMapDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDetailedMapData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDetailedMapDBAsset* detailedMapAsset_;
    
public:
    UDetailedMapData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& dtPath);
    
    UFUNCTION(BlueprintCallable)
    void GetDetailedMapLocationData(FName LocationName, TMap<FName, FDetailedMapContentFloorDataArrayCell>& rDetailedMapLocation);
    
    UFUNCTION(BlueprintCallable)
    void GetDetailedMapDataAsset(TMap<FName, FDetailedMapDBDataCell>& rDetailedMap);
    
    UFUNCTION(BlueprintCallable)
    void GetDetailedMapAreaData(FName LocationName, FName AreaName, TArray<FDetailedMapContentFloorDataCell>& rDetailedMapArea);
    
};

