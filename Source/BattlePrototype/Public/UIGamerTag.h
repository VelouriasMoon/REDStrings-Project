#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIGamerTag.generated.h"

class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIGamerTag : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* XBoxUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_default;
    
public:
    UUIGamerTag();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetUserName();
    
    UFUNCTION(BlueprintCallable)
    void SetGuideVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThisGuide(UOverlay* NewGuide);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UTextBlock* usernametext, UWidgetAnimation* _default);
    
};

