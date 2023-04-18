#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerENpcBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerENpcBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactionChance;
    
public:
    UPlayerENpcBaseComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartReactionChance_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetHitTrigger_CallFromCPP(bool bIsHitTrigger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionChanceCPP() const;
    
};

