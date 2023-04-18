#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "EEffectObjectDebrisType.h"
#include "EPsychicObjectID.h"
#include "EPsychicObjectSizeType.h"
#include "PsychicObjectInterface.generated.h"

class AActor;
class UMaterialInterface;
class UParticleSystem;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UPsychicObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IPsychicObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetUniqueObjectC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTownSetting(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSwingTypeC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectTickC(FName refName, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectSimulateControlC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectRenderC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectInUseC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectEventC(bool bStart, bool bTick, bool bVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPsychicObjectActiveC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMaterialParameter(FName ParamName, float ParamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetDuelPoleType(bool bDuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBrainFieldObjectC(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetPsychicObjectArrangeTransformC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestEndUniqueObjectState(AActor* pActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsUniqueObjectC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsUniqueObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSwingTypeC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSwingType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectTickC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectSimulateControlEnableC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectSimulateC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectRenderC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectRegisterableC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectInUseC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPsychicObjectActiveC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFloatObjectC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCopyPsychicObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBrainFieldObjectC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeCopyPsychicObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetUnqObjMoveVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetUnqObjCamTargetPos();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetUniqueObjectCameraOwnerRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetUniqueObjectCameraLookAtPos(float LookAtRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPsychicObjectSizeType GetPsychicObjectSize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetPsychicObjectSimulateControlDistanceSqC(float& distSq);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetDebrisEffectData(UParticleSystem*& ParticleTemplate, UMaterialInterface*& OverrideMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetDebrisEffect(EEffectObjectDebrisType& Type, UMaterialInterface*& OverrideMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPsychicObjectSimulateC(FVector posPly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPsychicObjectIdC(EPsychicObjectID checkId);
    
};

