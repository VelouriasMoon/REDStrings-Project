#pragma once
#include "CoreMinimal.h"
#include "HitRearDecideType.h"
#include "AttackCalcInfo.generated.h"

USTRUCT(BlueprintType)
struct FAttackCalcInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _collectedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HitRearDecideType _rearDecideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _collectedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _collectedBrainPower;
    
};

