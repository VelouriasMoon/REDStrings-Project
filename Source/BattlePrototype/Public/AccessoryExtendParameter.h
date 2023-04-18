#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AccessoryExtendParameter.generated.h"

USTRUCT(BlueprintType)
struct FAccessoryExtendParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Parameter;
};

