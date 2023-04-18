#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "AjitoNpcAttach.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoNpcAttach {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachOffset;
    
};

