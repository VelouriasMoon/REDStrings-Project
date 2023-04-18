#pragma once
#include "CoreMinimal.h"
#include "SaveLoadListClearType.h"
#include "SaveLoadListType.h"
#include "UIBase.h"
#include "UISaveLoadList.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISaveLoadList : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SaveLoadListType m_SaveLoadListType;
    
public:
    UUISaveLoadList();
    UFUNCTION(BlueprintCallable)
    void UpdateStateSaveLoadList(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetTitleFontOutLineColor(SaveLoadListType dataType, UTextBlock* text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScreenTexture(int32 ImageType, UTexture2D* ImageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLevelFontColor(bool LevelMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFontColor(SaveLoadListClearType dataType, UTextBlock* text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDataFontOutLineColor(SaveLoadListType dataType, UTextBlock* text);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNoDataListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListTextTime(UTextBlock* textDayTime, UTextBlock* textDayhh, UTextBlock* textDaymm, UTextBlock* textDayss, UTextBlock* textTimehh, UTextBlock* textTimemm, UTextBlock* textTimess);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListTextCommon(UImage* imageLine, UImage* imageClearIcon, UTextBlock* textDay1, UTextBlock* textDay2, UTextBlock* textTime1, UTextBlock* textTime2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListText(UImage* imageScreen, UTextBlock* textChapter, UTextBlock* textChapterTitle, UTextBlock* textInfo, UTextBlock* textPlLv, UTextBlock* PlLvNum, UTextBlock* PlName, UTextBlock* textDayFixTime, UTextBlock* textPlEx, UImage* imagePlEx, UTextBlock* textSlash, UTextBlock* textSaveType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListClear(UOverlay* clear_01, UOverlay* clear_02, UTextBlock* textclear_01, UTextBlock* textclear_02);
    
    UFUNCTION(BlueprintCallable)
    void InitializeListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDataExLoadAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDataBreakListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    SaveLoadListType getSaveDataType();
    
};

