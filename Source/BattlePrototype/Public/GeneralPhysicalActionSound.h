#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GeneralPhysicalActionSoundContent.h"
#include "GeneralPhysicalActionSound.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FGeneralPhysicalActionSound : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FString comment;
    
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FGeneralPhysicalActionSoundContent Surfaces[26];
    
};

