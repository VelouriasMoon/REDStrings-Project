#pragma once
#include "CoreMinimal.h"
#include "ASCharacter.h"
#include "PhantomBase.generated.h"

class UAnimMontage;
class UDynamicMaterialControllerComponent;
class UHitCheckComponent;
class UHitCheckReceiverComponent;
class UTeamComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API APhantomBase : public AASCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamComponent* Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitCheckComponent* HitCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitCheckReceiverComponent* HitCheckReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMaterialControllerComponent* DynamicMaterialController;
    
public:
    APhantomBase();
    UFUNCTION(BlueprintCallable)
    void StartPhantom(UAnimMontage* Montage, float fadeInSec);
    
    UFUNCTION(BlueprintCallable)
    void StartMaterialFade(bool bFadeIn, float fadeSec);
    
private:
    UFUNCTION(BlueprintCallable)
    void RecvOnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void RecvOnEndMaterialFade(FName ParameterName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCustomAttackTimingNotified(FName CustomName);
    
};

