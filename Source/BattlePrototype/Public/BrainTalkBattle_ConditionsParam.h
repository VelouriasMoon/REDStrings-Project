#pragma once
#include "CoreMinimal.h"
#include "BrainTalkBattle_ConditionsParam_BTParam.h"
#include "BrainTalkBattle_ConditionsParam.generated.h"

USTRUCT(BlueprintType)
struct FBrainTalkBattle_ConditionsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBattle_ConditionsParam_BTParam> m_BTParam;
};

