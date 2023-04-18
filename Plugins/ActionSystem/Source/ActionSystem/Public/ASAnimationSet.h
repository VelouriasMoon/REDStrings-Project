#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ASAnimationSetEntry_BlendSpace.h"
#include "ASAnimationSetEntry_Sequence.h"
#include "ASAnimationSetEntry_StateMachine.h"
#include "ASAnimationSet.generated.h"

UCLASS(Blueprintable)
class ACTIONSYSTEM_API UASAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASAnimationSet* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASAnimationSetEntry_Sequence> Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASAnimationSetEntry_BlendSpace> BlendSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASAnimationSetEntry_StateMachine> StateMachines;
};

