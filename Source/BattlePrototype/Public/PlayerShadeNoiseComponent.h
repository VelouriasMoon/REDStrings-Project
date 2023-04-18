#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerShadeNoiseComponent.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerShadeNoiseComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMovementSpeedUpScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterRotationSpeedUpScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> TargetMaterials;
    
public:
    UPlayerShadeNoiseComponent();
    UFUNCTION(BlueprintCallable)
    void FirstSetup(UMeshComponent* InMesh, float InCharacterMovementSpeedUpScale, float InCharacterRotationSpeedUpScale);
    
};

