#pragma once
#include "CoreMinimal.h"
#include "BrainTalkBattle_ConditionsParam_BTParam.generated.h"

USTRUCT(BlueprintType)
struct FBrainTalkBattle_ConditionsParam_BTParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_occurRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOnce;
};

