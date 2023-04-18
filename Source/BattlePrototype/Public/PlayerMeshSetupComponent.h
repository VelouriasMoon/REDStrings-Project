#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PlayerMeshSetupComponent.generated.h"

class UMeshComponent;
class UPlayerRenderSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerMeshSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerMeshSetupComponent();
    UFUNCTION(BlueprintCallable)
    void DoSetup(UMeshComponent* Mesh, TSubclassOf<UPlayerRenderSettings> RenderSettingsClass);
    
};

