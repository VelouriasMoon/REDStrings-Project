#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSUniqueIdInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URSUniqueIdInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRSUniqueIdInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetUniqueName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUniqueId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetEnemyDeadReplaceLogName() const;
    
};

