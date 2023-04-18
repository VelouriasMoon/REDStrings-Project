#pragma once
#include "CoreMinimal.h"
#include "UIPkObjectTimerInfo.generated.h"

class ARSCharacterBase;
class UUIPkObjectTimer;

USTRUCT(BlueprintType)
struct FUIPkObjectTimerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIPkObjectTimer* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClose;
    
};

