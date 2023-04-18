#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETitleSaveCheck.h"
#include "EUITitleSequencer.h"
#include "ManagerInterface.h"
#include "OnTitleEventSaveLoadErrorDelegate.h"
#include "OnTitleEventSoundEndDelegate.h"
#include "OnTitleEventSoundStartDelegate.h"
#include "RSTitleManager.generated.h"

class ARSHUDBase;
class ARSLevelSequenceActor;
class ASkeletalMeshActor;
class UDatabaseManager;
class UMultiLanguageTextData;
class UObject;
class URSGameInstance;
class URSSaveGame;
class URSTitleAnimInstance;
class USaveLoadScreenParamManager;
class UUserParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSTitleManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTitleEventSaveLoadError m_OnTitleEventSaveLoadError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTitleEventSoundEnd m_OnTitleEventSoundEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTitleEventSoundStart m_OnTitleEventSoundStart;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_paFirstFlowFonts[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMultiLanguageTextData* m_pMultiLanguageTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserParamManager* UserParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pRSHudBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseManager* DatabaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* m_pGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pSaveSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSaveLoadParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pAutoSaveLoadParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSaveLoadSystemParamManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSLevelSequenceActor* TitleSequencer;
    
public:
    ARSTitleManager();
    UFUNCTION(BlueprintCallable)
    void TitleToLogojump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TitleLSResetBindings();
    
    UFUNCTION(BlueprintCallable)
    bool SystemSaveDataErrorCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetYuitoEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SettingMovie();
    
    UFUNCTION(BlueprintCallable)
    void SetSaveLoadScreenParam(USaveLoadScreenParamManager* SaveLoad, USaveLoadScreenParamManager* AutoSave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlaySequencerType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMaterialEffectKill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetKasaneEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEffectKill(FName chName);
    
    UFUNCTION(BlueprintCallable)
    bool SaveDataErrorCheck(ETitleSaveCheck CheckType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySequencerType(EUITitleSequencer Type, const FText& bindPlayName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySequencer(const FText& bindPlayName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Pause(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isValidUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isTitleBackStatic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isStreamingLevelLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isStopMovie();
    
    UFUNCTION(BlueprintCallable)
    bool isSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isReadyMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isPlaySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isPlayMovie();
    
    UFUNCTION(BlueprintCallable)
    bool isGameClearData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFirstFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEnding();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndGeneralChoice();
    
    UFUNCTION(BlueprintCallable)
    bool isClearEXNewRelease();
    
    UFUNCTION(BlueprintCallable)
    bool isClearData();
    
    UFUNCTION(BlueprintCallable)
    bool isClearChara(int32 slotNo, bool& yuito, bool& kasane);
    
    UFUNCTION(BlueprintCallable)
    bool isChapterZeroCrear();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSaveSlotSetting();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAutoSaveSlotSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ASkeletalMeshActor* GetYuitoMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSTitleAnimInstance* GetYuitoAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ASkeletalMeshActor* GetKasaneMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSTitleAnimInstance* GetKasaneAnimInstance();
    
    
    // Fix for true pure virtual functions not being implemented
};

