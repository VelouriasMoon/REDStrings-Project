#pragma once
#include "CoreMinimal.h"
#include "UIDetaileMapCheckConditionList.h"
#include "UIDetaileMapCheckSubData.generated.h"

USTRUCT(BlueprintType)
struct FUIDetaileMapCheckSubData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapCheckConditionList> SubData;
    
};

