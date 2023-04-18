#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "DebugInfoScreenData.generated.h"

USTRUCT(BlueprintType)
struct FDebugInfoScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
};

