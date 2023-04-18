#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnemyDeadMoveComponentBase.generated.h"

class ARSCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyDeadMoveComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* mOwnerEnemy;
    
public:
    UEnemyDeadMoveComponentBase();
protected:
    UFUNCTION(BlueprintCallable)
    void Update_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start_Native(float BlendExp, float MoveLength, TEnumAsByte<EEasingFunc::Type> Function, float MoveSeconds, FVector DamageDir);
    
};

