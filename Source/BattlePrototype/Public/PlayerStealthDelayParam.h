#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerStealthDelayParam.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStealthDelayParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStealthDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPauseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthDelayTimer;
    
};

