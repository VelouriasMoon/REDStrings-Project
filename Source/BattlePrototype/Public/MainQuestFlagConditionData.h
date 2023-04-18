#pragma once
#include "CoreMinimal.h"
#include "MainQuestFlagConditionData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMainQuestFlagConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCheck;
    
};

