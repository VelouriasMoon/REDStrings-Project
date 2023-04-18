#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PsychicBattleSequenceData.h"
#include "PsychicBattleParameter.generated.h"

USTRUCT(BlueprintType)
struct FPsychicBattleParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPsychicBattleSequenceData Sequence_Ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPsychicBattleSequenceData Sequence_Ch0200;
    
};

