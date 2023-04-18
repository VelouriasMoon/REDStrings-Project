#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "PhotoModeCharacterInterface.h"
#include "NpcSkeletalMeshActor.generated.h"

class UCapsuleComponent;
class UNpcSkeletalMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcSkeletalMeshActor : public AActor, public IPhotoModeCharacterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CharacterCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMeshDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMaterialDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BPOverrideMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideOverlapInterpolateSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedLOD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNpcSkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalBodyLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalParts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_storeSkeletalMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_storeSkeletalBodyTransform;
    
public:
    ANpcSkeletalMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector4ParameterValue(FName ParameterName, FLinearColor ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector4ArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<FLinearColor>& ParameterValues);
    
    UFUNCTION(BlueprintCallable)
    void SetUseShaderBoneID(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<float>& ParameterValues);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderLayer(uint8 NewRenderLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcTickInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcTickEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLightChannnel(bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteBounds(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetHideOverlap(bool bHide, bool bOneFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLOD(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshes(int32 MeshDataTableID, int32 MaterialDataTableID);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMesh();
    
    UFUNCTION(BlueprintCallable)
    void PresentEventStart();
    
    UFUNCTION(BlueprintCallable)
    void PresentEventEnd();
    
    UFUNCTION(BlueprintCallable)
    void GetValidSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& MeshComps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNpcSkeletalMeshComponent* GetSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalFace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalBody();
    
    
    // Fix for true pure virtual functions not being implemented
};

