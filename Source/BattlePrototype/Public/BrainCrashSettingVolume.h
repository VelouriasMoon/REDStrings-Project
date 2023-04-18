#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "GameFramework/Volume.h"
#include "BrainCrashSettingVolume.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainCrashSettingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TriggerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnbound;
    
    ABrainCrashSettingVolume();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTriggerTransformWS() const;
    
    UFUNCTION(BlueprintCallable)
    void FitGroundTriggerTransform();
    
};

