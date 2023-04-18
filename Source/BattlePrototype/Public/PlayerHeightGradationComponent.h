#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeightGradationSettings.h"
#include "PlayerHeightGradationComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerHeightGradationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerHeightGradationComponent();
    UFUNCTION(BlueprintCallable)
    void ResetGradation(UMeshComponent* Mesh, const TArray<FHeightGradationSettings>& SettingsArray);
    
    UFUNCTION(BlueprintCallable)
    void AddGradation(UMeshComponent* Mesh, const TArray<FHeightGradationSettings>& SettingsArray);
    
};

