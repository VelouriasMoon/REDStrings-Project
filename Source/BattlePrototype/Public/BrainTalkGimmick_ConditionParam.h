#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainTalkBattle_ConditionsParam.h"
#include "BrainTalkGimmick.h"
#include "BrainTalkGimmick_ConditionParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainTalkGimmick_ConditionParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkGimmick> m_DataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_DataList_Param;
};

