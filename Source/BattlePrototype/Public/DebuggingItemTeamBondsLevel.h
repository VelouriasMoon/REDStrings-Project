#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemInt.h"
#include "EPlayerID.h"
#include "DebuggingItemTeamBondsLevel.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemTeamBondsLevel : public ADebuggingItemInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerType;
    
    ADebuggingItemTeamBondsLevel();
};

