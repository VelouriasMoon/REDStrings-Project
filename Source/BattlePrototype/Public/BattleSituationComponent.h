#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionParameter.h"
#include "EBattleSituationActionType.h"
#include "EBattleSituationType.h"
#include "OnChangeSituationDelegate.h"
#include "BattleSituationComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UBattleSituationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSituation OnChangeSituation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreChangeSituationRemainTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalSituationRemainTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreChangeSituationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeSituationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBattleSituationType SituationType;
    
public:
    UBattleSituationComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAction(FActionParameter Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSituationParameter(EBattleSituationActionType ActionType, float& RemainTime, int32& Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSituationType GetSituation() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSituation(EBattleSituationType Type);
    
};

