#pragma once
#include "CoreMinimal.h"
#include "PlayerAIThreatActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPlayerAIThreatActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ThreatActor;
    
};

