#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "DetailedMapDBDataCell.h"
#include "DetailedMapDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDetailedMapDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDetailedMapDBDataCell> detailedMapDBMap_;
    
    UDetailedMapDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

