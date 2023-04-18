#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Distributions/DistributionFloat.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleLocationMesh.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationMesh : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SurfaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicMeshParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EqualTriangeWeight;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FRawDistributionFloat VelocityScale;
    
public:
    UParticleModuleLocationMesh();
private:
    UFUNCTION(BlueprintCallable)
    void OnCachedActorDestroyed(AActor* DestroyedActor);
    
};

