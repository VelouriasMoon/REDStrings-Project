#pragma once
#include "CoreMinimal.h"
#include "EUINoticeMessageCallType.h"
#include "UIBase.h"
#include "UINoticeMessage.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINoticeMessage : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimerMax;
    
public:
    UUINoticeMessage();
    UFUNCTION(BlueprintCallable)
    void UpdateStateNoticeMessage(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNoticeIcon(int32 Type);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveEventSubQuest();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEventClearGetter();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEvent(EUINoticeMessageCallType Type, FName ID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBrainMessageEvent(FName threadID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNoticeMessage(UTextBlock* textName, UTextBlock* textDetails, UImage* noticeImage, UImage* kizunaImage, UImage* ClearImage, UImage* frame1Image, UImage* frame2Image, UImage* frame3Image, UImage* noiseImage, UOverlay* bmguide);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    void AddEvent(EUINoticeMessageCallType Type, FName ID);
    
};

