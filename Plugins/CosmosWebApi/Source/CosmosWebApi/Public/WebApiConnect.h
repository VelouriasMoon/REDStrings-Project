#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CampaignGetListResponseParam.h"
#include "CampaignInfoResponseParam.h"
#include "CampaignRewardListResponseParam.h"
#include "CampaignTitleListResponseParam.h"
#include "CatalogGetAreaResponseParam.h"
#include "CatalogGetLobbyResponseParam.h"
#include "CatalogGetRegionResponseParam.h"
#include "CommonResponseParam.h"
#include "CommonpurchaseCancelPurchaseResponseParam.h"
#include "CommonpurchaseCompletePurchaseResponseParam.h"
#include "CommonpurchaseGetCatalogResponseParam.h"
#include "CommonpurchaseGetPurchaseStatusResponseParam.h"
#include "CommonpurchaseStartPurchaseResponseParam.h"
#include "CommonpurchaseTokushoResponseParam.h"
#include "CosmosItemInfo.h"
#include "DataupReadResponseParam.h"
#include "DataupSearchConditionInfo.h"
#include "DataupSearchResponseParam.h"
#include "DataupSearchTagInfo.h"
#include "DataupUpdateSearchTagInfo.h"
#include "DataupWriteResponseParam.h"
#include "FesAddPointResponseParam.h"
#include "FesGetInfoResponseParam.h"
#include "FesGetListResponseParam.h"
#include "FesGetRewardResponseParam.h"
#include "GamecurrencyGetLimitedOwnedResponseParam.h"
#include "GamecurrencyGetOwnedResponseParam.h"
#include "GiftBoxOpenResponseParam.h"
#include "GuildAddApplyListResponseParam.h"
#include "GuildApprovalListResponseParam.h"
#include "GuildCreateResponseParam.h"
#include "GuildEditResponseParam.h"
#include "GuildGetListResponseParam.h"
#include "GuildInfoResponseParam.h"
#include "GuildInvitationListResponseParam.h"
#include "GuildInvitedListResponseParam.h"
#include "GuildNotificationResponseParam.h"
#include "GuildNotificationSelfResponseParam.h"
#include "GuildPermissionInfo.h"
#include "HugeTssMultiReadListResponseParam.h"
#include "HugeTssMultiReadResponseParam.h"
#include "HugeTssReadListResponseParam.h"
#include "HugeTssReadResponseParam.h"
#include "ItemGetMasterResponseParam.h"
#include "ItemGetOwnedResponseParam.h"
#include "KpiNoColumnData.h"
#include "LoginBonusGetBonusResponseParam.h"
#include "LoginBonusGetInfoResponseParam.h"
#include "LoginBonusGetListResponseParam.h"
#include "MissionGetListResponseParam.h"
#include "MissionInfoResponseParam.h"
#include "OnErrorDelegate.h"
#include "OnReceiveDelegate.h"
#include "PointCardInfoResponseParam.h"
#include "PointCardUserListResponseParam.h"
#include "RankingGetByRangeResponseParam.h"
#include "RankingGetByUserResponseParam.h"
#include "RankingGetMasterResponseParam.h"
#include "ResponseHeader.h"
#include "RewardEarnResponseParam.h"
#include "RootBoxGetDetailResponseParam.h"
#include "RootBoxGetListResponseParam.h"
#include "RootBoxGetProbabilityResponseParam.h"
#include "RootBoxRunResponseParam.h"
#include "SavedataDeleteResponseParam.h"
#include "SavedataDownloadResponseParam.h"
#include "SavedataMultipartuploadResponseParam.h"
#include "SavedataUploadResponseParam.h"
#include "SysGetEnvResponseParam.h"
#include "SysGetEnvV2ResponseParam.h"
#include "TssReadListResponseParam.h"
#include "TssReadResponseParam.h"
#include "TusReadResponseParam.h"
#include "UserAuthResponseParam.h"
#include "UserConvertUserIdResponseParam.h"
#include "UserCreateResponseParam.h"
#include "UserGetTrackingNumResponseParam.h"
#include "UserLinkBnidResponseParam.h"
#include "UserLoginResponseParam.h"
#include "UserLoginV2ResponseParam.h"
#include "WebApiConnect.generated.h"

class UNetMessage;
class UWebApiConnect;

UCLASS(Blueprintable)
class UWebApiConnect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceive OnReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnError OnError;
    
    UWebApiConnect();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserLoginV2(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserLogin(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserLinkBnid(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserGetTrackingNum(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserCreate(UObject* WorldContextObject, const FString& pUserId, int32 SkuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserConvertUserId(UObject* WorldContextObject, const TArray<FString>& pUserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserAuth(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 SkuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* TusWrite(UObject* WorldContextObject, int32 slotNo, const FString& tusData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* TusRead(UObject* WorldContextObject, const FString& userId, int32 slotNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* TssReadList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* TssRead(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysOfflineKpi(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysKpi(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysGetEnvV2(UObject* WorldContextObject, int32 issureId, const FString& Token, int32 Region);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysGetEnv(UObject* WorldContextObject, int32 issureId, const FString& Token);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysCheckNgword(UObject* WorldContextObject, const FString& word, const FString& Language, int32 CheckType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysAgreeKpi(UObject* WorldContextObject, int32 agreeFlg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SetHeader(UObject* WorldContextObject, const FString& titleCd, const FString& userId, const FString& session, int32 Platform);
    
    UFUNCTION(BlueprintCallable)
    static void SavedataUploadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataUploadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SavedataUpload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo, const FString& SlotLabel, const FString& saveData);
    
    UFUNCTION(BlueprintCallable)
    static void SavedataMultipartuploadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataMultipartuploadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SavedataMultipartupload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo, const FString& SlotLabel, const FString& saveData, const FString& HashKey);
    
    UFUNCTION(BlueprintCallable)
    static void SavedataDownloadResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataDownloadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SavedataDownload(UObject* WorldContextObject, const FString& pUserId, int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    static void SavedataDeleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FSavedataDeleteResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SavedataDelete(UObject* WorldContextObject, const FString& pUserId, int32 slotNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RootBoxRun(UObject* WorldContextObject, const FString& rootboxId, const FString& paymentId, int32 paymentNum, const FString& paymentItemid, int32 totalPaymentPrice, const FString& campaignId, const FString& country);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RootBoxGetProbability(UObject* WorldContextObject, const FString& rootboxId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RootBoxGetList(UObject* WorldContextObject, int32 listType, const FString& country);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RootBoxGetDetail(UObject* WorldContextObject, const FString& rootboxId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RewardEarn(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, int32 Method);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RankingSetScore(UObject* WorldContextObject, const FString& rankingId, int32 score, const FString& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RankingGetMaster(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RankingGetByUser(UObject* WorldContextObject, const FString& rankingId, const TArray<FString>& userIdList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* RankingGetByRange(UObject* WorldContextObject, const FString& rankingId, int32 RankingType, int32 StartRank, int32 GetNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* PointGrantMissionPoint(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, const FString& keyword);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* PointGrant(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId, int32 Point);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* PointCardUserList(UObject* WorldContextObject, const FString& userId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* PointCardInfo(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* PointCardDelete(UObject* WorldContextObject, const FString& userId, const FString& titleCd, const FString& campaignId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* MissionInfo(UObject* WorldContextObject, const FString& MissionId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* MissionGetList(UObject* WorldContextObject, const FString& titleCd, const FString& keyword);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* LoginBonusGetList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* LoginBonusGetInfo(UObject* WorldContextObject, const TArray<FString>& loginBonusIdList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* LoginBonusGetBonus(UObject* WorldContextObject, const TArray<FString>& loginBonusIdList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* LoginBonusComplete(UObject* WorldContextObject, const FString& workId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* ItemUseOwned(UObject* WorldContextObject, const TArray<FCosmosItemInfo>& itemList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* ItemGetOwned(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* ItemGetMaster(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* ItemAddOwned(UObject* WorldContextObject, const TArray<FCosmosItemInfo>& itemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWebApiConnect* Initialize(UObject* WorldContextObject, const FString& baseUrl, float limitsec);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* HugeTssReadList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* HugeTssRead(UObject* WorldContextObject, int32 slotNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* HugeTssMultiReadList(UObject* WorldContextObject, int32 Region, int32 purpose, int32 Language);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* HugeTssMultiRead(UObject* WorldContextObject, int32 slotNo, int32 Region, int32 purpose, int32 Language);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildSetPosition(UObject* WorldContextObject, const FString& TargetID, int32 Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildSecession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildPositionPermission(UObject* WorldContextObject, int32 positionNo, const TArray<FGuildPermissionInfo>& permissionList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildNotificationSelf(UObject* WorldContextObject, const FString& guildId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildNotification(UObject* WorldContextObject, const FString& TargetID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildInvitedList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildInvitationList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildInvitationCancel(UObject* WorldContextObject, const FString& userId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildInvitation(UObject* WorldContextObject, const FString& userId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildInfo(UObject* WorldContextObject, const FString& guildId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildGetList(UObject* WorldContextObject, int32 viewNum, int32 pageNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildExpulsion(UObject* WorldContextObject, const FString& userId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildEditMemberData(UObject* WorldContextObject, const FString& memberData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildEdit(UObject* WorldContextObject, const FString& guildData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildCreate(UObject* WorldContextObject, const FString& guildData, const FString& guildMemberData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildChangeLeader(UObject* WorldContextObject, const FString& TargetID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildChangeBasePosition(UObject* WorldContextObject, int32 changeType, int32 positionNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildApprovalList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildApprovalAdd(UObject* WorldContextObject, const FString& userId, int32 judgment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildAddApplyList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildAddApplyCancel(UObject* WorldContextObject, const FString& guildId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildAddApply(UObject* WorldContextObject, const FString& guildId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GuildAdd(UObject* WorldContextObject, const FString& guildId, int32 judgment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GiftBoxOpen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GiftBoxClose(UObject* WorldContextObject, const TArray<FString>& giftIdList);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserLoginV2Response(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginV2ResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserLoginResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserLinkBnidResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLinkBnidResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserGetTrackingNumResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserGetTrackingNumResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserCreateResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserConvertUserIdResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserConvertUserIdResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAuthResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserAuthResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetTusWriteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetTusReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FTusReadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetTssReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FTssReadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetTssReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FTssReadListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysOfflineKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysGetEnvV2Response(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvV2ResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysGetEnvResponse(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysCheckNgwordResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysAgreeKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRootBoxRunResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxRunResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRootBoxGetProbabilityResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetProbabilityResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRootBoxGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRootBoxGetDetailResponse(UNetMessage* Data, FResponseHeader& respHeader, FRootBoxGetDetailResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRewardEarnResponse(UNetMessage* Data, FResponseHeader& respHeader, FRewardEarnResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRankingSetScoreResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRankingGetMasterResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetMasterResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRankingGetByUserResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetByUserResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetRankingGetByRangeResponse(UNetMessage* Data, FResponseHeader& respHeader, FRankingGetByRangeResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointGrantResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointGrantMissionPointResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointCardUserListResponse(UNetMessage* Data, FResponseHeader& respHeader, FPointCardUserListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointCardInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FPointCardInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointCardDeleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetMissionInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FMissionInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetMissionGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FMissionGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetLoginBonusGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetLoginBonusGetInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetLoginBonusGetBonusResponse(UNetMessage* Data, FResponseHeader& respHeader, FLoginBonusGetBonusResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetLoginBonusCompleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemUseOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemGetOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FItemGetOwnedResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemGetMasterResponse(UNetMessage* Data, FResponseHeader& respHeader, FItemGetMasterResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemAddOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetHugeTssReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssReadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetHugeTssReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssReadListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetHugeTssMultiReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssMultiReadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetHugeTssMultiReadListResponse(UNetMessage* Data, FResponseHeader& respHeader, FHugeTssMultiReadListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildSetPositionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildSecessionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildPositionPermissionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildNotificationSelfResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildNotificationSelfResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildNotificationResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildNotificationResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildInvitedListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInvitedListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildInvitationResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildInvitationListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInvitationListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildInvitationCancelResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildExpulsionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildEditResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildEditResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildEditMemberDataResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildCreateResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildChangeLeaderResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildChangeBasePositionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildApprovalListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildApprovalListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildApprovalAddResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildAddResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildAddApplyResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildAddApplyListResponse(UNetMessage* Data, FResponseHeader& respHeader, FGuildAddApplyListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildAddApplyCancelResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGiftBoxOpenResponse(UNetMessage* Data, FResponseHeader& respHeader, FGiftBoxOpenResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGiftBoxCloseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGamecurrencyGetOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FGamecurrencyGetOwnedResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetGamecurrencyGetLimitedOwnedResponse(UNetMessage* Data, FResponseHeader& respHeader, FGamecurrencyGetLimitedOwnedResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesJoinResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesGetRewardResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetRewardResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesGetInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesGetInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesCompleteResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetFesAddPointResponse(UNetMessage* Data, FResponseHeader& respHeader, FFesAddPointResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataupWriteResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupWriteResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataupSearchResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupSearchResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataupReadResponse(UNetMessage* Data, FResponseHeader& respHeader, FDataupReadResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataupAppendResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseTokushoResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseTokushoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseStartPurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseStartPurchaseResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseGetPurchaseStatusResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseGetPurchaseStatusResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseGetCatalogResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseGetCatalogResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseCompletePurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseCompletePurchaseResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCommonpurchaseCancelPurchaseResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonpurchaseCancelPurchaseResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCatalogGetRegionResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetRegionResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCatalogGetLobbyResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetLobbyResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCatalogGetAreaResponse(UNetMessage* Data, FResponseHeader& respHeader, FCatalogGetAreaResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCampaignTitleListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignTitleListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCampaignRewardListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignRewardListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCampaignInfoResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignInfoResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetCampaignGetListResponse(UNetMessage* Data, FResponseHeader& respHeader, FCampaignGetListResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GamecurrencyGetOwned(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* GamecurrencyGetLimitedOwned(UObject* WorldContextObject, const FString& date);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesJoin(UObject* WorldContextObject, const FString& fesId, int32 factionsNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesGetReward(UObject* WorldContextObject, const FString& fesId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesGetList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesGetInfo(UObject* WorldContextObject, const FString& fesId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesComplete(UObject* WorldContextObject, const FString& workId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* FesAddPoint(UObject* WorldContextObject, const FString& fesId, int32 factionsNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* DataupWrite(UObject* WorldContextObject, const FString& RequestID, const FString& Data, const FString& appendInfo, const FDataupSearchTagInfo& searchTagInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* DataupSearch(UObject* WorldContextObject, const TArray<FDataupSearchConditionInfo>& searchConditionList, int32 viewNum, int32 pageNum, int32 sortColumn, int32 SortType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* DataupRead(UObject* WorldContextObject, const FString& RequestID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* DataupAppend(UObject* WorldContextObject, const FString& RequestID, const FString& appendInfo, const TArray<FDataupUpdateSearchTagInfo>& updateSearchTagList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseTokusho(UObject* WorldContextObject, const FString& Language);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseStartPurchase(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& catalogId, const FString& Label);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseGetPurchaseStatus(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& Label);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseGetCatalog(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& Label);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseCompletePurchase(UObject* WorldContextObject, const FString& country, const FString& Language, const FString& Token, const FString& orderId, const FString& purchaseInfoId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CommonpurchaseCancelPurchase(UObject* WorldContextObject, const FString& purchaseInfoId, const FString& Token, const FString& errorId, const FString& errorMessage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CatalogGetRegion(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CatalogGetLobby(UObject* WorldContextObject, const FString& areaId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CatalogGetArea(UObject* WorldContextObject, const FString& regionId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CampaignTitleList(UObject* WorldContextObject, const FString& titleCd, int32 dataType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CampaignRewardList(UObject* WorldContextObject, const FString& titleCd, const FString& campaignId, int32 listType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CampaignInfo(UObject* WorldContextObject, const FString& campaignId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* CampaignGetList(UObject* WorldContextObject, int32 dataType);
    
};

