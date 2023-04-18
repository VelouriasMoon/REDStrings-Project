#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GeneralPhysicalActionEffectContent.h"
#include "GeneralPhysicalActionEffect.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FGeneralPhysicalActionEffect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FString comment;
    
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FGeneralPhysicalActionEffectContent Surfaces[26];
    
};

