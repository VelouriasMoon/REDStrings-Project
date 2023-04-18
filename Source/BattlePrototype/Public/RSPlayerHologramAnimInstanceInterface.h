#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "EPlayerHologramAnimKind.h"
#include "RSPlayerHologramAnimInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URSPlayerHologramAnimInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRSPlayerHologramAnimInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWeaponRootLocation(bool bUse, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseMontage(bool bUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAimRotator(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestAnim(EPlayerHologramAnimKind kind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRequestAnimKind(EPlayerHologramAnimKind kind) const;
    
};

