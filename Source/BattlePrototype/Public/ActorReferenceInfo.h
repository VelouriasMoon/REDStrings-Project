#pragma once
#include "CoreMinimal.h"
#include "ActorReferenceInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FActorReferenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReferenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
};

