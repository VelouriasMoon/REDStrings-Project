#pragma once
#include "CoreMinimal.h"
#include "CharacterMaterialLightSettingScalarData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterMaterialLightSettingScalarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Parameter;
    
};

