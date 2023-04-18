#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "REDLuaScriptComponent.generated.h"

class AActor;
class APlayerController;
class UAnimMontage;
class UCurveFloat;
class UEventAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UREDLuaScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_AnimationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pWaitAnimMontageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_pWaitAnimMontageMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pStaticCutsceneBG_ParticleSpeedUpCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventAsset* m_pWaitLoadAsset;
    
public:
    UREDLuaScriptComponent();
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEndMotion(bool IsEndMotion);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationActor(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool CreateContextRED(UObject* Parent, bool isRun);
    
};

