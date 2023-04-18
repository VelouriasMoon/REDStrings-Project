#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "Components/SceneComponent.h"
#include "ENpcMeshSkeletonType.h"
#include "NpcSkeletalMeshComponent.generated.h"

class AActor;
class UDataTable;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNpcSkeletalMeshComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginPlaySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMeshDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMaterialDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptimizeMergeMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MeshDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaterialDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaterialSkeletonDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcMeshSkeletonType SkeletonType;
    
public:
    UNpcSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector4ParameterValue(FName ParameterName, FLinearColor ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector4ArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<FLinearColor>& ParameterValues);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAttachParentBounds(bool IsUse);
    
    UFUNCTION(BlueprintCallable)
    void SetupLanding(float Height);
    
    UFUNCTION(BlueprintCallable)
    void Setup(AActor* Owner, int32 InNpcMeshDataTableID, USkeletalMeshComponent* InBody, USkeletalMeshComponent* InBodyLower, USkeletalMeshComponent* InFace, USkeletalMeshComponent* InHair, TArray<USkeletalMeshComponent*>& InParts);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<float>& ParameterValues);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialBaseToAmbSkin(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialAmbToBaseSkin(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHideOverlap(bool bHide, bool bOneFrame);
    
    UFUNCTION(BlueprintCallable)
    void ResetMesh(int32 InNpcMeshDataTableID);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaterial(int32 InNpcMaterialDataTableID);
    
    UFUNCTION(BlueprintCallable)
    void GetValidSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& MeshComps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcMeshSkeletonType GetSkeletonType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSkeletonName() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetRootComponent();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPartsMaxNum();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetAnimationComponent();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlaySetup();
    
};

