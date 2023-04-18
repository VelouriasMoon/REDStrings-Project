#pragma once
#include "CoreMinimal.h"
#include "UIDetaileMapCheckConditionList.h"
#include "UIDetaileMapCheckSubData.h"
#include "UIDetaileMapCheckAreaData.generated.h"

USTRUCT(BlueprintType)
struct FUIDetaileMapCheckAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapCheckConditionList> AreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapCheckSubData> SubList;
    
};

