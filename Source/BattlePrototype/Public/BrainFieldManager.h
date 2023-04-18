#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "BrainFieldNormalLevelActorListInput.h"
#include "BrainFieldRestoreFlag.h"
#include "BrainFieldSettingsLocation.h"
#include "BrainFieldWaveEnemyFlag.h"
#include "EBrainFieldEndType.h"
#include "EDBrainFieldBattleEndNativeEventDelegate.h"
#include "EEventTriggerCheckType.h"
#include "ManagerInterface.h"
#include "BrainFieldManager.generated.h"

class ARSCharacterBase;
class ULevelStreaming;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ABrainFieldManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTrainEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCollisionMode;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEDBrainFieldBattleEndNativeEvent m_EDBrainFieldBattleEndNativeEvent;
    
public:
    ABrainFieldManager();
    UFUNCTION(BlueprintCallable)
    void VisibleNormalActorsNative(bool IsVisible, int32 ObjectNum, UPARAM(Ref) int32& VisibleSplitIndex, const TArray<AActor*>& ActorList, UPARAM(Ref) TArray<FBrainFieldRestoreFlag>& SettingFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetupEnemyWaveTransformNative(const TArray<ARSCharacterBase*>& Enemies, const TArray<FBrainFieldWaveEnemyFlag>& EnemyFlags, const FTransform& PlayerTransform);
    
    UFUNCTION(BlueprintCallable)
    void SelectJumpBrainFieldTrainEnemy(TArray<AActor*>& TrainList, TArray<AActor*>& NoTrainList, const TArray<AActor*>& TargetEnemyListBattleField, const TArray<AActor*>& TargetEnemyListBattleFieldWave, const TArray<AActor*>& TargetEnemyListNormal, FVector NormalFieldPlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void IsValidEventCommandTypeAtBrainField(EEventTriggerCheckType EventCommandType, bool CheckBrainTalkEvent, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPerformanceSequencer_FromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInvokeBrainField_FromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool InBranField_FromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetUserIsPlayer();
    
    UFUNCTION(BlueprintCallable)
    void GetNormalLevelActorListNative(const FBrainFieldNormalLevelActorListInput& Inputs, TArray<AActor*>& NormalLevelActors, TArray<AActor*>& Characters, TArray<AActor*>& Weapons, TArray<AActor*>& PsychicObjects, TArray<AActor*>& PsychicGrabs, TArray<AActor*>& EffectBackround, TArray<AActor*>& EffectBackroundMother);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocationSettings(const TArray<AActor*>& TrainEnemyList, FBrainFieldSettingsLocation& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyLocationWaveNum(bool LongAway);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnemyLocationWaveFromNo(FTransform& EnemyTransform, int32 LocationNo);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnemyLocationWave(FTransform& EnemyTransform, int32 Index, bool LongAway);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyLocationNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnemyLocation(FTransform& EnemyTransform, int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetBrainFieldActors(ULevelStreaming* Level);
    
    UFUNCTION(BlueprintCallable)
    void DebugCheckEnemyWaveTransformNativeCollision(const FTransform& PlayerTransform, FTransform& EnemyTransform, bool& ValidIndex, bool& UseCollision, int32 Index, bool LongAway);
    
    UFUNCTION(BlueprintCallable)
    void CalcJumpBrainFieldTransformEnemyCustomCollision2(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const FBrainFieldSettingsLocation& LocationSetting, float BrainFieldPlayerHeight, bool UserPlayer, AActor* UserActor);
    
    UFUNCTION(BlueprintCallable)
    void CalcJumpBrainFieldTransformEnemyCustomCollision(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const TArray<FTransform>& NormalFieldTransforms, FVector CustomCollisionPlayerLocation, float BrainFieldPlayerHeight);
    
    UFUNCTION(BlueprintCallable)
    void CalcJumpBrainFieldTransformEnemy(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const TArray<FTransform>& NormalFieldTransforms, const TArray<bool>& IsWaves, FVector NormalFieldPlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void Broadcast_EDBrainFieldBattleEndNativeEvent(EBrainFieldEndType EndType);
    
    
    // Fix for true pure virtual functions not being implemented
};

