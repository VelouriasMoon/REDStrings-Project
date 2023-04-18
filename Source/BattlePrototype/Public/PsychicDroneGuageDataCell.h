#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Engine/DataTable.h"
#include "PsychicDroneGuageDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPsychicDroneGuageDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CenterColor;
    
};

