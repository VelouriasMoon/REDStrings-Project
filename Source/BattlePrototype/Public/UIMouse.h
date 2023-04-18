#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIMouse.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMouse : public UUIBase {
    GENERATED_BODY()
public:
    UUIMouse();
    UFUNCTION(BlueprintCallable)
    void SetUnFoucus();
    
    UFUNCTION(BlueprintCallable)
    void SetFoucus();
    
    UFUNCTION(BlueprintCallable)
    void MouseAnimeNone(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool isFoucus();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* out_focus, UWidgetAnimation* in_focus, UWidgetAnimation* default_focus, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseAnimeNone();
    
};

