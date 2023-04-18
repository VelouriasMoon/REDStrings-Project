#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "AmieInterlockingCheckAnswer.h"
#include "AnimeInterlockingAnswer.h"
#include "AnimeInterlockingURL.h"
#include "CosmosCheckAnswerDelegateDelegate.h"
#include "CosmosGetPlayableQuestsDelgateDelegate.h"
#include "CosmosGetQuestAnswersDelegateDelegate.h"
#include "CosmosGetTrackingNumDelegateDelegate.h"
#include "CosmosGetTrackingNumResponse.h"
#include "CosmosHugeTssReadListParam.h"
#include "CosmosHugeTssReadListResponse.h"
#include "CosmosRankingGetByRangeParam.h"
#include "CosmosRankingGetByRangeResponse.h"
#include "CosmosRankingGetMasterResponse.h"
#include "CosmosRankingSetScoreParam.h"
#include "CosmosRankingSetScoreResponse.h"
#include "CosmosRankingUserData.h"
#include "CosmosResultParam.h"
#include "CosmosSavedataDeleteParam.h"
#include "CosmosSavedataDeleteResponse.h"
#include "CosmosSavedataDownloadParam.h"
#include "CosmosSavedataDownloadResponse.h"
#include "CosmosSavedataUploadParam.h"
#include "CosmosSavedataUploadResponse.h"
#include "CosmosSealInfo.h"
#include "CosmosSysAgreeKpiParam.h"
#include "CosmosSysAgreeKpiResponse.h"
#include "CosmosSysGetEnvResponse.h"
#include "CosmosSysKpiParam.h"
#include "CosmosTusData.h"
#include "CosmosTusReadParam.h"
#include "CosmosTusReadResponse.h"
#include "CosmosTusWriteParam.h"
#include "CosmosTusWriteResponse.h"
#include "CosmosUserConvertUserIdResponseParam.h"
#include "CosmosUserParam.h"
#include "CosmosUserResponse.h"
#include "CosmosUserResponseV2.h"
#include "CosmsoSysKpiResponse.h"
#include "EAnimeInterlockingErrorType.h"
#include "EAnimeInterlockingState.h"
#include "ECosmosWebAPIType.h"
#include "ManagerInterface.h"
#include "CosmosWebManager.generated.h"

class UMaterialInterface;
class UObject;
class URSFrameGrabberComponent;
class UTextureRenderTarget2D;
class UUITitleCrossSave_UpdatingWidget;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ACosmosWebManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName titleCd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float limitsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultOK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultMaintenance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseOK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionNG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseNotExistUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseYear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginSkuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankingGetNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SealDistnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugConnsectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCodeSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimeInterlockingProgressIdYuito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimeInterlockingProgressIdKasane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimeInterlockingContentsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimeInterlockingTssSlotTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnvInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningAuthEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningWebEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningWebLoginEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningWebSubEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningWebSealEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningHttpEvet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunningMainEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosResultParam ResultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSysGetEnvResponse SysGetEnvResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSysKpiParam SysKpiParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmsoSysKpiResponse SysKpiResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSysAgreeKpiParam SysAgreeKpiParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSysAgreeKpiResponse SysAgreeKpiResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosUserParam UserParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosUserResponse UserResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosUserResponseV2 UserResponseV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosTusReadParam TusReadParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosTusReadResponse TusReadResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosTusWriteParam TusWriteParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosTusWriteResponse TusWriteResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosRankingGetMasterResponse RankingGetMasterResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosRankingSetScoreParam RankingSetScoreParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosRankingSetScoreResponse RankingSetScoreResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosRankingGetByRangeParam RankingGetByRangeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosRankingGetByRangeResponse RankingGetByRangeResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> RankingIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataUploadParam SavedataUploadParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataUploadResponse SavedataUploadResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataDownloadParam SavedataDownloadParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataDownloadResponse SavedataDownloadResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataDeleteParam SavedataDeleteParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosSavedataDeleteResponse SavedataDeleteResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSFrameGrabberComponent* FrameGrabberComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCosmosSealInfo> SealInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HttpLastErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosHugeTssReadListParam HugeTssReadListParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosHugeTssReadListResponse HugeTssReadListResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosGetTrackingNumResponse GetTrackingNumResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimeInterlockingURL> PlayableQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimeInterlockingAnswer AnimeInterlockingAnswer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosGetPlayableQuestsDelgate GetPlayableQuestsDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosGetQuestAnswersDelegate GetQuestAnswersDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosCheckAnswerDelegate CheckAnswerDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimeInterlockingState AnimeInterlockingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimeInterlockingErrorType AnimeInterlockingErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimeInterlockingIsGetPlayableQuestListLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimeInterlockingIsAnswerSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimeInterlockingIsAnswerLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITitleCrossSave_UpdatingWidget* UITitleCrossSave_UpdatingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmosGetTrackingNumDelegate TrackingNumDelegate;
    
    ACosmosWebManager();
private:
    UFUNCTION(BlueprintCallable)
    void UserConvertUserIdResponseEventBroadcast(const FCosmosUserConvertUserIdResponseParam& Param);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SpawnSealByWebData(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FString& AreaName);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayableQuestList(bool isTimeOut);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetPlayableQuestListInternal(bool IsWait);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAddNotificationBrainMessage();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveErrorResponse(ECosmosWebAPIType Type, int32 respCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningCosmosWebAPI();
    
    UFUNCTION(BlueprintCallable)
    bool IsGetTokenAndSignatureExecuting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnvironmentBuildComplete();
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteTokenAndSignature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetTusData(UObject* WorldContextObject, const FString& Data, FCosmosTusData& tusData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTrackingNumInternal();
    
    UFUNCTION(BlueprintCallable)
    bool GetTokenAndSignature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetRankingUserData(UObject* WorldContextObject, const FString& UserData, FCosmosRankingUserData& RankingUserData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRankingName(const FString& Json);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoginTalken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIssuerID(int32& IssuerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBitMap(UTextureRenderTarget2D* Target, int32 Quality, TArray<uint8>& Buff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBaseURL_V2(ECosmosWebAPIType Type, FName& baseUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBaseURL(FName& baseUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool GetAgreeKpiFlg(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 EnvUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnvironmentValidate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnvironmentRebuild();
    
    UFUNCTION(BlueprintCallable)
    int32 EnvInitialize();
    
    UFUNCTION(BlueprintCallable)
    void EnvFinalize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DecryptImageData(TArray<uint8> tusData, TArray<uint8>& Buff);
    
    UFUNCTION(BlueprintCallable)
    void DebugWriteParam(ECosmosWebAPIType Type, const FString& URL, const FString& userId, const FString& SessionID, bool isSend);
    
    UFUNCTION(BlueprintCallable)
    void DebugWriteHttp();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetQuestRelease(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetQuestList();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetQuestForceSuccess(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetQuestForceFail(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetOverwriteErrorType(EAnimeInterlockingErrorType ErrorType);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAnswers(const FString& QuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CreateTusData(FVector Pos, FRotator Rotate, TArray<uint8> Image, FString& tusData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void CreateRankingUserData(UObject* WorldContextObject, FCosmosRankingUserData RankingUserData, FString& UserData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmsoAddNotificationBrainMessageEventInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebTusWriteEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebTusWriteEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 slotNo, const FString& tusData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebTusReadEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebTusReadEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& userId, int32 slotNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebSetRankingEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebSetRankingEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& AreaName, const FString& UserData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebSealEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebSealEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 slotNo, const FString& tusData, const FString& AreaName, const FString& RankingUserData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebLoginEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebLoginEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebGetRankingEvnet(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& AreaName, int32 RankingType, int32 StartRank, int32 GetNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebGetRankingEventInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebEventNoLatent(ECosmosWebAPIType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebEventInternal(ECosmosWebAPIType Type);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, ECosmosWebAPIType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebCoreLoginEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebCoreLoginEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosWebCoreEventInternal(ECosmosWebAPIType Type);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosWebCoreEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, ECosmosWebAPIType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosUserConvertUserIdEventNoLatent(const TArray<FString>& PlatformUserIDList);
    
    UFUNCTION(BlueprintCallable)
    void CosmosSetLoading();
    
    UFUNCTION(BlueprintCallable)
    void CosmosResetAnimeInterlocking();
    
    UFUNCTION(BlueprintCallable)
    bool CosmosRequestGetQuestAnswers(FName QuestName);
    
    UFUNCTION(BlueprintCallable)
    bool CosmosRequestGetPlayableQuestListNoWait();
    
    UFUNCTION(BlueprintCallable)
    bool CosmosRequestGetPlayableQuestList();
    
    UFUNCTION(BlueprintCallable)
    bool CosmosRequestCheckAnswer(FName QuestName, const FString& Answer);
    
    UFUNCTION(BlueprintCallable)
    bool CosmosIsQuestAnswerLoaded(const FString& QuestName);
    
    UFUNCTION(BlueprintCallable)
    bool CosmosIsLoadedPlayableQuestList();
    
    UFUNCTION(BlueprintCallable)
    bool CosmosHttpRequest(const FString& QuestName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosHttpEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& QuestName, bool isCheckAnswer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosGetQuestAnswersEventInternal(FName QuestName);
    
    UFUNCTION(BlueprintCallable)
    bool CosmosGetQuestAnswers(FName QuestName, TArray<FString>& Answers);
    
    UFUNCTION(BlueprintCallable)
    void CosmosGetPlayableQuestList(bool& IsConnectSuccess, TArray<FString>& QuestList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosGetPlayableQuestEventInternal(int32 Region, int32 Use, int32 Language, bool IsWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosGetEvnEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosGetEnvEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosCoreGetEvnEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosCoreGetEnvEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosCoreAgreeKpiEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosCoreAgreeKpiEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosCheckAnswerEventInternal(FAmieInterlockingCheckAnswer Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CosmosAnimeInterlockingIsMaintenance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CosmosAnimeInterlockingGetErrorCode(int32& ErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosAgreeKpiEventNoLatent(int32 AgreeFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmosAgreeKpiEventInternal();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CosmosAgreeKpiEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 AgreeFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CosmosAddBrainMessage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllSeal(float StartDelay, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSealPosition(FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void CallGetTrackingNumDelegate();
    
private:
    UFUNCTION(BlueprintCallable)
    void CallGetQuestAnswersDelegate(FName QuestName);
    
    UFUNCTION(BlueprintCallable)
    void CallGetPlayableQuestListDelegate(bool bForceFinish);
    
    UFUNCTION(BlueprintCallable)
    bool CallCheckAnswerDelegate(const FString& QuestName, const FString& Answer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Base64UrlToBase64(const FString& Base64Url, FString& Base64);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Base64ToBase64Url(const FString& Base64, FString& Base64Url);
    
    
    // Fix for true pure virtual functions not being implemented
};

