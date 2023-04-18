#pragma once
#include "CoreMinimal.h"
#include "MaterialAccessorComponent.h"
#include "EnemyMaterialAccessorComponent.generated.h"

class ACharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyMaterialAccessorComponent : public UMaterialAccessorComponent {
    GENERATED_BODY()
public:
    UEnemyMaterialAccessorComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupDefaultParameter(ACharacter* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnemyMesh(USkeletalMeshComponent* EnemyMesh);
    
};

