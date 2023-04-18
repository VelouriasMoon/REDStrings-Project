#pragma once
#include "CoreMinimal.h"
#include "PresentInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPresentInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasPresented;
    
};

