#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "CharacterMaterialLightSettingScalarData.h"
#include "CharacterMaterialLightSettingVectorData.h"
#include "CharacterMaterialLightSetting.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterMaterialLightSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAmbientLightGradation_Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmbientLightGradation_Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAmbientLightGradation_Lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmbientLightGradation_Lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMaterialLightSettingScalarData> MaterialScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMaterialLightSettingVectorData> MaterialVector;
    
};

