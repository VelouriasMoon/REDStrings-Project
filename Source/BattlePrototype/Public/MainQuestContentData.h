#pragma once
#include "CoreMinimal.h"
#include "MainQuestConditionData.h"
#include "MainQuestContentData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMainQuestContentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainQuestConditionData> Conditions;
    
};

