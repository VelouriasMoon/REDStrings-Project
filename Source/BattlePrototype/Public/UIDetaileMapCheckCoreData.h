#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoDetaileCheckType.h"
#include "EAreaInfoDetaileConditionType.h"
#include "UIDetaileMapCheckCoreData.generated.h"

USTRUCT(BlueprintType)
struct FUIDetaileMapCheckCoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaInfoDetaileCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaInfoDetaileConditionType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Flag;
    
};

