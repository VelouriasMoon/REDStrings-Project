#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSCustomOperatorLib.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSCustomOperatorLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSCustomOperatorLib();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftRight(int32 Value, int32 Shift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftLeft(int32 Value, int32 Shift);
    
};

