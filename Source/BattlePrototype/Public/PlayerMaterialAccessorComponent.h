#pragma once
#include "CoreMinimal.h"
#include "MaterialAccessorComponent.h"
#include "PlayerMaterialAccessorComponent.generated.h"

class AActor;
class ACharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerMaterialAccessorComponent : public UMaterialAccessorComponent {
    GENERATED_BODY()
public:
    UPlayerMaterialAccessorComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupDefaultParameter(ACharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerMesh(USkeletalMeshComponent* PlayerMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCable(AActor* Player);
    
};

