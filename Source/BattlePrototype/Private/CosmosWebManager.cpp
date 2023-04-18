#include "CosmosWebManager.h"

class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

void ACosmosWebManager::UserConvertUserIdResponseEventBroadcast(const FCosmosUserConvertUserIdResponseParam& Param) {
}

void ACosmosWebManager::SpawnSealByWebData(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FString& AreaName) {
}

bool ACosmosWebManager::SetPlayableQuestList(bool isTimeOut) {
    return false;
}

bool ACosmosWebManager::RequestGetPlayableQuestListInternal(bool IsWait) {
    return false;
}

bool ACosmosWebManager::RequestAddNotificationBrainMessage() {
    return false;
}

void ACosmosWebManager::ReceiveErrorResponse(ECosmosWebAPIType Type, int32 respCode) {
}

bool ACosmosWebManager::IsRunningCosmosWebAPI() {
    return false;
}

bool ACosmosWebManager::IsGetTokenAndSignatureExecuting() {
    return false;
}


bool ACosmosWebManager::IsCompleteTokenAndSignature() {
    return false;
}

void ACosmosWebManager::GetTusData(UObject* WorldContextObject, const FString& Data, FCosmosTusData& tusData) {
}


bool ACosmosWebManager::GetTokenAndSignature() {
    return false;
}

int32 ACosmosWebManager::GetRegion() {
    return 0;
}

void ACosmosWebManager::GetRankingUserData(UObject* WorldContextObject, const FString& UserData, FCosmosRankingUserData& RankingUserData) {
}

FString ACosmosWebManager::GetRankingName(const FString& Json) {
    return TEXT("");
}

FString ACosmosWebManager::GetLoginTalken() {
    return TEXT("");
}

void ACosmosWebManager::GetIssuerID(int32& IssuerID) {
}

void ACosmosWebManager::GetBitMap(UTextureRenderTarget2D* Target, int32 Quality, TArray<uint8>& Buff) {
}

void ACosmosWebManager::GetBaseURL_V2(ECosmosWebAPIType Type, FName& baseUrl) {
}

void ACosmosWebManager::GetBaseURL(FName& baseUrl) {
}

bool ACosmosWebManager::GetAgreeKpiFlg(const UObject* WorldContextObject) {
    return false;
}

int32 ACosmosWebManager::EnvUpdate() {
    return 0;
}



int32 ACosmosWebManager::EnvInitialize() {
    return 0;
}

void ACosmosWebManager::EnvFinalize() {
}

void ACosmosWebManager::DecryptImageData(TArray<uint8> tusData, TArray<uint8>& Buff) {
}

void ACosmosWebManager::DebugWriteParam(ECosmosWebAPIType Type, const FString& URL, const FString& userId, const FString& SessionID, bool isSend) {
}

void ACosmosWebManager::DebugWriteHttp() {
}

void ACosmosWebManager::DebugSetQuestRelease(int32 Index) {
}

void ACosmosWebManager::DebugSetQuestList() {
}

void ACosmosWebManager::DebugSetQuestForceSuccess(bool bSet) {
}

void ACosmosWebManager::DebugSetQuestForceFail(bool bSet) {
}

void ACosmosWebManager::DebugSetOverwriteErrorType(EAnimeInterlockingErrorType ErrorType) {
}

void ACosmosWebManager::DebugSetAnswers(const FString& QuestName) {
}

void ACosmosWebManager::CreateTusData(FVector Pos, FRotator Rotate, TArray<uint8> Image, FString& tusData) {
}

void ACosmosWebManager::CreateRankingUserData(UObject* WorldContextObject, FCosmosRankingUserData RankingUserData, FString& UserData) {
}



void ACosmosWebManager::CosmosWebTusWriteEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 slotNo, const FString& tusData) {
}


void ACosmosWebManager::CosmosWebTusReadEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& userId, int32 slotNo) {
}


void ACosmosWebManager::CosmosWebSetRankingEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& AreaName, const FString& UserData) {
}


void ACosmosWebManager::CosmosWebSealEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 slotNo, const FString& tusData, const FString& AreaName, const FString& RankingUserData) {
}


void ACosmosWebManager::CosmosWebLoginEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ACosmosWebManager::CosmosWebGetRankingEvnet(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& AreaName, int32 RankingType, int32 StartRank, int32 GetNum) {
}




void ACosmosWebManager::CosmosWebEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, ECosmosWebAPIType Type) {
}


void ACosmosWebManager::CosmosWebCoreLoginEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}


void ACosmosWebManager::CosmosWebCoreEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, ECosmosWebAPIType Type) {
}


void ACosmosWebManager::CosmosSetLoading() {
}

void ACosmosWebManager::CosmosResetAnimeInterlocking() {
}

bool ACosmosWebManager::CosmosRequestGetQuestAnswers(FName QuestName) {
    return false;
}

bool ACosmosWebManager::CosmosRequestGetPlayableQuestListNoWait() {
    return false;
}

bool ACosmosWebManager::CosmosRequestGetPlayableQuestList() {
    return false;
}

bool ACosmosWebManager::CosmosRequestCheckAnswer(FName QuestName, const FString& Answer) {
    return false;
}

bool ACosmosWebManager::CosmosIsQuestAnswerLoaded(const FString& QuestName) {
    return false;
}

bool ACosmosWebManager::CosmosIsLoadedPlayableQuestList() {
    return false;
}

bool ACosmosWebManager::CosmosHttpRequest(const FString& QuestName) {
    return false;
}

void ACosmosWebManager::CosmosHttpEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& QuestName, bool isCheckAnswer) {
}


bool ACosmosWebManager::CosmosGetQuestAnswers(FName QuestName, TArray<FString>& Answers) {
    return false;
}

void ACosmosWebManager::CosmosGetPlayableQuestList(bool& IsConnectSuccess, TArray<FString>& QuestList) {
}



void ACosmosWebManager::CosmosGetEnvEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}


void ACosmosWebManager::CosmosCoreGetEnvEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}


void ACosmosWebManager::CosmosCoreAgreeKpiEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}


bool ACosmosWebManager::CosmosAnimeInterlockingIsMaintenance() {
    return false;
}

bool ACosmosWebManager::CosmosAnimeInterlockingGetErrorCode(int32& ErrorCode) {
    return false;
}



void ACosmosWebManager::CosmosAgreeKpiEvent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 AgreeFlag) {
}

void ACosmosWebManager::CosmosAddBrainMessage(UObject* WorldContextObject) {
}

void ACosmosWebManager::ClearAllSeal(float StartDelay, float Duration) {
}

bool ACosmosWebManager::CheckSealPosition(FVector Pos) {
    return false;
}

void ACosmosWebManager::CallGetTrackingNumDelegate() {
}

void ACosmosWebManager::CallGetQuestAnswersDelegate(FName QuestName) {
}

void ACosmosWebManager::CallGetPlayableQuestListDelegate(bool bForceFinish) {
}

bool ACosmosWebManager::CallCheckAnswerDelegate(const FString& QuestName, const FString& Answer) {
    return false;
}

void ACosmosWebManager::Base64UrlToBase64(const FString& Base64Url, FString& Base64) {
}

void ACosmosWebManager::Base64ToBase64Url(const FString& Base64, FString& Base64Url) {
}

ACosmosWebManager::ACosmosWebManager() {
    this->titleCd = TEXT("025351");
    this->limitsec = 10.00f;
    this->TimeOutSec = 15.00f;
    this->RetryCount = 3;
    this->ResultOK = 0;
    this->ResultMaintenance = 2;
    this->ResponseOK = 0;
    this->SessionNG = 3;
    this->SessionTimeout = 4;
    this->ResponseNotExistUser = 201;
    this->AreaMax = 5;
    this->BaseYear = 2019;
    this->BaseMonth = 1;
    this->BaseDay = 1;
    this->LoginSkuType = 0;
    this->RankingGetNum = 100;
    this->SealDistnce = 100.00f;
    this->DebugConnsectTime = 3.00f;
    this->ErrorCodeSuccess = 200;
    this->AnimeInterlockingProgressIdYuito = 10295010;
    this->AnimeInterlockingProgressIdKasane = 20295010;
    this->AnimeInterlockingContentsId = 10;
    this->AnimeInterlockingTssSlotTop = 100;
    this->IsEnvInitialized = false;
    this->IsRunningAuthEvent = false;
    this->IsRunningWebEvent = false;
    this->IsRunningWebLoginEvent = false;
    this->IsRunningWebSubEvent = false;
    this->IsRunningWebSealEvent = false;
    this->IsRunningHttpEvet = false;
    this->IsRunningMainEvent = false;
    this->Platform = 3;
    this->FrameGrabberComponent = NULL;
    this->HttpLastErrorCode.AddDefaulted(17);
    this->AnimeInterlockingState = EAnimeInterlockingState::Invalid;
    this->AnimeInterlockingErrorType = EAnimeInterlockingErrorType::None;
    this->AnimeInterlockingIsGetPlayableQuestListLoaded = false;
    this->AnimeInterlockingIsAnswerSuccess = false;
    this->AnimeInterlockingIsAnswerLoaded = false;
    this->UITitleCrossSave_UpdatingWidget = NULL;
}

