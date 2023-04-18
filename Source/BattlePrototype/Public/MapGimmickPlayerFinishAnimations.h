#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapGimmickPlayerFinishAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMapGimmickPlayerFinishAnimations : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Finish_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Finish_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Finish_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Finish_Backward;
    
};

