#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HCCollisionCommonInfo.h"
#include "HitBitKind.h"
#include "HitBitComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHitBitComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bAutoInitHitBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<HitBitKind> _initHitBitKinds;
    
public:
    UHitBitComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHit(int32 HitBit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcDamageHitBit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcAttackHitBit(const FHCCollisionCommonInfo& commonInfo);
    
};

