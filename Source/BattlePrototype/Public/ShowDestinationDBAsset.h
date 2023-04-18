#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ShowDestinationDBDataCell.h"
#include "ShowDestinationDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UShowDestinationDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FShowDestinationDBDataCell> DBMap;
    
    UShowDestinationDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

