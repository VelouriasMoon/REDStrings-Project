#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "ElevatorFloorParameter.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FElevatorFloorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CloseAnim;
    
};

