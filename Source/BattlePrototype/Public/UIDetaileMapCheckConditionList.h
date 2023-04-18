#pragma once
#include "CoreMinimal.h"
#include "UIDetaileMapCheckCoreData.h"
#include "UIDetaileMapCheckConditionList.generated.h"

USTRUCT(BlueprintType)
struct FUIDetaileMapCheckConditionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapCheckCoreData> ConditionList;
    
};

