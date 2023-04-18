#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArrayOfFloat.h"
#include "ArrayOfLinearColor.h"
#include "CharacterMaterialLightSetting.h"
#include "CharacterMaterialLightFunction.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCharacterMaterialLightFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterMaterialLightFunction();
    UFUNCTION(BlueprintCallable)
    static void SetupCharacterMaterialLight(UMeshComponent* MeshComponent, const FCharacterMaterialLightSetting& LightSetting, const TMap<FName, FArrayOfFloat>& DefaultScalars, const TMap<FName, FArrayOfLinearColor>& DefaultVectors, float Rate);
    
};

