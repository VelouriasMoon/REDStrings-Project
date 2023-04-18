#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GimmickObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UGimmickObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IGimmickObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GimmickOpenForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GimmickOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GimmickCloseForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GimmickClose();
    
};

