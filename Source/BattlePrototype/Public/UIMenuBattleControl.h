#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "EGameOverResult.h"
#include "EHelpTutorial.h"
#include "EUI_SE.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIBrainTargetInfo.h"
#include "UIEnemyInfo.h"
#include "UIPkObjectTimerInfo.h"
#include "UIMenuBattleControl.generated.h"

class ARSCharacterBase;
class UOverlay;
class UUIBossName;
class UUIBrainCrashGauge;
class UUIBrainGaugeEN;
class UUIDiscover;
class UUIGameOver;
class UUIHealthControl;
class UUILog;
class UUINexusDrive;
class UUINumberDamage;
class UUIPkObjectTimer;
class UUITarget;
class UUIVitalityEN01;
class UUIVitalityEN02;
class UUIVitalityPL01;
class UUIVitalityPL02;
class UUIVitalityPL03;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMenuBattleControl : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUINumberDamage> ClassNumberDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGameOver* UIGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBossName* UIBossName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUILog* UILog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITarget* UICursorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityPL01* UIVitalityPL01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityPL02* UIVitalityPL02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityPL02* uiVitalityPL02Flame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityPL03* UIVitalityPL03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityPL03* uiVitalityPL03Flame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityEN01* UIVitalityEN01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVitalityEN01* uiVitalityEN01Flame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBrainGaugeEN* UIBrainGaugeEN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBrainGaugeEN* uiBrainGaugeENFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIVitalityEN02*> UIEnemyVitalityWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUINumberDamage*> DamageWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIDiscover*> UIIDiscoverList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIPkObjectTimer*> UIPkObjectTimerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagPlayUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagCloseDirect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawHpGaugeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawHpGaugeSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawPsychicGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawBrainCrashGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawBrainCrashGaugeEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawItemMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawSasMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawMiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawDroneGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawTeamBondLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawMiniTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawBrainCrashBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawBrainCrashBarBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawHpGaugeEnemyBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawShortcutGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawBrainTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawOtherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawTutoOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawAreaHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawVisionSimulatorTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagDrawNexusDriveNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIBrainTargetInfo> CursorBrainTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorBrainTargetOffset2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEnemyInfo> enemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyHpWidgetVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* CursorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BrainGaugeENVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBrainCrashGauge* UIBrainCrashGaugeBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* BackupBrainCrashTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIPkObjectTimerInfo> PkObjectTimerWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINexusDrive* uiNexusDrivePL02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUINexusDrive* uiNexusDrivePL03;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LogMessageList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_widgetsMaxMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_widgetsMaxMovePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_widgetsMaxScaleingMaxMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_widgetsMaxScaleingPerFrame;
    
public:
    UUIMenuBattleControl();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(float fDeltaSecond);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePkObjectTimer(ARSCharacterBase* Target, float MaxSecond, float CurrentSecond);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLogMessage(float DeltaSecond);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLockTarget();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHpWidgetInformation(ARSCharacterBase* Actor, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHpVisible(int32 Index, ARSCharacterBase* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateDrawWidgetMiniMap();
    
    UFUNCTION(BlueprintCallable)
    void StopPkObjectTimer(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void StartPkObjectTimer(ARSCharacterBase* Target, float MaxSecond, float CurrentSecond, bool OpenDirect);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartNexusDrive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartMinimapBrainField();
    
    UFUNCTION(BlueprintCallable)
    void StartGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetVisionSimulatorTimerDraw(bool IsDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetVisionSimulatorTimerColor(int32 ColorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleIntercept(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetUUIVitalityEN02Visible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupPlayerHpGauge();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLogWaitTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetLogMessageSE(const FString& LogMessage, EUI_SE Se, const float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLogMessage(const FString& LogMessage, const float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLogDrawTime(float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIcon(ARSCharacterBase* Character, UUIHealthControl* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnemyHpWidgetVisible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnemyDamage(ARSCharacterBase* Target, int32 CurrentHp, int32 BaseHp, bool IsAlways, float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDamage3D(int32 Damage, FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, ARSCharacterBase* crushTarget, int32 crushBonus, const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage2D(int32 Damage, FVector2D position2D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, ARSCharacterBase* crushTarget, int32 crushBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCrushBonus(ARSCharacterBase* Target, int32 bonus);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashTarget(ARSCharacterBase* pTarget, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    int32 SetBrainCrashEnable(ARSCharacterBase* pTarget, bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SasSetChangePageReady(bool ReadyFlagL, bool ReadyFlagR);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveDiscoverIndexList(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCrushBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayDecideAnimeBrainTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayDamageEffect(bool isCritical);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMinimap(bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenBrainTuto();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenAllActivePkObjectTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenActiveAllBrainTargetCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MiniMapModelDelete();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsUsingBrainField() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool isPlayBrainTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLogMessageEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFlagPlayUINative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndGameOver();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitLogMessage();
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UUILog* NewUILog, UUIVitalityPL01* NewUIVitalityPL01, UUIVitalityPL02* NewUIVitalityPL02, UUIVitalityPL02* NewUiVitalityPL02Flame, UUIVitalityPL03* NewUIVitalityPL03, UUIVitalityPL03* NewUiVitalityPL03Flame, UUIVitalityEN01* NewUIVitalityEN01, UUIVitalityEN01* NewUiVitalityEN01Flame, UUIBrainGaugeEN* NewUIBrainGaugeEN, UUIBrainGaugeEN* NewUiBrainGaugeENFrame, UOverlay* overlayWidgets, UUINexusDrive* NewUiNexusDrivePL02, UUINexusDrive* NewUiNexusDrivePL03);
    
    UFUNCTION(BlueprintCallable)
    void InitDamage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLogWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLogDrawTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHpTargetCharacter(int32 Index, ARSCharacterBase*& Instance, bool& IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPPercent(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHp(ARSCharacterBase* Character, float& Max, float& current);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOverResult GetGameOverResult();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFreeHpWidget(UUIVitalityEN02*& Widget);
    
    UFUNCTION(BlueprintCallable)
    UUINumberDamage* GetFreeDamageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEnemyLevel(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EHelpTutorial GetCurrentMiniTipsID();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetBrainTargetCursor(ARSCharacterBase* pTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetBackupBossActor() const;
    
    UFUNCTION(BlueprintCallable)
    void EnemyHpWidgetDisappearInstantly(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CreateIndexList(UUIDiscover* UIDiscover);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CreateDiscoverIndexList(UUIDiscover* UIDiscover);
    
    UFUNCTION(BlueprintCallable)
    void CloseTargetCursor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMiniTips(EHelpTutorial ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMinimap(bool Force);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseAllPkObjectTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseAllDamageWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseActiveAllBrainTargetCursor(ARSCharacterBase* pExcludeTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeTown(bool isTown, bool isAjito);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangePlayUI(bool isPlay);
    
    UFUNCTION(BlueprintCallable)
    void BrainGaugeENStartField();
    
    UFUNCTION(BlueprintCallable)
    void BrainGaugeENSetVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void BrainGaugeENSetPercent(float percent, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BrainGaugeENSetGaugeMax(bool IsFull);
    
    UFUNCTION(BlueprintCallable)
    void BrainGaugeENEndField();
    
};

