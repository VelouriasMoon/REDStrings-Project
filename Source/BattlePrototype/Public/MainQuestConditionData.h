#pragma once
#include "CoreMinimal.h"
#include "MainQuestFlagConditionData.h"
#include "ShowDestinationCheckType.h"
#include "MainQuestConditionData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMainQuestConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ShowDestinationCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperLimitProgressID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainQuestFlagConditionData FlagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainQuestFlagConditionData InValidFlagData;
    
};

