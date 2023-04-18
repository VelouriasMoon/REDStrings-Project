#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BrainCrashSafePoint.h"
#include "BrainCrashLocationSettings.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainCrashLocationSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainCrashSafePoint> SafePoints;
    
    UBrainCrashLocationSettings();
};

