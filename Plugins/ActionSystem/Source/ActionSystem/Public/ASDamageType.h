#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "GameFramework/DamageType.h"
#include "EDamagePower.h"
#include "ASDamageType.generated.h"

UCLASS(Blueprintable)
class ACTIONSYSTEM_API UASDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamagePower DamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDirection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTimeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTimeDamage;
    
    UASDamageType();
};

