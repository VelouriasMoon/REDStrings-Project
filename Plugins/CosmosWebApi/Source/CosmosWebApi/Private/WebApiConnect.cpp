#include "WebApiConnect.h"

class UNetMessage;
class UObject;
class UWebApiConnect;

UWebApiConnect* UWebApiConnect::UserLoginV2(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserLogin(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserLinkBnid(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserGetTrackingNum(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserCreate(UObject* WorldContextObject, const FString& pUserId, int32 SkuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserConvertUserId(UObject* WorldContextObject, const TArray<FString>& pUserId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserAuth(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::TusWrite(UObject* WorldContextObject, int32 slotNo, const FString& tusData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::TusRead(UObject* WorldContextObject, const FString& userId, int32 slotNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::TssReadList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::TssRead(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysOfflineKpi(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysKpi(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysGetEnvV2(UObject* WorldContextObject, int32 issureId, const FString& Token, int32 Region) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysGetEnv(UObject* WorldContextObject, int32 issureId, const FString& Token) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysCheckNgword(UObject* WorldContextObject, const FString& word, const FString& Language, int32 CheckType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysAgreeKpi(UObject* WorldContextObject, int32 agreeFlg) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SetHeader(UObject* WorldContextObject, const FString& titleCd, const FString& userId, const FString& session, int32 Platform) {
    return NULL;
}

void UWebApiConnect::SavedataUploadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataUploadResponseParam& respParam) {
}

UWebApiConnect* UWebApiConnect::SavedataUpload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo, const FString& SlotLabel, const FString& saveData) {
    return NULL;
}

void UWebApiConnect::SavedataMultipartuploadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataMultipartuploadResponseParam& respParam) {
}

UWebApiConnect* UWebApiConnect::SavedataMultipartupload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo, const FString& SlotLabel, const FString& saveData, const FString& HashKey) {
    return NULL;
}

void UWebApiConnect::SavedataDownloadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataDownloadResponseParam& respParam) {
}

UWebApiConnect* UWebApiConnect::SavedataDownload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo) {
    return NULL;
}

void UWebApiConnect::SavedataDeleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataDeleteResponseParam& respParam) {
}

UWebApiConnect* UWebApiConnect::SavedataDelete(UObject* WorldContextObject, const FString& pUserId, int32 slotNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RootBoxRun(UObject* WorldContextObject, const FString& rootboxId, const FString& paymentId, int32 paymentNum, const FString& paymentItemid, int32 totalPaymentPrice, const FString& campaignId, const FString& country) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RootBoxGetProbability(UObject* WorldContextObject, const FString& rootboxId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RootBoxGetList(UObject* WorldContextObject, int32 listType, const FString& country) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RootBoxGetDetail(UObject* WorldContextObject, const FString& rootboxId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RewardEarn(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, int32 Method) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RankingSetScore(UObject* WorldContextObject, const FString& rankingId, int32 score, const FString& UserData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RankingGetMaster(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RankingGetByUser(UObject* WorldContextObject, const FString& rankingId, const TArray<FString>& userIdList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::RankingGetByRange(UObject* WorldContextObject, const FString& rankingId, int32 RankingType, int32 StartRank, int32 GetNum) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::PointGrantMissionPoint(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, const FString& keyword) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::PointGrant(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, int32 Point) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::PointCardUserList(UObject* WorldContextObject, const FString& userId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::PointCardInfo(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::PointCardDelete(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::MissionInfo(UObject* WorldContextObject, const FString& MissionId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::MissionGetList(UObject* WorldContextObject, const FString& titleCd, const FString& keyword) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::LoginBonusGetList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::LoginBonusGetInfo(UObject* WorldContextObject, const TArray<FString>& loginBonusIdList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::LoginBonusGetBonus(UObject* WorldContextObject, const TArray<FString>& loginBonusIdList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::LoginBonusComplete(UObject* WorldContextObject, const FString& workId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::ItemUseOwned(UObject* WorldContextObject, const TArray<FCosmosItemInfo>& itemList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::ItemGetOwned(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::ItemGetMaster(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::ItemAddOwned(UObject* WorldContextObject, const TArray<FCosmosItemInfo>& itemList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::Initialize(UObject* WorldContextObject, const FString& baseUrl, float limitsec) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::HugeTssReadList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::HugeTssRead(UObject* WorldContextObject, int32 slotNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::HugeTssMultiReadList(UObject* WorldContextObject, int32 Region, int32 purpose, int32 Language) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::HugeTssMultiRead(UObject* WorldContextObject, int32 slotNo, int32 Region, int32 purpose, int32 Language) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildSetPosition(UObject* WorldContextObject, const FString& TargetID, int32 Position) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildSecession(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildPositionPermission(UObject* WorldContextObject, int32 positionNo, const TArray<FGuildPermissionInfo>& permissionList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildNotificationSelf(UObject* WorldContextObject, const FString& guildId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildNotification(UObject* WorldContextObject, const FString& TargetID) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildInvitedList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildInvitationList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildInvitationCancel(UObject* WorldContextObject, const FString& userId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildInvitation(UObject* WorldContextObject, const FString& userId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildInfo(UObject* WorldContextObject, const FString& guildId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildGetList(UObject* WorldContextObject, int32 viewNum, int32 pageNum) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildExpulsion(UObject* WorldContextObject, const FString& userId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildEditMemberData(UObject* WorldContextObject, const FString& memberData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildEdit(UObject* WorldContextObject, const FString& guildData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildCreate(UObject* WorldContextObject, const FString& guildData, const FString& guildMemberData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildChangeLeader(UObject* WorldContextObject, const FString& TargetID) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildChangeBasePosition(UObject* WorldContextObject, int32 changeType, int32 positionNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildApprovalList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildApprovalAdd(UObject* WorldContextObject, const FString& userId, int32 judgment) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildAddApplyList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildAddApplyCancel(UObject* WorldContextObject, const FString& guildId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildAddApply(UObject* WorldContextObject, const FString& guildId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GuildAdd(UObject* WorldContextObject, const FString& guildId, int32 judgment) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GiftBoxOpen(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GiftBoxClose(UObject* WorldContextObject, const TArray<FString>& giftIdList) {
    return NULL;
}

void UWebApiConnect::GetUserLoginV2Response(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginV2ResponseParam& respParam) {
}

void UWebApiConnect::GetUserLoginResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginResponseParam& respParam) {
}

void UWebApiConnect::GetUserLinkBnidResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLinkBnidResponseParam& respParam) {
}

void UWebApiConnect::GetUserGetTrackingNumResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserGetTrackingNumResponseParam& respParam) {
}

void UWebApiConnect::GetUserCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserCreateResponseParam& respParam) {
}

void UWebApiConnect::GetUserConvertUserIdResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserConvertUserIdResponseParam& respParam) {
}

void UWebApiConnect::GetUserAuthResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserAuthResponseParam& respParam) {
}

void UWebApiConnect::GetTusWriteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetTusReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FTusReadResponseParam& respParam) {
}

void UWebApiConnect::GetTssReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FTssReadResponseParam& respParam) {
}

void UWebApiConnect::GetTssReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FTssReadListResponseParam& respParam) {
}

void UWebApiConnect::GetSysOfflineKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetSysKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetSysGetEnvV2Response(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvV2ResponseParam& respParam) {
}

void UWebApiConnect::GetSysGetEnvResponse(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvResponseParam& respParam) {
}

void UWebApiConnect::GetSysCheckNgwordResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetSysAgreeKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetRootBoxRunResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxRunResponseParam& respParam) {
}

void UWebApiConnect::GetRootBoxGetProbabilityResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetProbabilityResponseParam& respParam) {
}

void UWebApiConnect::GetRootBoxGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetListResponseParam& respParam) {
}

void UWebApiConnect::GetRootBoxGetDetailResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetDetailResponseParam& respParam) {
}

void UWebApiConnect::GetRewardEarnResponse(UNetMessage* Data, FResponseHeader& respHeader, FRewardEarnResponseParam& respParam) {
}

void UWebApiConnect::GetRankingSetScoreResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetRankingGetMasterResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetMasterResponseParam& respParam) {
}

void UWebApiConnect::GetRankingGetByUserResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetByUserResponseParam& respParam) {
}

void UWebApiConnect::GetRankingGetByRangeResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetByRangeResponseParam& respParam) {
}

void UWebApiConnect::GetPointGrantResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetPointGrantMissionPointResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetPointCardUserListResponse(UNetMessage* Data, FResponseHeader& respHeader, FPointCardUserListResponseParam& respParam) {
}

void UWebApiConnect::GetPointCardInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FPointCardInfoResponseParam& respParam) {
}

void UWebApiConnect::GetPointCardDeleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetMissionInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FMissionInfoResponseParam& respParam) {
}

void UWebApiConnect::GetMissionGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FMissionGetListResponseParam& respParam) {
}

void UWebApiConnect::GetLoginBonusGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetListResponseParam& respParam) {
}

void UWebApiConnect::GetLoginBonusGetInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetInfoResponseParam& respParam) {
}

void UWebApiConnect::GetLoginBonusGetBonusResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetBonusResponseParam& respParam) {
}

void UWebApiConnect::GetLoginBonusCompleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetItemUseOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetItemGetOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FItemGetOwnedResponseParam& respParam) {
}

void UWebApiConnect::GetItemGetMasterResponse(UNetMessage* Data, FResponseHeader& respHeader, FItemGetMasterResponseParam& respParam) {
}

void UWebApiConnect::GetItemAddOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetHugeTssReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssReadResponseParam& respParam) {
}

void UWebApiConnect::GetHugeTssReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssReadListResponseParam& respParam) {
}

void UWebApiConnect::GetHugeTssMultiReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssMultiReadResponseParam& respParam) {
}

void UWebApiConnect::GetHugeTssMultiReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssMultiReadListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildSetPositionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildSecessionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildPositionPermissionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildNotificationSelfResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildNotificationSelfResponseParam& respParam) {
}

void UWebApiConnect::GetGuildNotificationResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildNotificationResponseParam& respParam) {
}

void UWebApiConnect::GetGuildInvitedListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInvitedListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildInvitationResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildInvitationListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInvitationListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildInvitationCancelResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInfoResponseParam& respParam) {
}

void UWebApiConnect::GetGuildGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildGetListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildExpulsionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildEditResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildEditResponseParam& respParam) {
}

void UWebApiConnect::GetGuildEditMemberDataResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildCreateResponseParam& respParam) {
}

void UWebApiConnect::GetGuildChangeLeaderResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildChangeBasePositionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildApprovalListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildApprovalListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildApprovalAddResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildAddResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildAddApplyResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGuildAddApplyListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildAddApplyListResponseParam& respParam) {
}

void UWebApiConnect::GetGuildAddApplyCancelResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGiftBoxOpenResponse(UNetMessage* Data, FResponseHeader& respHeader, FGiftBoxOpenResponseParam& respParam) {
}

void UWebApiConnect::GetGiftBoxCloseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetGamecurrencyGetOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FGamecurrencyGetOwnedResponseParam& respParam) {
}

void UWebApiConnect::GetGamecurrencyGetLimitedOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FGamecurrencyGetLimitedOwnedResponseParam& respParam) {
}

void UWebApiConnect::GetFesJoinResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetFesGetRewardResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetRewardResponseParam& respParam) {
}

void UWebApiConnect::GetFesGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetListResponseParam& respParam) {
}

void UWebApiConnect::GetFesGetInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetInfoResponseParam& respParam) {
}

void UWebApiConnect::GetFesCompleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetFesAddPointResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesAddPointResponseParam& respParam) {
}

void UWebApiConnect::GetDataupWriteResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupWriteResponseParam& respParam) {
}

void UWebApiConnect::GetDataupSearchResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupSearchResponseParam& respParam) {
}

void UWebApiConnect::GetDataupReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupReadResponseParam& respParam) {
}

void UWebApiConnect::GetDataupAppendResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseTokushoResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseTokushoResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseStartPurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseStartPurchaseResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseGetPurchaseStatusResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseGetPurchaseStatusResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseGetCatalogResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseGetCatalogResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseCompletePurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseCompletePurchaseResponseParam& respParam) {
}

void UWebApiConnect::GetCommonpurchaseCancelPurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseCancelPurchaseResponseParam& respParam) {
}

void UWebApiConnect::GetCatalogGetRegionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetRegionResponseParam& respParam) {
}

void UWebApiConnect::GetCatalogGetLobbyResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetLobbyResponseParam& respParam) {
}

void UWebApiConnect::GetCatalogGetAreaResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetAreaResponseParam& respParam) {
}

void UWebApiConnect::GetCampaignTitleListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignTitleListResponseParam& respParam) {
}

void UWebApiConnect::GetCampaignRewardListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignRewardListResponseParam& respParam) {
}

void UWebApiConnect::GetCampaignInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignInfoResponseParam& respParam) {
}

void UWebApiConnect::GetCampaignGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignGetListResponseParam& respParam) {
}

UWebApiConnect* UWebApiConnect::GamecurrencyGetOwned(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::GamecurrencyGetLimitedOwned(UObject* WorldContextObject, const FString& date) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesJoin(UObject* WorldContextObject, const FString& fesId, int32 factionsNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesGetReward(UObject* WorldContextObject, const FString& fesId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesGetList(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesGetInfo(UObject* WorldContextObject, const FString& fesId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesComplete(UObject* WorldContextObject, const FString& workId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::FesAddPoint(UObject* WorldContextObject, const FString& fesId, int32 factionsNo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::DataupWrite(UObject* WorldContextObject, const FString& RequestID, const FString& Data, const FString& appendInfo, const FDataupSearchTagInfo& searchTagInfo) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::DataupSearch(UObject* WorldContextObject, const TArray<FDataupSearchConditionInfo>& searchConditionList, int32 viewNum, int32 pageNum, int32 sortColumn, int32 SortType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::DataupRead(UObject* WorldContextObject, const FString& RequestID) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::DataupAppend(UObject* WorldContextObject, const FString& RequestID, const FString& appendInfo, const TArray<FDataupUpdateSearchTagInfo>& updateSearchTagList) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseTokusho(UObject* WorldContextObject, const FString& Language) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseStartPurchase(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& catalogId, const FString& Label) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseGetPurchaseStatus(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& Label) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseGetCatalog(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& Label) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseCompletePurchase(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& orderId, const FString& purchaseInfoId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CommonpurchaseCancelPurchase(UObject* WorldContextObject, const FString& purchaseInfoId, const FString& Token, const FString& errorId, const FString& errorMessage) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CatalogGetRegion(UObject* WorldContextObject) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CatalogGetLobby(UObject* WorldContextObject, const FString& areaId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CatalogGetArea(UObject* WorldContextObject, const FString& regionId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CampaignTitleList(UObject* WorldContextObject, const FString& titleCd, int32 dataType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CampaignRewardList(UObject* WorldContextObject, const FString& titleCd, const FString& campaignId, int32 listType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CampaignInfo(UObject* WorldContextObject, const FString& campaignId) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::CampaignGetList(UObject* WorldContextObject, int32 dataType) {
    return NULL;
}

UWebApiConnect::UWebApiConnect() {
}

