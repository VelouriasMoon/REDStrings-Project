#pragma once
#include "CoreMinimal.h"
#include "UIBrainTargetInfo.generated.h"

class ARSCharacterBase;
class UUITargetBrain;

USTRUCT(BlueprintType)
struct FUIBrainTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITargetBrain* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClose;
    
};

