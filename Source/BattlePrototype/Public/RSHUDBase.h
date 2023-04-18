#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Math/Vector2D.h"
#include "GameFramework/HUD.h"
#include "InputManager.h"
#include "EBossNameMode.h"
#include "EHelpTutorial.h"
#include "EPlayerID.h"
#include "ERSGamepadLayoutType.h"
#include "ESoundState.h"
#include "ESubMenuType.h"
#include "EUIFadeColorType.h"
#include "EUIInputButton.h"
#include "EUIInputType.h"
#include "ReturnFromPartyMenuDelegate.h"
#include "ReturnFromPhotoModeDelegate.h"
#include "Templates/SubclassOf.h"
#include "RSHUDBase.generated.h"

class APhotoModeCamera;
class URSAtomComponentBase;
class USoundAtomCue;
class UUIActionIcon;
class UUIAreaHere;
class UUIAreaNext;
class UUIBase;
class UUIBrainTalk;
class UUICode;
class UUIConfigBrightness;
class UUIConfigChoice;
class UUIConfigController;
class UUIConfigSelect2;
class UUIConfigSelect3;
class UUIConfigSelect5;
class UUIConfigSelectMulti;
class UUIConfigSelectSlider;
class UUICredit;
class UUIDetailMap;
class UUIFade;
class UUIGeneralChoice;
class UUIInfoWindow;
class UUILetterBoxMask;
class UUIMainContents;
class UUIMenuBattleControl;
class UUIMouse;
class UUINoticeQuest;
class UUINoticeQuestReward;
class UUIPhotoMode;
class UUIPresent;
class UUIPresentNext;
class UUISaveLoad;
class UUIScarletLogo;
class UUIShop;
class UUITips;
class UUITutoOperation;
class UUIVisionSimulator;
class UUIVisionSimulatorResult;
class UUIVisionSimulatorStartEnd;
class UUIWorldMap;

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API ARSHUDBase : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> SEArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pAtomComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_pUILetterBoxMaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUILetterBoxMask* UILetterBoxMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUIFadeClass;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIFade* UIFadeArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUIGeneralChoiceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGeneralChoice* UIGeneralChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUISystemNoticeChoiceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGeneralChoice* UISystemNoticeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUITipsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITips* UITips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUISystemMessageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIInfoWindow* UISystemMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIActionIcon*> ActionIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawMessageFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUIMouseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMouse* UIMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pUIScarletLogoClsss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIScarletLogo* m_pUIScarletLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIBase*> ManageWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTickUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINoticeQuest* NoticeQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINoticeQuestReward* NoticeQuestReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inputLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMenuBattleControl* HUD_battle_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubMenuType CurrentSubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSGamepadLayoutType PrevInputManagerLayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PrevGameViewRenderLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateSubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RestrictOpenMenuClaimantList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RestrictOpenTipsClaimantList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIDetailMap* WidgetDetailMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIWorldMap* WidgetWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldMapStartParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldMapOpenFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIShop* WidgetShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUICode* WidgetCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMainContents* WidgetParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUISaveLoad* WidgetSaveLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIPresent* WidgetPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIPresentNext* WidgetPresentNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIAreaHere* WidgetAreaHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIAreaNext* WidgetAreaNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUICredit* WidgetCredit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITutoOperation* WidgetOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBrainTalk* WidgetBrainTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIVisionSimulator* WidgetVisionSimulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIVisionSimulatorResult* WidgetVisionSimulatorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIVisionSimulatorStartEnd* WidgetVisionSimulatorStartEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIPhotoMode* WidgetPhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveResurrectIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTitleOutGame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoModeCamera* m_PhotoModeCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOutGamePhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCameraCutPhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StorePhotoModeBeforeAA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_StorePhotoModeBeforeFlagPlayUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigBrightness> m_pConfigClassBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigChoice> m_pConfigClassChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigController> m_pConfigClassController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigSelect2> m_pConfigClassSelect2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigSelect3> m_pConfigClassSelect3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigSelect5> m_pConfigClassSelect5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigSelectMulti> m_pConfigClassSelectMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIConfigSelectSlider> m_pConfigClassSelectSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIBase> m_pTabClassParts4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIBase> m_pTabClassParts5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIBase> m_pTabClassParts6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigBrightness* m_pConfigBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigChoice* m_pConfigChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigController* m_pConfigController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigSelect2* m_pConfigSelect2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigSelect3* m_pConfigSelect3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigSelect5* m_pSConfigelect5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigSelectMulti* m_pConfigSelectMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigSelectSlider* m_pConfigSelectSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBase* m_pTabParts4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBase* m_pTabParts5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBase* m_pTabParts6;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnFromPartyMenu ReturnFromPartyMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnFromPhotoMode ReturnFromPhotoMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugIsDrawInvalidationInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pDebugDrawClass;
    
    ARSHUDBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateItemMenuUI();
    
    UFUNCTION(BlueprintCallable)
    void UnLockInputSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void UnlockDetailMapWarning();
    
    UFUNCTION(BlueprintCallable)
    void UnloadResidentWidget();
    
    UFUNCTION(BlueprintCallable)
    void TDebugDrawWidgetLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBrainTalkVoiceFromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopAutoSaveIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void startVisionSimulatorStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void startVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool startVisionSimulatorResult(bool isCheckMode, FName MissionTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void startVisionSimulatorEnd();
    
    UFUNCTION(BlueprintCallable)
    bool StartTutoTips(EHelpTutorial TutoID, bool notPauseControll, bool notCloseOfPause, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartTutoOperation(FName helpTutoID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartTownName(int32 LocationId);
    
    UFUNCTION(BlueprintCallable)
    bool StartSubQuestReward(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    void StartSubMenu(ESubMenuType SubMenuType, int32 Parameter, int32 Parameter2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartStaffRoll(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartSasWindowNative(EPlayerID Target, bool isEx1, bool isEx2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void startPhotoModeUI();
    
    UFUNCTION(BlueprintCallable)
    void StartPhotoModeOutGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartMessageGuide(bool FlagSkip, bool FlagPhotoMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartLoading(bool IsFadeWhite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartKeyword();
    
    UFUNCTION(BlueprintCallable)
    void StartGeneralChoice4(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, const FString& textIndex4, bool cancelable, int32 CancelIndex, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable)
    void StartGeneralChoice3(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, bool cancelable, int32 CancelIndex, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable)
    void StartGeneralChoice2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, bool cancelable, int32 CancelIndex, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable)
    void StartGeneralChoice1(const FString& TextMain, const FString& textIndex, bool cancelable, int32 CancelIndex, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable)
    void StartEventFinishWaitMode_AfterCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartCode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartCharaName(const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    void StartBrainMessageMenu(bool IsAutoMode);
    
    UFUNCTION(BlueprintCallable)
    void StartBossName(const FString& bossId, EBossNameMode Mode, float freeFixedDrawSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartAutoSaveIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartAreaNext(int32 LocationId, int32 areaId, int32 PortalID, bool isWorldMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartAreaHere(int32 LocationId, int32 areaId, int32 PortalID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SkipMessage();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMenuDefaultCursor(EPlayerID CharaID, bool IsVisual);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetVisionSimulatorTimerDraw(bool IsDraw);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleActionUI(bool FlagVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTDebugInvisibleAll(bool IsInvisible);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveShopMenu(bool isReserve);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayBattleUI(bool FlagPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyMenuViewerMode(bool IsViewerMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlapEventInvalidFlag(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetOutGame(bool isOutGame);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenWorldMap();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenDetailMap();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenBrainMessage();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseEnableMainTab(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseDispRectangle(bool dispflag);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseDispIcon(bool icondisp);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseCursorUse(bool useflag);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseCursorShow(bool showflag, bool foceshow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLogUpdateGoal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLogItemOverFlow(const FString& ItemName, const float _drawTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLogGetMoneyFromNative(int32 GetMoney, const float _drawTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLogGetItem(const FString& ItemName, int32 itemNum, const float _drawTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLogBrainFieldAddTime();
    
    UFUNCTION(BlueprintCallable)
    void SetGuideVisibleSysMess(bool isGuide);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePartyMenu(bool enableFlag);
    
    UFUNCTION(BlueprintCallable)
    void setDebugWorldmapUnlockFlag(bool UnlockFlag);
    
    UFUNCTION(BlueprintCallable)
    void setDebugSaveLoadMenuSetting(int32 settingIndex);
    
    UFUNCTION(BlueprintCallable)
    void setDebugMinimapAreaSetting(const FString& settingAreaName);
    
    UFUNCTION(BlueprintCallable)
    void setDebugKeyboard(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDispUserTag(bool dispflag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomTimeDilation_FromNative(const FString& Name, float CurrentCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraCutPhotoMode(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMessageDefaultThread(FName ThreadTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMapCursorSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMapCursorCorrectSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMapCursorCorrectArea(float Area);
    
    UFUNCTION(BlueprintCallable)
    void SetBPUnFoucusMouse();
    
    UFUNCTION(BlueprintCallable)
    void SetBPFoucusMouse();
    
    UFUNCTION(BlueprintCallable)
    void SasSetChangePageReady(bool ReadyFlagL, bool ReadyFlagR);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTutoOperation();
    
    UFUNCTION(BlueprintCallable)
    void RestrictOpenTips(bool bRestrict, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void RestrictOpenMenu(bool bRestrict, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeaponMenuDefaultCursor();
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomTimeDilationAccelerateInValidSettings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromManageWidget(UUIBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDiscoverIndexList(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveCustomTimeDilation_FromNative(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveActionIcon(UUIActionIcon* ActionIcon);
    
    UFUNCTION(BlueprintCallable)
    void releaseVisionSimulatorStartEnd();
    
    UFUNCTION(BlueprintCallable)
    void releaseVisionSimulatorResult();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ProcBattleMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayDecideAnimeBrainTuto();
    
    UFUNCTION(BlueprintCallable)
    void PauseTutoOperation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseBrainTalkForEventFromNative(const bool IsPause);
    
    UFUNCTION(BlueprintCallable)
    void OpenWorldMap();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMessage(const FString& SystemMessage, bool isWarning, bool isGuide, bool NewIsFade);
    
    UFUNCTION(BlueprintCallable)
    bool OpenStartSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    bool OpenStartBondsQuest(FName bondsQuestId);
    
    UFUNCTION(BlueprintCallable)
    void OpenScarletLogo();
    
    UFUNCTION(BlueprintCallable)
    bool OpenMinimap(bool Force);
    
    UFUNCTION(BlueprintCallable)
    bool OpenBrainTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBrainTalkFromNative(const int32 characterId, const int32 ExpressionID, const FString& messageID, const float DrawSecond);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnTitleBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAvoid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NextBrainTalkMessage(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MiniTipsSuccessStopDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MiniTipsSuccessStartDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MiniTipsStopDraw(EHelpTutorial TipsID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float MiniTipsStartDraw(EHelpTutorial TipsID);
    
    UFUNCTION(BlueprintCallable)
    void LockInputSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void LockDetailMapWarning();
    
    UFUNCTION(BlueprintCallable)
    void LoadResidentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsValidMessageVoiceToMessageBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool isTutoTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isTutoOperation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTDebugInvisibleAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSavedSaveLoadMenuError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSavedSaveLoadMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlaySasWindowNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayMessageOpenAnimationNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayBrainTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhotoModeOutlineSetting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyMenuViewerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutGamePhotoMode();
    
    UFUNCTION(BlueprintCallable)
    bool isOutGameHudMain();
    
    UFUNCTION(BlueprintCallable)
    bool isOpenSubMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOpenLoadingUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isOpenedCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsLogMessageEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool islockInputSubMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsFoundCustomTimeDilationRegistName_FromNative(const FString& RegistName, bool& isFound, float& CurrentCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    bool isFoucusMouse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFade() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEventFinishWaitMode_AfterCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndVisionSimulatorStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool isEndVisionSimulatorResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndVisionSimulatorEnd() const;
    
    UFUNCTION(BlueprintCallable)
    bool isEndSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndSubMenu(ESubMenuType SubMenuType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndStaffRoll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndPhotoModeUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool isEndKeyword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndGeneralChoice();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndGameOverFromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableOpenTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableOpenPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDrawMiniTipsSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDrawMessageSkipGuide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDrawMessageGuide() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomTimeDilationAccelerate(float& CurrentCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentMessageWithVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentMessageWithChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isChangedIconDeviceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool isCancelKeyword() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCancelGeneralChoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCanceledVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCanceledCode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCameraCutPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBrainTalkFinishedWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBrainField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void initMouseCursor();
    
    UFUNCTION(BlueprintCallable)
    void InitFade();
    
    UFUNCTION(BlueprintCallable)
    void initCreateScarletLogo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName getResultVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString getResultKeyword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName getResultCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReserveShopMenu();
    
    UFUNCTION(BlueprintCallable)
    bool GetOverlapEventInvalidFlag();
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseDispRectangle();
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseDispIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSAtomComponentBase* GetMessageVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetLastChoiceResult(int32& Result);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInputLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSInputDeviceType getIconDeviceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGeneralChoiceResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getFadeAlpha(bool isUnderCaption);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnablePartyMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getDebugWorldmapUnlockFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDebugViewportSize();
    
    UFUNCTION(BlueprintCallable)
    int32 getDebugSaveLoadMenuSetting();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapTraceTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapMaterialTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapIconUpdateAdjust();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapIconTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapIconNpcTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapIconFootTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapIconEnemyTickDisable();
    
    UFUNCTION(BlueprintCallable)
    bool getDebugMinimapCreateMapDisable();
    
    UFUNCTION(BlueprintCallable)
    FString getDebugMinimapAreaSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getDebugKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* getDebugDrawClass() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugDispUserTag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetChoiceResult(int32 MessageIndex, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrainMapCursorSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrainMapCursorCorrectSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrainMapCursorCorrectArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalogStickR(UUIBase* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalogStickL(UUIBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void ForceEndGeneralChoice();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutWhite(bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutFreeColor(FLinearColor Color, bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutDefineColor(EUIFadeColorType Color, bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutBlack(bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeInWhite(bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeInFreeColor(FLinearColor Color, bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeInDefineColor(EUIFadeColorType Color, bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeInBlack(bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(bool isUnderCaption, float second);
    
    UFUNCTION(BlueprintCallable)
    void EndSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void EndStaffRoll();
    
    UFUNCTION(BlueprintCallable)
    void EndPhotoModeOutGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 DrawMessage(const FString& Talker, const FString& Message, int32 windowType, float DrawSecond, bool isEnableSkip, URSAtomComponentBase* Voice, bool isSkipVoiceEnd, bool isWaitMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 DrawChoiceMessage(int32 ChoiceNum, const FString& Choice0, const FString& Choice1, const FString& Choice2, const FString& Choice3, const FString& Choice4, int32 DefaultIndex, int32 CancelIndex, float DrawSecond, bool isEnableCancel, bool isWaitMode);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawInvalidationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugChangeVisible(bool visibleflag);
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_PRINT(const FText& Message, float posX, float posY, FLinearColor Color, FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    bool CloseTutoTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseTutoOperation();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    bool CloseStartSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    bool CloseStartBondsQuest(FName bondsQuestId);
    
    UFUNCTION(BlueprintCallable)
    void CloseScarletLogo();
    
    UFUNCTION(BlueprintCallable)
    bool CloseMinimap(bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMessageGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBrainTalkFromNative();
    
    UFUNCTION(BlueprintCallable)
    int32 CheckSubQuestRewardResult();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSubQuestReward();
    
    UFUNCTION(BlueprintCallable)
    bool CheckInputPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void CheckInput(UUIBase* Widget, EUIInputButton ButtonType, EUIInputType InputType, bool& IsInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckEndMessage(int32 MessageIndex, bool& IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEndChoiceMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckEndAllMessage(bool& IsEnd, bool FlagCheckClose);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStaffRollSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeSoundState(ESoundState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanPlayCutScene_FromNative(const bool IsTipsCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIActionIcon* AddActionIcon();
    
};

