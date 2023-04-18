#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIEnemyBooks.generated.h"

class UImage;
class UREDScrollBox;
class UTextBlock;
class UTexture;
class UUIBooksTop;
class UUIEnemyInfoWindow;
class UUIEnemyListIndex;
class UUIGuide;
class UUIMainContents;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEnemyBooks : public UUIBase {
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
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureEnemy[4];
    
    UUIEnemyBooks();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
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
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UREDScrollBox* ScrollBox, UUIEnemyInfoWindow* childInfoWin, UUIEnemyListIndex* childListIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFromMain(UUIMainContents* UIMainContents, UTextBlock* textHelp, UUIGuide* uiKeyGuide);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromBooks(UUIBooksTop* Parent, UImage* imageEnemy);
    
};

