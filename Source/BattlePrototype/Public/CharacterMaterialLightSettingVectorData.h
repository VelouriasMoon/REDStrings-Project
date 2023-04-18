#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "CharacterMaterialLightSettingVectorData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterMaterialLightSettingVectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Parameter;
    
};

