#pragma once
#include "CoreMinimal.h"
#include "OnlineTestData.generated.h"

USTRUCT(BlueprintType)
struct FOnlineTestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vit;
    
};

