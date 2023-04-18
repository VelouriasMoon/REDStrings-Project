#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "HeightGradationSettings.h"
#include "PlayerRenderSettings.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPlayerRenderSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeightGradationSettings> HeightGradationSettingsArray;
    
    UPlayerRenderSettings();
};

