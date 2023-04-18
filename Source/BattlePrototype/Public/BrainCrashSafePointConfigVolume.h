#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "BrainCrashSafePointConfigVolume.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainCrashSafePointConfigVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMakePoint;
    
    ABrainCrashSafePointConfigVolume();
};

