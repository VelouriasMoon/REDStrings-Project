// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWebApiConnect;
struct FDataupUpdateSearchTagInfo;
struct FDataupSearchConditionInfo;
struct FDataupSearchTagInfo;
class UNetMessage;
struct FResponseHeader;
struct FCampaignGetListResponseParam;
struct FCampaignInfoResponseParam;
struct FCampaignRewardListResponseParam;
struct FCampaignTitleListResponseParam;
struct FCatalogGetAreaResponseParam;
struct FCatalogGetLobbyResponseParam;
struct FCatalogGetRegionResponseParam;
struct FCommonpurchaseCancelPurchaseResponseParam;
struct FCommonpurchaseCompletePurchaseResponseParam;
struct FCommonpurchaseGetCatalogResponseParam;
struct FCommonpurchaseGetPurchaseStatusResponseParam;
struct FCommonpurchaseStartPurchaseResponseParam;
struct FCommonpurchaseTokushoResponseParam;
struct FCommonResponseParam;
struct FDataupReadResponseParam;
struct FDataupSearchResponseParam;
struct FDataupWriteResponseParam;
struct FFesAddPointResponseParam;
struct FFesGetInfoResponseParam;
struct FFesGetListResponseParam;
struct FFesGetRewardResponseParam;
struct FGamecurrencyGetLimitedOwnedResponseParam;
struct FGamecurrencyGetOwnedResponseParam;
struct FGiftBoxOpenResponseParam;
struct FGuildAddApplyListResponseParam;
struct FGuildApprovalListResponseParam;
struct FGuildCreateResponseParam;
struct FGuildEditResponseParam;
struct FGuildGetListResponseParam;
struct FGuildInfoResponseParam;
struct FGuildInvitationListResponseParam;
struct FGuildInvitedListResponseParam;
struct FGuildNotificationResponseParam;
struct FGuildNotificationSelfResponseParam;
struct FHugeTssMultiReadListResponseParam;
struct FHugeTssMultiReadResponseParam;
struct FHugeTssReadListResponseParam;
struct FHugeTssReadResponseParam;
struct FItemGetMasterResponseParam;
struct FItemGetOwnedResponseParam;
struct FLoginBonusGetBonusResponseParam;
struct FLoginBonusGetInfoResponseParam;
struct FLoginBonusGetListResponseParam;
struct FMissionGetListResponseParam;
struct FMissionInfoResponseParam;
struct FPointCardInfoResponseParam;
struct FPointCardUserListResponseParam;
struct FRankingGetByRangeResponseParam;
struct FRankingGetByUserResponseParam;
struct FRankingGetMasterResponseParam;
struct FRewardEarnResponseParam;
struct FRootBoxGetDetailResponseParam;
struct FRootBoxGetListResponseParam;
struct FRootBoxGetProbabilityResponseParam;
struct FRootBoxRunResponseParam;
struct FSysGetEnvResponseParam;
struct FSysGetEnvV2ResponseParam;
struct FTssReadListResponseParam;
struct FTssReadResponseParam;
struct FTusReadResponseParam;
struct FUserAuthResponseParam;
struct FUserConvertUserIdResponseParam;
struct FUserCreateResponseParam;
struct FUserGetTrackingNumResponseParam;
struct FUserLinkBnidResponseParam;
struct FUserLoginResponseParam;
struct FUserLoginV2ResponseParam;
struct FGuildPermissionInfo;
struct FCosmosItemInfo;
struct FSavedataDeleteResponseParam;
struct FSavedataDownloadResponseParam;
struct FSavedataMultipartuploadResponseParam;
struct FSavedataUploadResponseParam;
struct FKpiNoColumnData;
#ifdef COSMOSWEBAPI_WebApiConnect_generated_h
#error "WebApiConnect.generated.h already included, missing '#pragma once' in WebApiConnect.h"
#endif
#define COSMOSWEBAPI_WebApiConnect_generated_h

#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_SPARSE_DATA
#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCampaignGetList); \
	DECLARE_FUNCTION(execCampaignInfo); \
	DECLARE_FUNCTION(execCampaignRewardList); \
	DECLARE_FUNCTION(execCampaignTitleList); \
	DECLARE_FUNCTION(execCatalogGetArea); \
	DECLARE_FUNCTION(execCatalogGetLobby); \
	DECLARE_FUNCTION(execCatalogGetRegion); \
	DECLARE_FUNCTION(execCommonpurchaseCancelPurchase); \
	DECLARE_FUNCTION(execCommonpurchaseCompletePurchase); \
	DECLARE_FUNCTION(execCommonpurchaseGetCatalog); \
	DECLARE_FUNCTION(execCommonpurchaseGetPurchaseStatus); \
	DECLARE_FUNCTION(execCommonpurchaseStartPurchase); \
	DECLARE_FUNCTION(execCommonpurchaseTokusho); \
	DECLARE_FUNCTION(execDataupAppend); \
	DECLARE_FUNCTION(execDataupRead); \
	DECLARE_FUNCTION(execDataupSearch); \
	DECLARE_FUNCTION(execDataupWrite); \
	DECLARE_FUNCTION(execFesAddPoint); \
	DECLARE_FUNCTION(execFesComplete); \
	DECLARE_FUNCTION(execFesGetInfo); \
	DECLARE_FUNCTION(execFesGetList); \
	DECLARE_FUNCTION(execFesGetReward); \
	DECLARE_FUNCTION(execFesJoin); \
	DECLARE_FUNCTION(execGamecurrencyGetLimitedOwned); \
	DECLARE_FUNCTION(execGamecurrencyGetOwned); \
	DECLARE_FUNCTION(execGetCampaignGetListResponse); \
	DECLARE_FUNCTION(execGetCampaignInfoResponse); \
	DECLARE_FUNCTION(execGetCampaignRewardListResponse); \
	DECLARE_FUNCTION(execGetCampaignTitleListResponse); \
	DECLARE_FUNCTION(execGetCatalogGetAreaResponse); \
	DECLARE_FUNCTION(execGetCatalogGetLobbyResponse); \
	DECLARE_FUNCTION(execGetCatalogGetRegionResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseCancelPurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseCompletePurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseGetCatalogResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseGetPurchaseStatusResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseStartPurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseTokushoResponse); \
	DECLARE_FUNCTION(execGetDataupAppendResponse); \
	DECLARE_FUNCTION(execGetDataupReadResponse); \
	DECLARE_FUNCTION(execGetDataupSearchResponse); \
	DECLARE_FUNCTION(execGetDataupWriteResponse); \
	DECLARE_FUNCTION(execGetFesAddPointResponse); \
	DECLARE_FUNCTION(execGetFesCompleteResponse); \
	DECLARE_FUNCTION(execGetFesGetInfoResponse); \
	DECLARE_FUNCTION(execGetFesGetListResponse); \
	DECLARE_FUNCTION(execGetFesGetRewardResponse); \
	DECLARE_FUNCTION(execGetFesJoinResponse); \
	DECLARE_FUNCTION(execGetGamecurrencyGetLimitedOwnedResponse); \
	DECLARE_FUNCTION(execGetGamecurrencyGetOwnedResponse); \
	DECLARE_FUNCTION(execGetGiftBoxCloseResponse); \
	DECLARE_FUNCTION(execGetGiftBoxOpenResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyCancelResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyListResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyResponse); \
	DECLARE_FUNCTION(execGetGuildAddResponse); \
	DECLARE_FUNCTION(execGetGuildApprovalAddResponse); \
	DECLARE_FUNCTION(execGetGuildApprovalListResponse); \
	DECLARE_FUNCTION(execGetGuildChangeBasePositionResponse); \
	DECLARE_FUNCTION(execGetGuildChangeLeaderResponse); \
	DECLARE_FUNCTION(execGetGuildCreateResponse); \
	DECLARE_FUNCTION(execGetGuildEditMemberDataResponse); \
	DECLARE_FUNCTION(execGetGuildEditResponse); \
	DECLARE_FUNCTION(execGetGuildExpulsionResponse); \
	DECLARE_FUNCTION(execGetGuildGetListResponse); \
	DECLARE_FUNCTION(execGetGuildInfoResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationCancelResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationListResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationResponse); \
	DECLARE_FUNCTION(execGetGuildInvitedListResponse); \
	DECLARE_FUNCTION(execGetGuildNotificationResponse); \
	DECLARE_FUNCTION(execGetGuildNotificationSelfResponse); \
	DECLARE_FUNCTION(execGetGuildPositionPermissionResponse); \
	DECLARE_FUNCTION(execGetGuildSecessionResponse); \
	DECLARE_FUNCTION(execGetGuildSetPositionResponse); \
	DECLARE_FUNCTION(execGetHugeTssMultiReadListResponse); \
	DECLARE_FUNCTION(execGetHugeTssMultiReadResponse); \
	DECLARE_FUNCTION(execGetHugeTssReadListResponse); \
	DECLARE_FUNCTION(execGetHugeTssReadResponse); \
	DECLARE_FUNCTION(execGetItemAddOwnedResponse); \
	DECLARE_FUNCTION(execGetItemGetMasterResponse); \
	DECLARE_FUNCTION(execGetItemGetOwnedResponse); \
	DECLARE_FUNCTION(execGetItemUseOwnedResponse); \
	DECLARE_FUNCTION(execGetLoginBonusCompleteResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetBonusResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetInfoResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetListResponse); \
	DECLARE_FUNCTION(execGetMissionGetListResponse); \
	DECLARE_FUNCTION(execGetMissionInfoResponse); \
	DECLARE_FUNCTION(execGetPointCardDeleteResponse); \
	DECLARE_FUNCTION(execGetPointCardInfoResponse); \
	DECLARE_FUNCTION(execGetPointCardUserListResponse); \
	DECLARE_FUNCTION(execGetPointGrantMissionPointResponse); \
	DECLARE_FUNCTION(execGetPointGrantResponse); \
	DECLARE_FUNCTION(execGetRankingGetByRangeResponse); \
	DECLARE_FUNCTION(execGetRankingGetByUserResponse); \
	DECLARE_FUNCTION(execGetRankingGetMasterResponse); \
	DECLARE_FUNCTION(execGetRankingSetScoreResponse); \
	DECLARE_FUNCTION(execGetRewardEarnResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetDetailResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetListResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetProbabilityResponse); \
	DECLARE_FUNCTION(execGetRootBoxRunResponse); \
	DECLARE_FUNCTION(execGetSysAgreeKpiResponse); \
	DECLARE_FUNCTION(execGetSysCheckNgwordResponse); \
	DECLARE_FUNCTION(execGetSysGetEnvResponse); \
	DECLARE_FUNCTION(execGetSysGetEnvV2Response); \
	DECLARE_FUNCTION(execGetSysKpiResponse); \
	DECLARE_FUNCTION(execGetSysOfflineKpiResponse); \
	DECLARE_FUNCTION(execGetTssReadListResponse); \
	DECLARE_FUNCTION(execGetTssReadResponse); \
	DECLARE_FUNCTION(execGetTusReadResponse); \
	DECLARE_FUNCTION(execGetTusWriteResponse); \
	DECLARE_FUNCTION(execGetUserAuthResponse); \
	DECLARE_FUNCTION(execGetUserConvertUserIdResponse); \
	DECLARE_FUNCTION(execGetUserCreateResponse); \
	DECLARE_FUNCTION(execGetUserGetTrackingNumResponse); \
	DECLARE_FUNCTION(execGetUserLinkBnidResponse); \
	DECLARE_FUNCTION(execGetUserLoginResponse); \
	DECLARE_FUNCTION(execGetUserLoginV2Response); \
	DECLARE_FUNCTION(execGiftBoxClose); \
	DECLARE_FUNCTION(execGiftBoxOpen); \
	DECLARE_FUNCTION(execGuildAdd); \
	DECLARE_FUNCTION(execGuildAddApply); \
	DECLARE_FUNCTION(execGuildAddApplyCancel); \
	DECLARE_FUNCTION(execGuildAddApplyList); \
	DECLARE_FUNCTION(execGuildApprovalAdd); \
	DECLARE_FUNCTION(execGuildApprovalList); \
	DECLARE_FUNCTION(execGuildChangeBasePosition); \
	DECLARE_FUNCTION(execGuildChangeLeader); \
	DECLARE_FUNCTION(execGuildCreate); \
	DECLARE_FUNCTION(execGuildEdit); \
	DECLARE_FUNCTION(execGuildEditMemberData); \
	DECLARE_FUNCTION(execGuildExpulsion); \
	DECLARE_FUNCTION(execGuildGetList); \
	DECLARE_FUNCTION(execGuildInfo); \
	DECLARE_FUNCTION(execGuildInvitation); \
	DECLARE_FUNCTION(execGuildInvitationCancel); \
	DECLARE_FUNCTION(execGuildInvitationList); \
	DECLARE_FUNCTION(execGuildInvitedList); \
	DECLARE_FUNCTION(execGuildNotification); \
	DECLARE_FUNCTION(execGuildNotificationSelf); \
	DECLARE_FUNCTION(execGuildPositionPermission); \
	DECLARE_FUNCTION(execGuildSecession); \
	DECLARE_FUNCTION(execGuildSetPosition); \
	DECLARE_FUNCTION(execHugeTssMultiRead); \
	DECLARE_FUNCTION(execHugeTssMultiReadList); \
	DECLARE_FUNCTION(execHugeTssRead); \
	DECLARE_FUNCTION(execHugeTssReadList); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execItemAddOwned); \
	DECLARE_FUNCTION(execItemGetMaster); \
	DECLARE_FUNCTION(execItemGetOwned); \
	DECLARE_FUNCTION(execItemUseOwned); \
	DECLARE_FUNCTION(execLoginBonusComplete); \
	DECLARE_FUNCTION(execLoginBonusGetBonus); \
	DECLARE_FUNCTION(execLoginBonusGetInfo); \
	DECLARE_FUNCTION(execLoginBonusGetList); \
	DECLARE_FUNCTION(execMissionGetList); \
	DECLARE_FUNCTION(execMissionInfo); \
	DECLARE_FUNCTION(execPointCardDelete); \
	DECLARE_FUNCTION(execPointCardInfo); \
	DECLARE_FUNCTION(execPointCardUserList); \
	DECLARE_FUNCTION(execPointGrant); \
	DECLARE_FUNCTION(execPointGrantMissionPoint); \
	DECLARE_FUNCTION(execRankingGetByRange); \
	DECLARE_FUNCTION(execRankingGetByUser); \
	DECLARE_FUNCTION(execRankingGetMaster); \
	DECLARE_FUNCTION(execRankingSetScore); \
	DECLARE_FUNCTION(execRewardEarn); \
	DECLARE_FUNCTION(execRootBoxGetDetail); \
	DECLARE_FUNCTION(execRootBoxGetList); \
	DECLARE_FUNCTION(execRootBoxGetProbability); \
	DECLARE_FUNCTION(execRootBoxRun); \
	DECLARE_FUNCTION(execSavedataDelete); \
	DECLARE_FUNCTION(execSavedataDeleteResponse); \
	DECLARE_FUNCTION(execSavedataDownload); \
	DECLARE_FUNCTION(execSavedataDownloadResponse); \
	DECLARE_FUNCTION(execSavedataMultipartupload); \
	DECLARE_FUNCTION(execSavedataMultipartuploadResponse); \
	DECLARE_FUNCTION(execSavedataUpload); \
	DECLARE_FUNCTION(execSavedataUploadResponse); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSysAgreeKpi); \
	DECLARE_FUNCTION(execSysCheckNgword); \
	DECLARE_FUNCTION(execSysGetEnv); \
	DECLARE_FUNCTION(execSysGetEnvV2); \
	DECLARE_FUNCTION(execSysKpi); \
	DECLARE_FUNCTION(execSysOfflineKpi); \
	DECLARE_FUNCTION(execTssRead); \
	DECLARE_FUNCTION(execTssReadList); \
	DECLARE_FUNCTION(execTusRead); \
	DECLARE_FUNCTION(execTusWrite); \
	DECLARE_FUNCTION(execUserAuth); \
	DECLARE_FUNCTION(execUserConvertUserId); \
	DECLARE_FUNCTION(execUserCreate); \
	DECLARE_FUNCTION(execUserGetTrackingNum); \
	DECLARE_FUNCTION(execUserLinkBnid); \
	DECLARE_FUNCTION(execUserLogin); \
	DECLARE_FUNCTION(execUserLoginV2);


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCampaignGetList); \
	DECLARE_FUNCTION(execCampaignInfo); \
	DECLARE_FUNCTION(execCampaignRewardList); \
	DECLARE_FUNCTION(execCampaignTitleList); \
	DECLARE_FUNCTION(execCatalogGetArea); \
	DECLARE_FUNCTION(execCatalogGetLobby); \
	DECLARE_FUNCTION(execCatalogGetRegion); \
	DECLARE_FUNCTION(execCommonpurchaseCancelPurchase); \
	DECLARE_FUNCTION(execCommonpurchaseCompletePurchase); \
	DECLARE_FUNCTION(execCommonpurchaseGetCatalog); \
	DECLARE_FUNCTION(execCommonpurchaseGetPurchaseStatus); \
	DECLARE_FUNCTION(execCommonpurchaseStartPurchase); \
	DECLARE_FUNCTION(execCommonpurchaseTokusho); \
	DECLARE_FUNCTION(execDataupAppend); \
	DECLARE_FUNCTION(execDataupRead); \
	DECLARE_FUNCTION(execDataupSearch); \
	DECLARE_FUNCTION(execDataupWrite); \
	DECLARE_FUNCTION(execFesAddPoint); \
	DECLARE_FUNCTION(execFesComplete); \
	DECLARE_FUNCTION(execFesGetInfo); \
	DECLARE_FUNCTION(execFesGetList); \
	DECLARE_FUNCTION(execFesGetReward); \
	DECLARE_FUNCTION(execFesJoin); \
	DECLARE_FUNCTION(execGamecurrencyGetLimitedOwned); \
	DECLARE_FUNCTION(execGamecurrencyGetOwned); \
	DECLARE_FUNCTION(execGetCampaignGetListResponse); \
	DECLARE_FUNCTION(execGetCampaignInfoResponse); \
	DECLARE_FUNCTION(execGetCampaignRewardListResponse); \
	DECLARE_FUNCTION(execGetCampaignTitleListResponse); \
	DECLARE_FUNCTION(execGetCatalogGetAreaResponse); \
	DECLARE_FUNCTION(execGetCatalogGetLobbyResponse); \
	DECLARE_FUNCTION(execGetCatalogGetRegionResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseCancelPurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseCompletePurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseGetCatalogResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseGetPurchaseStatusResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseStartPurchaseResponse); \
	DECLARE_FUNCTION(execGetCommonpurchaseTokushoResponse); \
	DECLARE_FUNCTION(execGetDataupAppendResponse); \
	DECLARE_FUNCTION(execGetDataupReadResponse); \
	DECLARE_FUNCTION(execGetDataupSearchResponse); \
	DECLARE_FUNCTION(execGetDataupWriteResponse); \
	DECLARE_FUNCTION(execGetFesAddPointResponse); \
	DECLARE_FUNCTION(execGetFesCompleteResponse); \
	DECLARE_FUNCTION(execGetFesGetInfoResponse); \
	DECLARE_FUNCTION(execGetFesGetListResponse); \
	DECLARE_FUNCTION(execGetFesGetRewardResponse); \
	DECLARE_FUNCTION(execGetFesJoinResponse); \
	DECLARE_FUNCTION(execGetGamecurrencyGetLimitedOwnedResponse); \
	DECLARE_FUNCTION(execGetGamecurrencyGetOwnedResponse); \
	DECLARE_FUNCTION(execGetGiftBoxCloseResponse); \
	DECLARE_FUNCTION(execGetGiftBoxOpenResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyCancelResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyListResponse); \
	DECLARE_FUNCTION(execGetGuildAddApplyResponse); \
	DECLARE_FUNCTION(execGetGuildAddResponse); \
	DECLARE_FUNCTION(execGetGuildApprovalAddResponse); \
	DECLARE_FUNCTION(execGetGuildApprovalListResponse); \
	DECLARE_FUNCTION(execGetGuildChangeBasePositionResponse); \
	DECLARE_FUNCTION(execGetGuildChangeLeaderResponse); \
	DECLARE_FUNCTION(execGetGuildCreateResponse); \
	DECLARE_FUNCTION(execGetGuildEditMemberDataResponse); \
	DECLARE_FUNCTION(execGetGuildEditResponse); \
	DECLARE_FUNCTION(execGetGuildExpulsionResponse); \
	DECLARE_FUNCTION(execGetGuildGetListResponse); \
	DECLARE_FUNCTION(execGetGuildInfoResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationCancelResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationListResponse); \
	DECLARE_FUNCTION(execGetGuildInvitationResponse); \
	DECLARE_FUNCTION(execGetGuildInvitedListResponse); \
	DECLARE_FUNCTION(execGetGuildNotificationResponse); \
	DECLARE_FUNCTION(execGetGuildNotificationSelfResponse); \
	DECLARE_FUNCTION(execGetGuildPositionPermissionResponse); \
	DECLARE_FUNCTION(execGetGuildSecessionResponse); \
	DECLARE_FUNCTION(execGetGuildSetPositionResponse); \
	DECLARE_FUNCTION(execGetHugeTssMultiReadListResponse); \
	DECLARE_FUNCTION(execGetHugeTssMultiReadResponse); \
	DECLARE_FUNCTION(execGetHugeTssReadListResponse); \
	DECLARE_FUNCTION(execGetHugeTssReadResponse); \
	DECLARE_FUNCTION(execGetItemAddOwnedResponse); \
	DECLARE_FUNCTION(execGetItemGetMasterResponse); \
	DECLARE_FUNCTION(execGetItemGetOwnedResponse); \
	DECLARE_FUNCTION(execGetItemUseOwnedResponse); \
	DECLARE_FUNCTION(execGetLoginBonusCompleteResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetBonusResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetInfoResponse); \
	DECLARE_FUNCTION(execGetLoginBonusGetListResponse); \
	DECLARE_FUNCTION(execGetMissionGetListResponse); \
	DECLARE_FUNCTION(execGetMissionInfoResponse); \
	DECLARE_FUNCTION(execGetPointCardDeleteResponse); \
	DECLARE_FUNCTION(execGetPointCardInfoResponse); \
	DECLARE_FUNCTION(execGetPointCardUserListResponse); \
	DECLARE_FUNCTION(execGetPointGrantMissionPointResponse); \
	DECLARE_FUNCTION(execGetPointGrantResponse); \
	DECLARE_FUNCTION(execGetRankingGetByRangeResponse); \
	DECLARE_FUNCTION(execGetRankingGetByUserResponse); \
	DECLARE_FUNCTION(execGetRankingGetMasterResponse); \
	DECLARE_FUNCTION(execGetRankingSetScoreResponse); \
	DECLARE_FUNCTION(execGetRewardEarnResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetDetailResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetListResponse); \
	DECLARE_FUNCTION(execGetRootBoxGetProbabilityResponse); \
	DECLARE_FUNCTION(execGetRootBoxRunResponse); \
	DECLARE_FUNCTION(execGetSysAgreeKpiResponse); \
	DECLARE_FUNCTION(execGetSysCheckNgwordResponse); \
	DECLARE_FUNCTION(execGetSysGetEnvResponse); \
	DECLARE_FUNCTION(execGetSysGetEnvV2Response); \
	DECLARE_FUNCTION(execGetSysKpiResponse); \
	DECLARE_FUNCTION(execGetSysOfflineKpiResponse); \
	DECLARE_FUNCTION(execGetTssReadListResponse); \
	DECLARE_FUNCTION(execGetTssReadResponse); \
	DECLARE_FUNCTION(execGetTusReadResponse); \
	DECLARE_FUNCTION(execGetTusWriteResponse); \
	DECLARE_FUNCTION(execGetUserAuthResponse); \
	DECLARE_FUNCTION(execGetUserConvertUserIdResponse); \
	DECLARE_FUNCTION(execGetUserCreateResponse); \
	DECLARE_FUNCTION(execGetUserGetTrackingNumResponse); \
	DECLARE_FUNCTION(execGetUserLinkBnidResponse); \
	DECLARE_FUNCTION(execGetUserLoginResponse); \
	DECLARE_FUNCTION(execGetUserLoginV2Response); \
	DECLARE_FUNCTION(execGiftBoxClose); \
	DECLARE_FUNCTION(execGiftBoxOpen); \
	DECLARE_FUNCTION(execGuildAdd); \
	DECLARE_FUNCTION(execGuildAddApply); \
	DECLARE_FUNCTION(execGuildAddApplyCancel); \
	DECLARE_FUNCTION(execGuildAddApplyList); \
	DECLARE_FUNCTION(execGuildApprovalAdd); \
	DECLARE_FUNCTION(execGuildApprovalList); \
	DECLARE_FUNCTION(execGuildChangeBasePosition); \
	DECLARE_FUNCTION(execGuildChangeLeader); \
	DECLARE_FUNCTION(execGuildCreate); \
	DECLARE_FUNCTION(execGuildEdit); \
	DECLARE_FUNCTION(execGuildEditMemberData); \
	DECLARE_FUNCTION(execGuildExpulsion); \
	DECLARE_FUNCTION(execGuildGetList); \
	DECLARE_FUNCTION(execGuildInfo); \
	DECLARE_FUNCTION(execGuildInvitation); \
	DECLARE_FUNCTION(execGuildInvitationCancel); \
	DECLARE_FUNCTION(execGuildInvitationList); \
	DECLARE_FUNCTION(execGuildInvitedList); \
	DECLARE_FUNCTION(execGuildNotification); \
	DECLARE_FUNCTION(execGuildNotificationSelf); \
	DECLARE_FUNCTION(execGuildPositionPermission); \
	DECLARE_FUNCTION(execGuildSecession); \
	DECLARE_FUNCTION(execGuildSetPosition); \
	DECLARE_FUNCTION(execHugeTssMultiRead); \
	DECLARE_FUNCTION(execHugeTssMultiReadList); \
	DECLARE_FUNCTION(execHugeTssRead); \
	DECLARE_FUNCTION(execHugeTssReadList); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execItemAddOwned); \
	DECLARE_FUNCTION(execItemGetMaster); \
	DECLARE_FUNCTION(execItemGetOwned); \
	DECLARE_FUNCTION(execItemUseOwned); \
	DECLARE_FUNCTION(execLoginBonusComplete); \
	DECLARE_FUNCTION(execLoginBonusGetBonus); \
	DECLARE_FUNCTION(execLoginBonusGetInfo); \
	DECLARE_FUNCTION(execLoginBonusGetList); \
	DECLARE_FUNCTION(execMissionGetList); \
	DECLARE_FUNCTION(execMissionInfo); \
	DECLARE_FUNCTION(execPointCardDelete); \
	DECLARE_FUNCTION(execPointCardInfo); \
	DECLARE_FUNCTION(execPointCardUserList); \
	DECLARE_FUNCTION(execPointGrant); \
	DECLARE_FUNCTION(execPointGrantMissionPoint); \
	DECLARE_FUNCTION(execRankingGetByRange); \
	DECLARE_FUNCTION(execRankingGetByUser); \
	DECLARE_FUNCTION(execRankingGetMaster); \
	DECLARE_FUNCTION(execRankingSetScore); \
	DECLARE_FUNCTION(execRewardEarn); \
	DECLARE_FUNCTION(execRootBoxGetDetail); \
	DECLARE_FUNCTION(execRootBoxGetList); \
	DECLARE_FUNCTION(execRootBoxGetProbability); \
	DECLARE_FUNCTION(execRootBoxRun); \
	DECLARE_FUNCTION(execSavedataDelete); \
	DECLARE_FUNCTION(execSavedataDeleteResponse); \
	DECLARE_FUNCTION(execSavedataDownload); \
	DECLARE_FUNCTION(execSavedataDownloadResponse); \
	DECLARE_FUNCTION(execSavedataMultipartupload); \
	DECLARE_FUNCTION(execSavedataMultipartuploadResponse); \
	DECLARE_FUNCTION(execSavedataUpload); \
	DECLARE_FUNCTION(execSavedataUploadResponse); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSysAgreeKpi); \
	DECLARE_FUNCTION(execSysCheckNgword); \
	DECLARE_FUNCTION(execSysGetEnv); \
	DECLARE_FUNCTION(execSysGetEnvV2); \
	DECLARE_FUNCTION(execSysKpi); \
	DECLARE_FUNCTION(execSysOfflineKpi); \
	DECLARE_FUNCTION(execTssRead); \
	DECLARE_FUNCTION(execTssReadList); \
	DECLARE_FUNCTION(execTusRead); \
	DECLARE_FUNCTION(execTusWrite); \
	DECLARE_FUNCTION(execUserAuth); \
	DECLARE_FUNCTION(execUserConvertUserId); \
	DECLARE_FUNCTION(execUserCreate); \
	DECLARE_FUNCTION(execUserGetTrackingNum); \
	DECLARE_FUNCTION(execUserLinkBnid); \
	DECLARE_FUNCTION(execUserLogin); \
	DECLARE_FUNCTION(execUserLoginV2);


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebApiConnect(); \
	friend struct Z_Construct_UClass_UWebApiConnect_Statics; \
public: \
	DECLARE_CLASS(UWebApiConnect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CosmosWebApi"), NO_API) \
	DECLARE_SERIALIZER(UWebApiConnect)


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUWebApiConnect(); \
	friend struct Z_Construct_UClass_UWebApiConnect_Statics; \
public: \
	DECLARE_CLASS(UWebApiConnect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CosmosWebApi"), NO_API) \
	DECLARE_SERIALIZER(UWebApiConnect)


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebApiConnect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebApiConnect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebApiConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebApiConnect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebApiConnect(UWebApiConnect&&); \
	NO_API UWebApiConnect(const UWebApiConnect&); \
public:


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebApiConnect(UWebApiConnect&&); \
	NO_API UWebApiConnect(const UWebApiConnect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebApiConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebApiConnect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebApiConnect)


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_89_PROLOG
#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_SPARSE_DATA \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_RPC_WRAPPERS \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_INCLASS \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_SPARSE_DATA \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COSMOSWEBAPI_API UClass* StaticClass<class UWebApiConnect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_WebApiConnect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
