#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EScenarioType.h"
#include "MainQuestContentData.h"
#include "MainQuestDBDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMainQuestDBDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScenarioType ScenarioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgListTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgDetailTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainQuestContentData> ContentList;
    
};

