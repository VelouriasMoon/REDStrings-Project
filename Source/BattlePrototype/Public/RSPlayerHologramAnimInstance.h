#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "RSPlayerHologramAnimInstanceInterface.h"
#include "RSPlayerHologramAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSPlayerHologramAnimInstance : public UAnimInstance, public IRSPlayerHologramAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bUseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpineAimRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeaponRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponRootLocation;
    
    URSPlayerHologramAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
};

