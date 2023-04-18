#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Engine/DataTable.h"
#include "AnimNotifyRadialBlurColorModulate.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAnimNotifyRadialBlurColorModulate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorModluate;
};

