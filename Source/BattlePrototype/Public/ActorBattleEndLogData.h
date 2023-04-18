#pragma once
#include "CoreMinimal.h"
#include "EReasonBattleEnd.h"
#include "ActorBattleEndLogData.generated.h"

USTRUCT(BlueprintType)
struct FActorBattleEndLogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReasonBattleEnd reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrongCharacter;
    
};

