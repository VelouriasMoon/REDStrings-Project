#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "PostProcessSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPostProcessSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPostProcessSettingsDataAsset();
};

