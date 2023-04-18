#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Styling/SlateColor.h"
#include "EQuestDataType.h"
#include "UIBase.h"
#include "UIQuestListIndex.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestListIndex : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ActiveColorMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveOutlineColorMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ActiveColorSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveOutlineColorSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ActiveColorBonds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveOutlineColorBonds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ActiveColorClearGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveOutlineColorClearGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor InactiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InactiveOutlineColor;
    
public:
    UUIQuestListIndex();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInfo(EQuestDataType QuestType, const FName& ID, int32 Progress, int32 Index, bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClearGetterInfo(const FString& strTitle, int32 Progress, bool IsNew, bool isGetReward);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultLock, UWidgetAnimation* animSelectLock, UWidgetAnimation* animSelectLockIn, UImage* imageNewIcon, UImage* imageQuest, UImage* imageBlackPattern1, UImage* imageBlackPattern2, UOverlay* overlayYuito, UOverlay* overlayKasane, UImage* imageChallenge, UTextBlock* textQuestName);
    
};

