#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSSequencerValueInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRSSequencerValueInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateSequencer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRegisterSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroySequencer();
    
};

