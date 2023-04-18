#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectBackgroundMother.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEffectBackgroundMother : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mergeDistance_;
    
public:
    AEffectBackgroundMother();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MergeEffectBG();
    
};

