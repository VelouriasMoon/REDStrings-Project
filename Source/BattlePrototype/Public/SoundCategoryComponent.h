#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESoundCategory.h"
#include "SoundCategoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USoundCategoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USoundCategoryComponent();
    UFUNCTION(BlueprintCallable)
    void SetSoundVolumeCategoryScale(ESoundCategory Category, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeParam(ESoundCategory Category, float FadeTime, float FadeFinishScale);
    
    UFUNCTION(BlueprintCallable)
    void ResetSoundVolumeCategoryScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundVolumeCategoryScaleCalc(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundBaseVolumeCategoryScale(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(ESoundCategory Category, float FadeTime, float FadeScale);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(ESoundCategory Category, float FadeTime, float FadeScale);
    
    UFUNCTION(BlueprintCallable)
    void Fade(float DeltaTime);
    
};

