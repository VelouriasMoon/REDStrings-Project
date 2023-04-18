#pragma once
#include "CoreMinimal.h"
#include "Math/Vector4.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectiveGeomBPFunctions.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UProjectiveGeomBPFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProjectiveGeomBPFunctions();
private:
    UFUNCTION(BlueprintCallable)
    static FVector4 GetViewRect(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetDeprojectionMatrix(APlayerController* PlayerController);
    
};

