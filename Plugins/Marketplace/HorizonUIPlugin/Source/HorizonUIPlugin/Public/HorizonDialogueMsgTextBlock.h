#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Math/Vector2D.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/CanvasPanel.h"
#include "EHorizonDialogueTextOverflowWarpMethod.h"
#include "HorizonDialogueBlockInfo.h"
#include "HorizonDialogueDialoguePageResult.h"
#include "HorizonDialogueHypertextResult.h"
#include "HorizonDialogueSegmentInfo.h"
#include "HorizonDialogueSegmentInfoStyle.h"
#include "Templates/SubclassOf.h"
#include "HorizonDialogueMsgTextBlock.generated.h"

class UHorizonButton;
class UHorizonDialogueStyleInfo;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonDialogueMsgTextBlock : public UCanvasPanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonHypertextEvent, const FHorizonDialogueHypertextResult&, InResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonDialoguePageEvent, const FHorizonDialogueDialoguePageResult&, InResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHorizonDialogueMsgEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHorizonDialogueCustomEvent, const FString&, InEventName, const FHorizonDialogueSegmentInfo&, InSegInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonDialogueCharAdvancedEvent, const FHorizonDialogueBlockInfo&, InCurrentBlockInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnDialogueMsgLoopFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnDialogueMsgCompleteFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialoguePageEvent OnSetDialoguePageFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialoguePageEvent OnDialoguePageEndFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnRebuildDialogueDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueCustomEvent OnCustomEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueCharAdvancedEvent OnCharAdvancedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorizonDialogueTextOverflowWarpMethod TextOverFlowWarpMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueMsgSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartTickDialogueMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatDialogueMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDialogueMsgInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDialogueMsgText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoNextDialogueMsgPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHorizonDialogueStyleInfo>> StyleInfoClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LineMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHorizonButton> DefaultButtonStyleWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHorizonDialogueStyleInfo*> StyleInfoList;
    
public:
    UHorizonDialogueMsgTextBlock();
    UFUNCTION(BlueprintCallable)
    void StopDialogue();
    
    UFUNCTION(BlueprintCallable)
    void StartDialogue();
    
    UFUNCTION(BlueprintCallable)
    void SkipDialogue();
    
    UFUNCTION(BlueprintCallable)
    void SkipCurrentDialoguePage();
    
    UFUNCTION(BlueprintCallable)
    void SkipCurrentDialogueMsgPageTick();
    
    UFUNCTION(BlueprintCallable)
    void SetTextAndRebuildDialogue(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartTickDialogueMsg(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRepeatDialogueMsg(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDialogueMsgText(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoNextDialogueMsgPage(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 FontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueMsgPage(int32 InPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate);
    
    UFUNCTION(BlueprintCallable)
    void ResumeDialogue();
    
    UFUNCTION(BlueprintCallable)
    void RequestRebuildDialogue();
    
    UFUNCTION(BlueprintCallable)
    void PauseDialogue();
    
    UFUNCTION(BlueprintCallable)
    void NextDialogueMsgPage();
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogueMsgPageEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogueMsgCompleted();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTextLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetPageTextByIndex(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETextJustify::Type> GetJustification() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPageTextLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex();
    
};

