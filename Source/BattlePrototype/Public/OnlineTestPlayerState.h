#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OnlineTestData.h"
#include "OnlineTestPlayerState.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AOnlineTestPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetTestData, meta=(AllowPrivateAccess=true))
    FOnlineTestData TestData;
    
    AOnlineTestPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetData(FOnlineTestData Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetTestData();
    
};

