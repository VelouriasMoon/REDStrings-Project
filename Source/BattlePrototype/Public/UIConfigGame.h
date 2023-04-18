#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UIBase.h"
#include "UIConfigGame.generated.h"

class UBackgroundBlur;
class UBorder;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class USaveLoadScreenParamManager;
class USoundAtomCue;
class UTextBlock;
class UUIConfigBrightness;
class UUIConfigChoice;
class UUIConfigController;
class UUIConfigGraphics;
class UUIConfigKeyboardMouse;
class UUIConfigOther;
class UUIConfigSelect2;
class UUIConfigSelect3;
class UUIConfigSelect4;
class UUIConfigSelect5;
class UUIConfigSelectMulti;
class UUIConfigSelectSlider;
class UUIGuide;
class UUIMainContents;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigGame : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndexPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyboardIndexPerPage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_pSoundSampleVoiceJP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_pSoundSampleVoiceEN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSystemSaveLoadScreenParamManager;
    
public:
    UUIConfigGame();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void unbindAnyKey();
    
    UFUNCTION(BlueprintCallable)
    void StartFromTitle();
    
    UFUNCTION(BlueprintCallable)
    void SetContentsChange(bool IsChange);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeMainMenuTabR();
    
    UFUNCTION(BlueprintCallable)
    void SetChangeMainMenuTabL();
    
    UFUNCTION(BlueprintCallable)
    void setAnyKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void playVibrationS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceivedCustomerID(const FString& ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeMainMenuTabR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeMainMenuTabL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isAllowChangeMainMenuTab();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWin, UWidgetAnimation* animInfoWinIn, UWidgetAnimation* animInfoWinOut, UBackgroundBlur* BackgroundBlur, UBorder* borderAllColor, UImage* imageCoverBlack, UREDScrollBoxSimple* ScrollBox, UTextBlock* textTitle, UTextBlock* textHelp, UOverlay* menuSet, UUIGuide* UIGuide, UUIConfigBrightness* uiBrightness, UUIConfigKeyboardMouse* uiKeyboardMouse, UUIConfigController* uiController, UUIConfigGraphics* uiGraphics, UUIConfigOther* uiOther, UImage* imageOtherCategoryLine, UUIConfigChoice* UIConfigChoice, UUIConfigSelect4* uiIndexDifficulty, UUIConfigSelect2* uiIndexAutoLockOn, UUIConfigSelect2* uiIndexAttackDirOrtho, UUIConfigSelect2* uiIndexAttackDirOrthoLockon, UUIConfigSelect3* uiIndexCameraDistance, UUIConfigSelect2* uiIndexAutoCamera, UUIConfigSelect5* uiIndexBehindCameraSpeed, UUIConfigSelect2* uiIndexCameraAfterMoveType, UUIConfigSelect2* uiIndexDisplayEnemyDamage, UUIConfigSelect2* uiIndexMiniMapDisplay, UUIConfigSelect2* uiIndexMiniMapRotation, UUIConfigSelect2* uiIndexMiniMapScaling, UUIConfigSelect2* uiIndexSASCutin, UUIConfigSelect2* uiIndexBrainCrashCutin, UUIConfigSelect2* uiIndexLetterSize, UUIConfigSelect2* uiIndexAutoSkip, UUIConfigSelectMulti* uiIndexVoiceLanguage, UUIConfigSelectSlider* uiIndexVoiceVolume, UUIConfigSelectSlider* uiIndexBGMVolume, UUIConfigSelectSlider* uiIndexSEVolume, UUIConfigSelect5* uiIndexCameraRotationSpeed, UUIConfigSelect5* uiIndexCameraSpeedLockon, UUIConfigSelect2* uiIndexCameraRotationPitch, UUIConfigSelect2* uiIndexCameraRotatinoYaw, UUIConfigSelect2* uiIndexControllerVibration, UTextBlock* textCustomerID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCommonParts(UTextBlock* textHelp, UUIGuide* uiKeyGuide, UUIMainContents* Parent, UWidgetAnimation* animMainMenuInfoWin, UWidgetAnimation* animMainMenuInfoWinIn, UWidgetAnimation* animMainMenuInfoWinOut);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void bindAnyKey();
    
};

