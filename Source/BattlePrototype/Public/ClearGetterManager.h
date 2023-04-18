#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BattleSimulatorResult.h"
#include "ClearGetterCell.h"
#include "ClearGetterClearMissionDelegate.h"
#include "EClearGetterInfoType.h"
#include "EClearGetterReleaseType.h"
#include "EClearGetterType.h"
#include "HCHitResult.h"
#include "ManagerInterface.h"
#include "PlayerInfo.h"
#include "RSSaveGameInterface.h"
#include "ClearGetterManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UClearGetterManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearGetterClearMission ClearMissionDelegate;
    
public:
    UClearGetterManager();
    UFUNCTION(BlueprintCallable)
    void SetIsClearGetterInfo(EClearGetterInfoType Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    bool GetProgressWithBestValue(float& CurrentValue, float& maximumValue, float& bestValue, EClearGetterType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetProgressValue(float& CurrentValue, float& maximumValue, EClearGetterType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearGetterDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClearGetterData(FClearGetterCell& ClearGetterData, EClearGetterType clearGetterType) const;
    
    UFUNCTION(BlueprintCallable)
    void createTitleString(FString& Output, EClearGetterType Type);
    
    UFUNCTION(BlueprintCallable)
    void ClearParameter(bool bExNewGame);
    
    UFUNCTION(BlueprintCallable)
    void CheckUniquePsychicObjectSuccess(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckTotalPlayTime();
    
    UFUNCTION(BlueprintCallable)
    void CheckTotalNexusDriveTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void CheckTotalExp(int32 AddExp);
    
    UFUNCTION(BlueprintCallable)
    void CheckThrowPsychicObject(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckTeamBonds();
    
    UFUNCTION(BlueprintCallable)
    void CheckReviveNpc(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckReleaseMission(EClearGetterReleaseType Type, int32 Param1, FName Param2);
    
    UFUNCTION(BlueprintCallable)
    void CheckQuestClear(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckProtectVision(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckPresentUnique();
    
    UFUNCTION(BlueprintCallable)
    void CheckPresent(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayerParameter(const FPlayerInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayerLevel();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayerDrive(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckPhaseClear();
    
    UFUNCTION(BlueprintCallable)
    void CheckNpcDrive(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckNexusDrive(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckMoney();
    
    UFUNCTION(BlueprintCallable)
    void CheckKarenEpisode(FName KarenEPName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsClearGetterInfo(EClearGetterInfoType Type) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckGetAnyItem(const FName& WeaponId);
    
    UFUNCTION(BlueprintCallable)
    void CheckGameClear();
    
    UFUNCTION(BlueprintCallable)
    void CheckExistItem();
    
    UFUNCTION(BlueprintCallable)
    void CheckEnemyDefeated(const FHCHitResult& HitResult, bool bBrainField);
    
    UFUNCTION(BlueprintCallable)
    void CheckEnableNexusDrive();
    
    UFUNCTION(BlueprintCallable)
    void CheckDLCBondsEpisode(FName BondsEPName);
    
    UFUNCTION(BlueprintCallable)
    void CheckCrashVisionCombo(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckCombinationVisionDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void CheckCombinationVisionCombo(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckClearGetterMission();
    
    UFUNCTION(BlueprintCallable)
    void CheckBrainField(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckBrainCrash(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckBattleSimulatorClear(FName MissionName, const FBattleSimulatorResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void CheckAssaultVision(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void CheckAllClearGetterMission();
    
    UFUNCTION(BlueprintCallable)
    void AddItemUseCount(int32 Num);
    
    
    // Fix for true pure virtual functions not being implemented
};

