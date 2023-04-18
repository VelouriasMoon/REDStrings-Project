#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Math/Vector2D.h"
#include "EItemFavorability.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UICharaPresentWindow.generated.h"

class UBorder;
class UImage;
class UREDScrollBox;
class UTextBlock;
class UUICharaPresentListIndex;
class UUIGuide;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICharaPresentWindow : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorNumNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorNumMax;
    
public:
    UUICharaPresentWindow();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfo(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFavorabilityIcon(EItemFavorability favorability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFaceIcon(EPlayerID characterId);
    
protected:
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
    void InitializeThis(UREDScrollBox* ScrollBox, UUICharaPresentListIndex* childListIndex, UImage* imagePresent, UTextBlock* textTitleBar, UTextBlock* textCharaName, UBorder* borderBondLevelNum, UTextBlock* textBondLevelNum, UTextBlock* textItemName, UBorder* borderCurrentNum, UTextBlock* textCurrentNum, UTextBlock* textSlash, UTextBlock* textMaxNum, UUIGuide* childGuide, UTextBlock* textKeyBondsQuest);
    
};

