#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EnemyCheckDodgeJustComponent.generated.h"

class UHitCheckComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyCheckDodgeJustComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDodgeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDodgeRadiusRangeAttack;
    
public:
    UEnemyCheckDodgeJustComponent();
    UFUNCTION(BlueprintCallable)
    bool CheckEnableDodgeJust(const FVector& Location, const FVector& UpDir, const FVector& Offset, float Height, float Radius, UHitCheckComponent* HitCheck, float CheckScale, float CheckRangeScale);
    
};

