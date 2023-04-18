#pragma once
#include "CoreMinimal.h"
#include "AreaInfoTweakCondition.h"
#include "CompleteUnloadAllLevelsDelegate.h"
#include "ManagerInterface.h"
#include "RSActorSystemBase.h"
#include "RSStreamingSettings.h"
#include "LevelManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ALevelManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompleteUnloadAllLevels OnCompleteUnloadLevelAll;
    
    ALevelManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SyncUnloadStreamLevels();
    
    UFUNCTION(BlueprintCallable)
    int32 StreamingTextureLoadAllBlock();
    
    UFUNCTION(BlueprintCallable)
    int32 StreamingTextureBlockTillAllRequestsFinished(float timeLimit, bool bLogResults);
    
    UFUNCTION(BlueprintCallable)
    void SetStreamingSettings(const FRSStreamingSettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsValidCurrentSimulatorLevelInfosName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStreamingTextureNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetShortAreaName(int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRSStreamingSettings GetCurrentStreamingSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetAreaName(int32 LocationId, int32 areaId, int32 VariationID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetAreaInfoFromNative(FName AreName, UPARAM(Ref) TArray<FName>& outLevenName);
    
    UFUNCTION(BlueprintCallable)
    FName GetAreaBGName(int32 LocationId, int32 areaId, int32 VariationID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CopyCurrentSimulatorLevelInfosName();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTweakConditionFunc(FAreaInfoTweakCondition TweakCondition);
    
    UFUNCTION(BlueprintCallable)
    bool CallAreaSelectVariationFunction(int32 LocationId, int32 areaId, int32 VariationID, int32 PortaflID, bool NoChange, int32& OutLocationID, int32& OutAreaID, int32& OutVariationID);
    
    UFUNCTION(BlueprintCallable)
    bool CallAreaPostLoadFunction(int32 LocationId, int32 areaId, int32 VariationID, bool IsFirstTry, bool& Initialized);
    
    
    // Fix for true pure virtual functions not being implemented
};

