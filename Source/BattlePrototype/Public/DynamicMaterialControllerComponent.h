#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Components/ActorComponent.h"
#include "DynamicMaterialControllerComponentEndParameterFadeDelegateDelegate.h"
#include "DynamicMaterialControllerComponent.generated.h"

class AActor;
class UDynamicMaterialControllerComponent;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDynamicMaterialControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMaterialControllerComponentEndParameterFadeDelegate _dispatcherEndParameterFade;
    
    UDynamicMaterialControllerComponent();
    UFUNCTION(BlueprintCallable)
    void StartFadeScalarParameter(FName ParameterName, bool bToOne, float fadeSec);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetupMeshMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterValue(FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetVectorParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    float GetScalarParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMaterialControllerComponent* GetDynamicMaterialControllerComponent(AActor* Actor);
    
};

