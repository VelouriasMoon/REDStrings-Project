#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Components/StaticMeshComponent.h"
#include "RSMaterialStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSMaterialStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    URSMaterialStaticMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMaterial();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialMeshVector(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialMeshScalar(FName ParameterName, float Value);
    
};

