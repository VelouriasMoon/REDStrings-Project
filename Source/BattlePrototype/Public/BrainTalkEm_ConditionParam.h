#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainTalkBattle_ConditionsParam.h"
#include "BrainTalkEm_Capture.h"
#include "BrainTalkEm_ConditionParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainTalkEm_ConditionParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkEm_Capture> m_DataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_DataList_Param;
};

