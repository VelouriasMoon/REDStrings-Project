#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RMAFoliageToolsBlueprintFunctionLibrary.generated.h"

class AInstancedFoliageActor;

UCLASS(Blueprintable)
class RMAFOLIAGETOOLS_API URMAFoliageToolsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URMAFoliageToolsBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetVersion_Fc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInstancedFoliageActor* GetInstancedFoliageActor_Fc();
    
};

