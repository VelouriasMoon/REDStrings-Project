#pragma once
#include "CoreMinimal.h"
#include "ShowDestinationBoolCheckType.h"
#include "ShowDestinationFlgCheck.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FShowDestinationFlgCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    ShowDestinationBoolCheckType BoolCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FName FlgName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool isCheck;
    
};

