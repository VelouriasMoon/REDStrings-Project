#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BondsEpisodeContentData.h"
#include "BondsEpisodeDLCContent.h"
#include "EPlayerID.h"
#include "EScenarioType.h"
#include "ShowDestinationBoolCheckType.h"
#include "BondsEpisodeDBDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBondsEpisodeDBDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScenarioType ScenarioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgListTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgDetailTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID TargetBondsCharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBondsEpisodeContentData> ContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ShowDestinationBoolCheckType RelationshipOfConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBondsEpisodeDLCContent> DLCContent;
};

