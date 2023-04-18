#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFilterCallbackType.h"
#include "EPlayingEventType.h"
#include "RSCvManager.generated.h"

class ARSSoundManager;
class URSAtomComponentBase;
class USceneComponent;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundCueSheetManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSCvManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSSoundManager* m_pSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundCueSheetManager* m_pCueSheetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayingEventType m_playingEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playingChapterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_lastChapterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playingBondsEpisodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_lastBondsEpisodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_standbyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_lastStandbyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_voiceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isTitle;
    
public:
    URSCvManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnLoadCueSheetFromDtRef(const FString& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnLoadCueSheetAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnLoadCueSheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMVarPlayingEventType();
    
public:
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* PlayVoice(USoundAtomCue* Sound, bool isAttache, bool isAutoActivate, USceneComponent* AttachToComponent, FName AttachPointName, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeVoiceLanguage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeEventStat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadSenarioCueSheet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadCueSheetFromDtRef(const FString& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadCueSheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadCmnCueSheets();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* GetFitLanguageCueSheetFromCueSheetManager(USoundAtomCue* Sound);
    
    UFUNCTION(BlueprintCallable)
    FString GetCueSheetNameFromCueSheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    FString GetCueSheetName(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetChapterStringFromProgressId(int32 ProgressId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Finalize();
    
};

