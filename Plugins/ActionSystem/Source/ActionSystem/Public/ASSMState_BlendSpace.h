#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "ASSMStateNode.h"
#include "ASSMState_BlendSpace.generated.h"

UCLASS(Blueprintable)
class ACTIONSYSTEM_API UASSMState_BlendSpace : public UASSMStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UASSMState_BlendSpace();
};

