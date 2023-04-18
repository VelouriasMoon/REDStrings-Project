#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhotoModeCharacterInterface.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UPhotoModeCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IPhotoModeCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPhotoModeDither(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PhotoModeTick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPhotoModeManualOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetPhotoModeSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCapsuleComponent* GetPhotoModeManualOverlapCapsule();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetPhotoModeDitherDataName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BeginPhotoMode();
    
};

