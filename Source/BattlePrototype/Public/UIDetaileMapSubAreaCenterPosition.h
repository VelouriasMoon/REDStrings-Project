#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "UIDetaileMapSubAreaCenterPosition.generated.h"

USTRUCT(BlueprintType)
struct FUIDetaileMapSubAreaCenterPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterSunAreaPos;
    
};

