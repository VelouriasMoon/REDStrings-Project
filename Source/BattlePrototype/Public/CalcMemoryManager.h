#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "CalcMode.h"
#include "CalcProcess.h"
#include "CalcTarget.h"
#include "ManagerInterface.h"
#include "CalcMemoryManager.generated.h"

class UAnyObjectCreator;
class UAssetMemoryData;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCalcMemoryManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CalcMode CurCalcMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartCalcMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAssetMemoryData*> AssetInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnyObjectCreator* CreateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAssetMemoryData*> LevelInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedCurrentAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CalcProcess MyProcess;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PreUsedPhysical;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PreUsedVirtual;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PostUsedPhysical;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PostUsedVirtual;
    
public:
    UCalcMemoryManager();
    UFUNCTION(BlueprintCallable)
    void SwitchCalcTargetPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SwitchCalcTargetObject();
    
    UFUNCTION(BlueprintCallable)
    void SwitchCalcTargetNPC();
    
    UFUNCTION(BlueprintCallable)
    void SwitchCalcTargetLevel();
    
    UFUNCTION(BlueprintCallable)
    void SwitchCalcTargetEnemy();
    
    UFUNCTION(BlueprintCallable)
    CalcMode SwitchCalcMode(bool isLevel);
    
    UFUNCTION(BlueprintCallable)
    void StartCurrentAsset();
    
    UFUNCTION(BlueprintCallable)
    void StartCalcMemory();
    
    UFUNCTION(BlueprintCallable)
    void StartCalcLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetCancel();
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevPageAsset();
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevAsset(int32 subValue);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextPageAsset();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextAsset(int32 addValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetStartCalcMemory();
    
    UFUNCTION(BlueprintCallable)
    void ResetCalcMemory();
    
    UFUNCTION(BlueprintCallable)
    void RefleshSelectAsset();
    
    UFUNCTION(BlueprintCallable)
    void ReadyNextAsset();
    
    UFUNCTION(BlueprintCallable)
    void PrintLevelInfo();
    
    UFUNCTION(BlueprintCallable)
    void PreMeasureLevel();
    
    UFUNCTION(BlueprintCallable)
    void PostMeasureLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartCalcMemory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyCurrentAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedCurrentAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalcTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalcTargetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalcTargetNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalcTargetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalcTargetEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementLevel();
    
    UFUNCTION(BlueprintCallable)
    CalcTarget IncrementCalcTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStatusText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelStatusText() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIndividualStatusText() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetCurrentLevelName();
    
    UFUNCTION(BlueprintCallable)
    CalcMode GetCalcMode();
    
    UFUNCTION(BlueprintCallable)
    CalcTarget DecrementCalcTarget();
    
    UFUNCTION(BlueprintCallable)
    void CancelLevel();
    
    UFUNCTION(BlueprintCallable)
    void CalcMemory();
    
    
    // Fix for true pure virtual functions not being implemented
};

