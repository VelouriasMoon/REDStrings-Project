#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EDebugGameActivityDisplayFlag.h"
#include "EGameActivityDisableFlag.h"
#include "EGameActivityOutcome.h"
#include "EPlayerID.h"
#include "ManagerInterface.h"
#include "ActivityManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UActivityManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* progressIDTable_Yuito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* progressIDTable_Kasane;
    
public:
    UActivityManager();
    UFUNCTION(BlueprintCallable)
    void WaitUntilComplete();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMainEpisodeActivity(EPlayerID playerId, int32 beforeProgressID, int32 nextProgressID);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void StartNewGame(EPlayerID playerId, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    void StartMainEpisodeActivity(EPlayerID playerId, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    void StartAdditionalEpisodeActivity(FName bondsID);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFlag(EGameActivityDisableFlag Type, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawFlag(bool IsDraw, EDebugGameActivityDisplayFlag Type);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMainEpisodeActivity(EPlayerID playerId, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    void ResumeBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAdditionalEpisodeActivity(FName bondsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExsistDebugDrawFlag(EDebugGameActivityDisplayFlag Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistBondsEpisodeActivity(EPlayerID playerId, int32 ProgressId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistAdditionalEpisodeActivity(FName bondsID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableFlag(EGameActivityDisableFlag Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetMainCharacter(int32 selectedScenario) const;
    
    UFUNCTION(BlueprintCallable)
    void EndMainEpisodeActivity(EPlayerID playerId, int32 ProgressId, EGameActivityOutcome Outcome);
    
    UFUNCTION(BlueprintCallable)
    void EndBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId, EGameActivityOutcome Outcome);
    
    UFUNCTION(BlueprintCallable)
    void EndAdditionalEpisodeActivity(FName bondsID, EGameActivityOutcome Outcome);
    
    
    // Fix for true pure virtual functions not being implemented
};

