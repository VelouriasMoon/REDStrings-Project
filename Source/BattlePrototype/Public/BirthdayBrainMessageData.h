#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BirthdayBrainMessageData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBirthdayBrainMessageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString threadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 underProgress;
};

