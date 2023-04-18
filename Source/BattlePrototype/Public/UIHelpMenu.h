#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIHelpMenu.generated.h"

class UCanvasPanel;
class UREDScrollBox;
class UTextBlock;
class UUIGuide;
class UUIHelpParts;
class UUITutoTipsParts;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIHelpMenu : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
public:
    UUIHelpMenu();
    UFUNCTION(BlueprintCallable)
    void UpdateStateHelpList(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUpdateElement(int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeList(UCanvasPanel* scrollBoxParent, UREDScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHelp(UUITutoTipsParts* uTutoTipsParts);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCommonHelp(UTextBlock* textHelp, UUIGuide* uiKeyGuide);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrow(int32 Index, UUIHelpParts* arrow);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
};

