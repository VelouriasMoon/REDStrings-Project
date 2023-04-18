#pragma once
#include "CoreMinimal.h"
#include "EGimmickHorrorType.h"
#include "RSActorBackgroundBase.h"
#include "GimmickHorrorBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickHorrorBase : public ARSActorBackgroundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGimmickHorrorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasActioned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrawDebug;
    
    AGimmickHorrorBase();
};

