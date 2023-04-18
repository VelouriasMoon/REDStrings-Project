#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformUserIdFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPlatformUserIdFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformUserIdFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetGamerTag(UObject* WorldContextObject);
    
};

