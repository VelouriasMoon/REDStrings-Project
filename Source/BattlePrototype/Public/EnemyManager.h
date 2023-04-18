#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ECharacterIgnoreDamage.h"
#include "EnemyListInfo.h"
#include "EnemyRepopExtendInfo.h"
#include "EnemyRepopInfo.h"
#include "EnemyRepopLevelInfo.h"
#include "ManagerInterface.h"
#include "OnEnemyListUpdateDelegate.h"
#include "EnemyManager.generated.h"

class ARSCharacterBase;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AEnemyManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mTickEnableTargetDroneActor;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> mTickEnableTargetDroneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsStealthSeeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SelectParamDistList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectParamDistPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SelectParamAngleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectParamAnglePointList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyListUpdate OnEnemyListNative;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> enemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEnemyListInfo> EnemyListByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnemyBossList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEnemyListInfo> EnemyBossListByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> BrainCrashCandidateList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 _enemyIgnoreDamageFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictSelfDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestrictSelfDeadTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEnemyRepopLevelInfo> EnemyRepopLevelInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> mUniqueBrainCrashPlayedList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mUpdateEnemyCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mEnemyCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> mMovingList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyMovingCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> BrainCrashTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> CurrentTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecBrainCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastEnableBc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplayCursor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> mNeedCheckCutList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCanPlayCutScene;
    
public:
    AEnemyManager();
private:
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* UsableBrainCrashLockTarget_Native(ARSCharacterBase* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateRestrictSelfDead(float _DeltaSec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOutRangeFade(float OutRange);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemyTickEnable(AActor* Enemy, AActor* Player, float Range, float Height, float OutRange);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCheckCut();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBrainCrashTarget_Native();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterNeedCheckCutActor(ARSCharacterBase* _unregisterActor);
    
    UFUNCTION(BlueprintCallable)
    void SubMovingList(ARSCharacterBase* subCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SubEnemyList(ARSCharacterBase* subEnemy);
    
    UFUNCTION(BlueprintCallable)
    void SubEnemyBossList(AActor* subEnemy);
    
    UFUNCTION(BlueprintCallable)
    void SubBrainCrashCandidate(ARSCharacterBase* subChara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEnemyAll_FromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimulatorCancelMission();
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnableTargetDroneMesh(UMeshComponent* DroneMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnableTargetDroneActor(AActor* DroneActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnWaitDelay(ARSCharacterBase* chara, float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictSelfDead(bool _RestrictSelfDead, float _RestrictTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetRepopExtendInList_FromNative(UPARAM(Ref) FEnemyRepopExtendInfo& EnemyRepopExtendInfo, ARSCharacterBase* RepopTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetRepopExtendInfoToList(UPARAM(Ref) FEnemyRepopExtendInfo& EnemyRepopExtendInfo, bool IsIgnoreRestrictAttackOther, bool IsIgnoreAllowance, bool IsNoCheckCaptureArea, bool IsChangeSearchAngle, float ChangeSearchAngle, bool IsAlwayChangeSearchAngle, bool IsChangeSearchRange, float ChangeSearchRange, bool IsAlwayChangeSearchRange, bool IsChangeSensingAngle, float ChangeSensingAngle, bool IsAlwaySensingAngle, bool IsChangeCaptureArea, float ChangeCaptureArea, bool IsAlwayCaptureArea);
    
    UFUNCTION(BlueprintCallable)
    void SetRepopExtendInfoToActor(FEnemyRepopExtendInfo EnemyRepopExtendInfo, UPARAM(Ref) bool& IsIgnoreRestrictAttackOther, UPARAM(Ref) bool& IsIgnoreAllowance, UPARAM(Ref) bool& IsNoCheckCaptureArea, UPARAM(Ref) bool& IsChangeSearchAngle, UPARAM(Ref) float& ChangeSearchAngle, UPARAM(Ref) bool& IsAlwayChangeSearchAngle, UPARAM(Ref) bool& IsChangeSearchRange, UPARAM(Ref) float& ChangeSearchRange, UPARAM(Ref) bool& IsAlwayChangeSearchRange, UPARAM(Ref) bool& IsChangeSensingAngle, UPARAM(Ref) float& ChangeSensingAngle, UPARAM(Ref) bool& IsAlwaySensingAngle, UPARAM(Ref) bool& IsChangeCaptureArea, UPARAM(Ref) float& ChangeCaptureArea, UPARAM(Ref) bool& IsAlwayCaptureArea);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMovingCount(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyIgnoreDamageFlag(int32 Flags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBrainCrashHUDTarget_Window(ARSCharacterBase* TargetChara, bool EnablePlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* SelectBrainCrashTarget(const FVector& chkPos, const FVector& chkDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> SelectBrainCrashMultiTarget(const FVector& chkPos, const FVector& chkDir) const;
    
private:
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* SelectBrainCrashCharacter_Native();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetUpdateEnemyNative();
    
    UFUNCTION(BlueprintCallable)
    void ResetUniqueBrainCrashPlayedList();
    
    UFUNCTION(BlueprintCallable)
    bool RepopUpdateNative(FName NowLocationName, bool IsInScene, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RepopSpawn_FromNative(FEnemyRepopInfo EnemyRepopInfo, int32 Group, int32 SubGroup);
    
    UFUNCTION(BlueprintCallable)
    bool RepopCheckInsideCameraNative(FVector MyPos);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyRepopLevelInfoList(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNeedCheckCutActor(ARSCharacterBase* _registerActor);
    
    UFUNCTION(BlueprintCallable)
    bool PreUpdateEnemyTickEnable(AActor* Enemy, AActor* Player, float OutRange);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerDead();
    
    UFUNCTION(BlueprintCallable)
    bool MakeUniqueBrainCrashPlayedList(const TMap<FName, bool>& srcList);
    
    UFUNCTION(BlueprintCallable)
    bool MakeEnemyRepopLevelInfoList(TMap<FName, FEnemyRepopLevelInfo> _srcList);
    
    UFUNCTION(BlueprintCallable)
    bool IsUniqueBrainCrashPlayed(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsStealthSeeFlagNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestrictSelfDead() const;
    
    UFUNCTION(BlueprintCallable)
    int32 IsEntryBrainCrashCandidate(ARSCharacterBase* findChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyIgnoreDamage(ECharacterIgnoreDamage CheckFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBattleCourtMortNative();
    
    UFUNCTION(BlueprintCallable)
    void IncrementUpdateEnemyNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, bool> GetUniqueBrainCrashPlayedList();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTickEnableTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTickEnableTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FEnemyRepopLevelInfo> GetEnemyRepopLevelInfoList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyNumByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyNum() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetEnemyListRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetEnemyListByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> GetEnemyList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyIgnoreDamageFlag() const;
    
    UFUNCTION(BlueprintCallable)
    UClass* GetEnemyClass(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyBossNumByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetEnemyBossListByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetEnemyBossList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCanPlayCutSceneFromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBrainCrashCandidateNum() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetBrainCrashCandidateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActorLevelName(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorLevelAreaID(const AActor* Actor, int32& LocationId, int32& areaId);
    
    UFUNCTION(BlueprintCallable)
    bool FindEnemyRepopLevelInfoList(FName Name, FEnemyRepopLevelInfo& EnemyRepopLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    void EntryRepopNative(float RepopTimeBase, float Range, float Probability, const FString& ClassBpPath, FVector InitPos, float MoveArea, FName LevelName, int32 Group, int32 SubGroup, FName UniqueId, FName Level, int32 DropId, ARSCharacterBase* RepopTarget);
    
    UFUNCTION(BlueprintCallable)
    bool EnableUniqueBrainCrashPlayedList(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyIgnoreDamageAll();
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyIgnoreDamage(ECharacterIgnoreDamage setFlag);
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyIgnoreDamageAll();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyIgnoreDamage(ECharacterIgnoreDamage setFlag);
    
    UFUNCTION(BlueprintCallable)
    void DebugLog(const FString& logString);
    
    UFUNCTION(BlueprintCallable)
    void ClearEnemyRepopLevelInfoList();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRepopCharaInListNative(FName CharaUniqueId, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    bool CanUpdateEnemyNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayCutSceneEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddMovingList(const ARSCharacterBase* newCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcRelationScore(const FVector& cameraPos, const FVector& cameraDir, const FVector& checkPos, float possibleBrainCrashRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcBrainCrashScore(float& outDist, float& outAngle, const ARSCharacterBase* chkChara, const FVector& chkPos, const FVector& chkDir, float longestDist) const;
    
    UFUNCTION(BlueprintCallable)
    void AllEnemyTickStop();
    
    UFUNCTION(BlueprintCallable)
    void AddMovingList(ARSCharacterBase* AddCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyRepopLevelInfoList(FName Name, FEnemyRepopLevelInfo EnemyRepopLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyList(ARSCharacterBase* addEnemy);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyBossList(AActor* addEnemy);
    
    UFUNCTION(BlueprintCallable)
    void AddBrainCrashCandidate(ARSCharacterBase* addChara);
    
    
    // Fix for true pure virtual functions not being implemented
};

