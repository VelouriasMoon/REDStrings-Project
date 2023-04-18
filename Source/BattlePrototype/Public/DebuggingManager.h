#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "EDebuggingPage.h"
#include "EPlayerID.h"
#include "ManagerInterface.h"
#include "OnReadyDebuggingDelegate.h"
#include "DebuggingManager.generated.h"

class AAriseCollaboParamDebugGroup;
class ADebuggingItemBase;
class ADebuggingItemClearGetterGroup;
class ADebuggingItemFlagManagerGroup;
class ADebuggingItemInGameAchievementGroup;
class ADebuggingItemStringArray;
class ADebuggingManager;
class ATrialParamDebugGroup;
class UDebuggingStartupObject;
class UDebuggingWidget;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyDebugging OnReadyDebugging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebuggingPage Page;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DebuggingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDebuggingWidget*> DebuggingTreeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebuggingStartupObject* StartupObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebuggingItemStringArray* m_pDebugTimeSaveDataComboBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDriveDrawCrashBonusAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAutoInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAutoEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPrintSequencerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugAutoInputDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPlayerOneBrainCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTownPeopleCrowdNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTownPeopleCrowdNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTownPeopleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTownPeopleNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInGameAchievementGroup> AchievementGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemFlagManagerGroup> CharaLibFlagGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemFlagManagerGroup> EnemyLibFlagGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemClearGetterGroup> ClearGetterGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATrialParamDebugGroup> TrialParamGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAriseCollaboParamDebugGroup> AriseCollaboParamGroup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyInstantBadCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyOneKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyOneBreakArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyBrainCrashAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyForceWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyNoReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyDrawEyeRay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnableEnemyHpRateDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugEnemyHPRateDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugEnemyNoAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyAllowanceIgnoreOutOfScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyAllowanceIgnoreRestrictAttackOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyRepopNoTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyRepopNoRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugStopUpdateEnemyTickEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugForceEnableUpdateEnemyTickEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyDispRepopSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyDispTickControlInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugEnemyDispSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugEnemyDispGroupInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyDispNavMeshFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugEnemyCrashAccumulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnemyCrashAttenuationOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisablePlanarReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDamageCalcLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCrushDamageCalcLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugHasBrokenAllBattlefield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayLogEventAssetLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DebugLoggerString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DebugLoggerTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugNpcNoBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID DebugControlNonePlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawNpcInputStick;
    
    ADebuggingManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromItem(EDebuggingPage InPage, ADebuggingItemBase* InItem);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromHashName(EDebuggingPage InPage, const FText& InHashName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageUI(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageSystem(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageSound(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageScene(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageRender(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPagePlayer(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageParty(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageEvent(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageEnemy(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageBattle(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageAjito(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StartWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetPage(EDebuggingPage InPage);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugPhotomodeOutline(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNpcNoBattle(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugHasBrokenAllBattlefield(bool AllBroken);
    
    UFUNCTION(BlueprintCallable)
    void SetDebuggingSelectStrings(TArray<FName> AreaSelectLabels, TArray<FString> AreaSelectStrings, TArray<FName> ScenarioSelectLabels, TArray<FString> ScenerioSelectStrings, TArray<FName> SevedataSelectLabels, TArray<FString> SavedataSelectStrings);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawNpcInputStick(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDispRevisions(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDisablePlanarReflection(bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugControlNonePlayerID(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void SetAllSimulatorMissionRelease(bool bRelease);
    
    UFUNCTION(BlueprintCallable)
    ADebuggingItemBase* SearchItem(EDebuggingPage InPage, const FText& InHashName, bool InIgnoreCase);
    
    UFUNCTION(BlueprintCallable)
    void SaveDebuggingParameter();
    
    UFUNCTION(BlueprintCallable)
    void ResetDebuggingParameter();
    
    UFUNCTION(BlueprintCallable)
    void RegisterChild(EDebuggingPage InPage, ADebuggingItemBase* InItem);
    
    UFUNCTION(BlueprintCallable)
    void LoadDebuggingParameter(bool IsBroadcast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugPhotomodeOutline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugPauseInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugLotteryParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispPresentBonsai11349() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDisplayLogEventAssetLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugStopUpdateEnemyTickEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugNpcNoBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugHasBrokenAllBattlefield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugForceEnableUpdateEnemyTickEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugEnemyWince() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyRepopNoTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyRepopNoRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyOneKill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyOneBreakArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyNoReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyNoAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugEnemyKnockBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyInstantBadCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyForceWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyDrawEyeRay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyDispTickControlInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyDispSettingInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyDispRepopSettingData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyDispGroupInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyBrainCrashAccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugEnemyBlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyAllowanceIgnoreRestrictAttackOther() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnemyAllowanceIgnoreOutOfScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugEnableEnemyHpRateDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugDamageCalcLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugCrushDamageCalcLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRevisionString();
    
    UFUNCTION(BlueprintCallable)
    FString GetDispPresentStringsBonsai11349();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugLotteryParamIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebuggingText(const FString& Key, bool isReferenceJp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ADebuggingManager* GetDebuggingManagerInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDebugEnemyHpRateDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugDrawNpcInputStick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetDebugControlNonePlayerID() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDamageCalcLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllSimulatorMissionRelease();
    
    UFUNCTION(BlueprintCallable)
    void FinishWindow();
    
    UFUNCTION(BlueprintCallable)
    void ExportDebuggingItemText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageRender();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPagePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageAjito();
    
    UFUNCTION(BlueprintCallable)
    void Dump();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLogger(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void DebugUpdateDisablePlanarReflection();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnemyCrashAttenuationOff(bool DebugEnemyCrashAttenuationOff);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnemyCrashAccumulation(int32 DebugCrashAccumulation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 DebugSelectPrevCreateEnemy(int32 subValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 DebugSelectNextCreateEnemy(int32 addValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsDispRevisions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsDisablePlanarReflection() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugInputStepFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugInputPause();
    
public:
    UFUNCTION(BlueprintCallable)
    bool DebugGetEnemyCrashAttenuationOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DebugGetEnemyCrashAccumulation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName DebugGetCreateEnemyName() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugEnemyDispNavMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DebugCreateEnemy(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageRender();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPagePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageAjito();
    
    UFUNCTION(BlueprintCallable)
    void AddDebugLogger(const FString& String, float DrawSeconds);
    
    
    // Fix for true pure virtual functions not being implemented
};

