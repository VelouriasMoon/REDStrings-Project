#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EPlayerID.h"
#include "CrashVisionComponent.generated.h"

class ARSCharacterBase;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCrashVisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_CRASH_VISION_COUNT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PROBABILIRY_NOT_DRIVE_BATTLE_MEMBER_LOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CrashVisionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRASH_VISION_RANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CRASH_DAMAGE_RATE_LIST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CrashVisionDataTable_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRASH_VISION_RANGE_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CRASH_DAMAGE_RATE_LIST_VS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> ExecCrashVisionPlayerID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARSCharacterBase>> CrashTargetList;
    
public:
    UCrashVisionComponent();
    UFUNCTION(BlueprintCallable)
    void SetExecuteCrashVisionPlayer(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    EPlayerID RequestCrashVision(ARSCharacterBase* TargetCharacter, bool bFirstCrash);
    
    UFUNCTION(BlueprintCallable)
    bool IsExecCrashVisionPlayerID(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableShockWave();
    
    UFUNCTION(BlueprintCallable)
    FVector GetShockWaveLocation();
    
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* GetNextCrashVisionTarget(TArray<ARSCharacterBase*> IgnoreCharacterList);
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetCrashTargetList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishCrashVision();
    
    UFUNCTION(BlueprintCallable)
    void DebugVisionSimulatorMode(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetUsePlayerLocation(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetProbabilityNotDriveBattleMember(int32 Probability);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetIgnoreSAS(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetIgnoreCrashAccumulate(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetForceLotPlayerID(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetCrashVisionRange(float Range);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnableCrashVision(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugCrashVisionDamageOffset(float Offset);
    
};

