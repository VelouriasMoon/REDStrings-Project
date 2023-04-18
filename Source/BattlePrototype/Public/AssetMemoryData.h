#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "AssetMemoryData.generated.h"

UCLASS(Blueprintable)
class UAssetMemoryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PhysicalSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 VirtualSize;
    
    UAssetMemoryData();
};

