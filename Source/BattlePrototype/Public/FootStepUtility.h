#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//#include "Chaos/ChaosEngineInterface.h"
#include "EGamePhysicalSurfaceType.h"
#include "FootStepUtility.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UFootStepUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFootStepUtility();
    UFUNCTION(BlueprintCallable)
    static EGamePhysicalSurfaceType ConvertPhysicalSurfaceToGamePhysicalSurface(const TEnumAsByte<EPhysicalSurface> SurfaceType);
    
};

