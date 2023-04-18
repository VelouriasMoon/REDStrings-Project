#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CutCameraComponent.generated.h"

class UDataTable;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCutCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _OwnerOldCustomDilation;
    
public:
    UCutCameraComponent();
    UFUNCTION(BlueprintCallable)
    void Setup(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseCutCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableCutCamera(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraRequest(FName ParameterName, bool bEnd, bool bPitchSet, float Pitch, UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void CameraBlendTimeUpdate();
    
};

