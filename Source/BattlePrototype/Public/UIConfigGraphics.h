#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigGraphics.generated.h"

class UREDScrollBoxSimple;
class UUIConfigSelect2;
class UUIConfigSelect3;
class UUIConfigSelectMulti;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigGraphics : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigGraphics();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UREDScrollBoxSimple* ScrollBox, UUIConfigSelect3* uiAntiAliasingQuality, UUIConfigSelect2* uiVSync, UUIConfigSelect3* uiTextureQuality, UUIConfigSelect3* uiShadowQuality, UUIConfigSelect3* uiPostProccessingQuality, UUIConfigSelectMulti* uiResolution, UUIConfigSelect3* uiWindowMode, UUIConfigSelect3* uiFrameRate);
    
};

