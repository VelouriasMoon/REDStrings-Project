#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CameraInterface.h"
#include "EPsychicObjectID.h"
#include "EPsychicObjectUniqueMontageIndex.h"
#include "HCCollisionCommonInfo.h"
#include "HCSkillCommonInfo.h"
#include "PsychicObjectInterface.h"
#include "PsychicObjectSearchInterface.h"
#include "PsychicObjectBasicC.generated.h"

class UAnimMontage;
class UDamageType;
class UMeshComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APsychicObjectBasicC : public AActor, public ICameraInterface, public IPsychicObjectInterface, public IPsychicObjectSearchInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPsychicObjectID PsychicObjectIdC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* pShadowComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCpuAccessC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCpuAccessC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterableC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInUseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TickReferenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaterialParameterEnableC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlEnableC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlAwakeC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlCheckC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlCheckRenderC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulateControlCheckRenderRadiusSqC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlApplyC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControlBackUpC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwingTypeC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBrainFieldObjectC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueObjectC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTownSettingC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackupSettingC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackupSimualteC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchableC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCheckRenderedC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixSearchPosC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SearchPosC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchHeightC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchHeightMinC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchHeightMaxC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadiusC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchSizeValueC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchPointC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArrangeResetEnableC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ArrangeActorTransformC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ArrangeMeshTransformC;
    
public:
    APsychicObjectBasicC();
    UFUNCTION(BlueprintCallable)
    FHitResult SetSceneComponentLocationRotation(USceneComponent* SceneComp, FVector Location, FRotator Rotation, bool bSweep);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSimulateControlRenderCheckParamC(bool Flag, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSimulateControlEnableC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSimulateControlCheckC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSimulateControlAwakeC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchSkipCheckRenderedC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchPosC(bool bFlag, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchPos(bool bFlag, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchHeight(bool bFlag, float heightMin, float heightMix);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchableC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectSearchable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectRegisterableC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectMaterialParameterEnableC(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectIdC(EPsychicObjectID psyObjId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectFellOutOfWorld(const UDamageType* pDmgType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetDistanceDestroyC();
    
    UFUNCTION(BlueprintCallable)
    void ResetArrangeTransformC();
    
    UFUNCTION(BlueprintCallable)
    bool IsAllowCpuAccess();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCpuAccess();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetUniqueObjectPlayerMontage(EPsychicObjectUniqueMontageIndex MontageIndex, bool bLeft, bool bMaleHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetUniqueObjectAttackParameter(FHCCollisionCommonInfo& OutCommonInto, FHCSkillCommonInfo& OutSkillInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    UMeshComponent* GetPsychicObjectShadow();
    
    UFUNCTION(BlueprintCallable)
    UMeshComponent* GetPsychicObjectMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMeshComponent*> GetMaterialParameterMeshList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPsychicObjectStillInWorld(float killZ);
    
    UFUNCTION(BlueprintCallable)
    bool CheckDestroyDistanceC(float chkDist);
    
    
    // Fix for true pure virtual functions not being implemented
};

