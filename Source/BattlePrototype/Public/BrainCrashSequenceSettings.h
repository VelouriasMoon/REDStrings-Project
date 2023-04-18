#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainCrashSequenceSettingsData.h"
#include "BrainCrashSequenceSettings.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainCrashSequenceSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainCrashSequenceSettingsData Data;
};

