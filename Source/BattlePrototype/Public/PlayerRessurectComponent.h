#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RessurectSuccessDelegateDelegate.h"
#include "PlayerRessurectComponent.generated.h"

class AActor;
class UUIResurrectionGauge;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerRessurectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRessurectSuccessDelegate DispatchResurrectSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RessurectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RessurectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RessurectHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RessurectAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconOffsetZ;
    
    UPlayerRessurectComponent();
    UFUNCTION(BlueprintCallable)
    void SuspendRessurect();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleWidget(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    bool IsExecRessurect();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRessurect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIResurrectionGauge* GetUI();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetDistanceSquared2D();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateRessurectIcon();
    
    UFUNCTION(BlueprintCallable)
    void BeginRessurect(float timeRate);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRessurectIcon(AActor* deadPlayer);
    
};

