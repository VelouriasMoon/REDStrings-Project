#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericPlatform/GenericWindow.h"
#include "EAttackAutoLockOn.h"
#include "EAttackDirOrtho.h"
#include "EAttackDirOrthoLockon.h"
#include "EBattleSimulatorRank.h"
#include "ECameraAfterMoveType.h"
#include "ECameraDistance.h"
#include "EConsumeItemID.h"
#include "EEventMessageAutoPlay.h"
#include "EFPSType.h"
#include "EGradualQuality.h"
#include "ELetterSize.h"
#include "ELockonActionType.h"
#include "EOptionAAQuality.h"
#include "EOptionCameraPitch.h"
#include "EOptionCameraYaw.h"
#include "EOptionControllerVibration.h"
#include "EOptionDisplayEnemyDamage.h"
#include "EOptionMinimapDisplay.h"
#include "EOptionMinimapRotation.h"
#include "EOptionMinimapScaling.h"
#include "EPlayerID.h"
#include "EPlayerSkill.h"
#include "ERSGamepadInputName.h"
#include "ESASCutin.h"
#include "ETargetCameraTrace.h"
#include "ETextLanguage.h"
#include "HCGameDifficulty.h"
#include "CosmosWebManagerUtility.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCosmosWebManagerUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCosmosWebManagerUtility();
    UFUNCTION(BlueprintCallable)
    static void CosmosStartMenu();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosStartIngame();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosStartEvent();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosStartBossBattle(const FString& bossName);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosStartBattle();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CosmosSendKpiParamStartGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParamNextPhase();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParamMapChange();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParamGameover();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParamAtFirst();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParamAfterSave();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiParam();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg9_PlayedPhases(FName Location);
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg9_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg8_PlayedPhases(int32 driveModeActivation_num, int32 driveModeActivation_time);
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg8_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg7_PlayedPhases(FName Location);
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg7_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg6_PlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg6_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg5_KizunaLevel(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg4_PresentInfo(EPlayerID members_id, FName present_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg3_TeamKizunaEpisodeInfo(const FString& team_kizuna_episode_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg3_KizunaEpisodeInfo(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg21_GameVoice(ETextLanguage textLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg1_LapInfo(EPlayerID character_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg19_PlayedPhases(FName Location);
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg19_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg17_ShopVisits();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg17_ShopsUsed(int32 Status, FName Item);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg16_PlayedPhases(EPlayerSkill skill_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg14_Graphic(bool isVerticalSyncOff, EOptionAAQuality antiAliasingQuality, EGradualQuality textureQuality, EGradualQuality shadowQuality, EGradualQuality postQuality, TEnumAsByte<EWindowMode::Type> windowMode, EFPSType fpsType);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg14_Controller(ERSGamepadInputName weaponAttack, ERSGamepadInputName Jump, ERSGamepadInputName strafeAndDash, ERSGamepadInputName specialAttack, ERSGamepadInputName activateSASMenu, ERSGamepadInputName enableComboVisionMenu, ERSGamepadInputName PKAttack, ERSGamepadInputName specialObjectAndBrainCrush, ELockonActionType changeLockOnTarget, ERSGamepadInputName susConvinationVision);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg14_Config(HCGameDifficulty difficult_id, EAttackAutoLockOn attackAutoLockOn, ETargetCameraTrace targetCameraTrace, ECameraAfterMoveType cameraAfterMoveType, EOptionDisplayEnemyDamage dispEnemyDamage, EOptionMinimapDisplay minimapDisplay, EOptionMinimapRotation minimapRotation, EOptionMinimapScaling minimapScaling, EEventMessageAutoPlay messageAutoPlay, uint8 cameraSpeed, EOptionCameraPitch cameraPitch, EOptionCameraYaw cameraYaw, EOptionControllerVibration vibration, EAttackDirOrtho AttackDirOrtho, EAttackDirOrthoLockon AttackDirOrthoLockon, ECameraDistance CameraDistance, uint8 cameraTrackingSpeed, ESASCutin SASCutin, bool brainCrash, ELetterSize textSize, uint8 lockOnCameraSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg14_Brightness(float Brightness);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_Weapon();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_Plugin();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg13_IsDirtyCostume();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg13_IsDirtyAttachment();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_Costume();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_BackupCostume();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_BackupAttachment();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg13_Attachment();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg10_Retry();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg10_ItemsUsed();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpiOrg10_IsDirtyItemsUsed();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg10_GameOver(int32 gameOverState);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpiOrg10_Avoidance(int32 avoidancestate_0type_cnt, int32 avoidancestate_1type_cnt, int32 avoidancestate_2type_cnt, int32 avoidancestate_3type_cnt, int32 avoidancestate_4type_cnt);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi7_Quest(FName sub_quest_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi7_Progress();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi7_PlayedQuestLevel(FName sub_quest_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi7_PlayedPhaseLevel();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi7_Ending();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi5_TimePlayed();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi5_ResetTimePlayed();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpi5_IsDirtyTimePlayed();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi338_PhotoMode();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi325_VisionSimulator(int32 MissionId, EBattleSimulatorRank TotalScore, EBattleSimulatorRank gaveDamageScore, EBattleSimulatorRank takenDamage, EBattleSimulatorRank brainCrashNumScore, EBattleSimulatorRank itemsusedNumScore, EBattleSimulatorRank cleartimeScore, int32 enemyKillNum);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi324_AjitoTogetherSafeHouseMembers(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi324_AjitoTogetherSafeHouseCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi324_AjitoTogether(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi296_ExSAS(EPlayerID members_id, int32 exSAS_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi295_TwoShotPhotoReceipt(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi295_MatchingAttachmentReceipt(FName attachment_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi295_FellowItemSarchingReceipt(const FString& item_id, EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi295_FellowItemReceipt(const FString& item_id, EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi295_BirthdayMessage(EPlayerID members_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi294_ChallengeClearTime(int32 challenge_id, int32 clear_time, int32 item_count, bool isNotItemCount);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi294_ChallengeClearNormal(int32 challenge_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi294_ChallengeClearItem(int32 challenge_id, int32 clear_time, int32 item_count);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi293_DLCUpdate();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi292_AnimationInterlocking(int32 episode_id);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi289_UpgradeVer2();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi289_Upgrade();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi22_GameLanguage();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CosmosSendKpi17_Sale(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi16_PlayedPhasesSelectedMembers();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpi16_IsDirtyPlayedPhasesSelectedMembers();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi14_PlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpi14_IsDirtyPlayedPhases();
    
    UFUNCTION(BlueprintCallable)
    static bool CosmosSendKpi10_IsDirtyCurrencyCirculation();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendKpi10_CurrencyCirculation();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosSendedAtOnce();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosResetSendedAtOnce();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosResetKpiParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CosmosIsSendedAtOnce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CosmosGetPlatformUserID(APlayerController* PlayerController, FString& PlatformUserID, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosEndMenu();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosEndIngame();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosEndEvent();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosEndBossBattle();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosEndBattle();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosClearParam();
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg9_PlayedPhases(EPlayerID members_id, int32 supportType, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg8_PlayedPhases(int32 enemySubjugation_cnt, int32 enemySubjugation_brainCrash_0type_cnt, int32 enemySubjugation_brainCrash_1type_cnt);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg7_PlayedPhases(int32 brainCrash_type, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg6_PlayedPhases(EPlayerID members_id, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg19_PlayedPhases(int32 brainSpaceActivation_cnt);
    
    UFUNCTION(BlueprintCallable)
    static void CosmosAddKpiOrg10_ItemsUsed(EConsumeItemID item_id, int32 Num);
    
};

