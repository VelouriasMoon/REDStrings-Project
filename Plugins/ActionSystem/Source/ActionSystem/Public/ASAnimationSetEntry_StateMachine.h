#pragma once
#include "CoreMinimal.h"
#include "ASAnimationSetEntry.h"
#include "ASAnimationSetEntry_StateMachine.generated.h"

class UASStateMachine;

USTRUCT(BlueprintType)
struct FASAnimationSetEntry_StateMachine : public FASAnimationSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASStateMachine* StateMachine;
};

