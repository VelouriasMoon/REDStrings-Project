#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EHCBadState.h"
#include "BTD_Enemy_IsBadStatus_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsBadStatus_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHCBadState BadStatus;
    
    UBTD_Enemy_IsBadStatus_Native();
};

