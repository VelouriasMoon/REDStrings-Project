#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "DeepenTheBondsParamManager.generated.h"

class AAjitoMember;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDeepenTheBondsParamManager : public UObject {
    GENERATED_BODY()
public:
    UDeepenTheBondsParamManager();
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedChar(EPlayerID charID);
    
    UFUNCTION(BlueprintCallable)
    void OnRecheckFlag(bool bYuito);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedTogetherCharID(TArray<EPlayerID>& selectedArray);
    
    UFUNCTION(BlueprintCallable)
    void GetRandomSelectChar(TArray<AAjitoMember*> ajitMember, AAjitoMember*& selectedChar);
    
    UFUNCTION(BlueprintCallable)
    void ControlTimerAtChangePlayer(bool bYuito);
    
};

