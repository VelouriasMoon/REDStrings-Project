#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EConvertTrial2SaveDataAllResult.h"
#include "ERSSaveGameSaveType.h"
#include "ERedSaveExistsResult.h"
#include "SaveDataParameter.h"
#include "SaveDataSlotBuffer.h"
#include "SaveLoadScreenParam.h"
#include "RSSaveGame.generated.h"

class URSGameInstance;
class URSSaveGameInternal;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSaveGame : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* m_gameInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSSaveGameSaveType m_saveType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSaveDataParameter> m_saveParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_MasterVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataSlotBuffer> m_slotBufferList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataSlotBuffer m_systemBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_SaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERedSaveExistsResult m_SaveExistsResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConvertTrial2SaveDataAllResult m_ConvertTrial2SaveDataAllResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGameInternal* m_pAsyncAutoSaveRSSaveGameInternal;
    
public:
    URSSaveGame();
    UFUNCTION(BlueprintCallable)
    bool TrialBonusRewardSaveDataCheck();
    
    UFUNCTION(BlueprintCallable)
    bool Trial2AchievementSaveDataCheck();
    
    UFUNCTION(BlueprintCallable)
    bool SystemSave();
    
    UFUNCTION(BlueprintCallable)
    bool SystemLoad();
    
    UFUNCTION(BlueprintCallable)
    bool SystemDataDelete(int32 slotNo, const bool isFileDelete);
    
    UFUNCTION(BlueprintCallable)
    bool SaveRetryData();
    
    UFUNCTION(BlueprintCallable)
    bool SaveNormalOnly(int32 dataNo);
    
    UFUNCTION(BlueprintCallable)
    bool Save(int32 dataNo);
    
    UFUNCTION(BlueprintCallable)
    bool PreLoadNormalOnly();
    
    UFUNCTION(BlueprintCallable)
    bool PreLoad();
    
    UFUNCTION(BlueprintCallable)
    bool LoadTrial2();
    
    UFUNCTION(BlueprintCallable)
    bool LoadTrial();
    
    UFUNCTION(BlueprintCallable)
    bool LoadRetryData();
    
    UFUNCTION(BlueprintCallable)
    bool LoadNormalOnly(int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    bool Load(int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistSaveData(ERSSaveGameSaveType Type);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(URSGameInstance* gameInst, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveLoadScreenParam(FSaveLoadScreenParam& slotParam, int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    ERedSaveExistsResult GetSaveExistsResult();
    
    UFUNCTION(BlueprintCallable)
    EConvertTrial2SaveDataAllResult GetConvertTrial2SaveDataAllResult();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteData(ERSSaveGameSaveType Type, const FString& Filename, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Delete(int32 slotNo, const bool isFileDelete);
    
    UFUNCTION(BlueprintCallable)
    bool DebugTimeSave();
    
    UFUNCTION(BlueprintCallable)
    bool DebugSave(int32 dataNo);
    
    UFUNCTION(BlueprintCallable)
    bool DebugLoad_DirectName(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool DebugLoad(int32 dataNo);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAriseCollaboration();
    
    UFUNCTION(BlueprintCallable)
    bool AutoSave();
    
    UFUNCTION(BlueprintCallable)
    bool AutoPreLoad();
    
    UFUNCTION(BlueprintCallable)
    bool AutoLoad();
    
    UFUNCTION(BlueprintCallable)
    bool AutoDelete(int32 slotNo, const bool isFileDelete);
    
    UFUNCTION(BlueprintCallable)
    bool AsyncAutoSave();
    
};

