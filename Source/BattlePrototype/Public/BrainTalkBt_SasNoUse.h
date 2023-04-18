#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBrainTalkCategory.h"
#include "EPlayerID.h"
#include "E_SASKindNative.h"
#include "BrainTalkBt_SasNoUse.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainTalkBt_SasNoUse : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_SASKindNative SasEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID TalkMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrainTalkCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName datatableId;
};

