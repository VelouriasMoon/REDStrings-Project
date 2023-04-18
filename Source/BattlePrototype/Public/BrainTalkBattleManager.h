#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BrainTalkBattle_ConditionsParam.h"
#include "BrainTalkBt_AttackEnShell.h"
#include "BrainTalkBt_AttackEnWeak.h"
#include "BrainTalkBt_BFActivate.h"
#include "BrainTalkBt_BadStateByEn.h"
#include "BrainTalkBt_BadStateForEn.h"
#include "BrainTalkBt_BattleEscape.h"
#include "BrainTalkBt_BattleSim_BattleStart.h"
#include "BrainTalkBt_BattleSim_BattleStart_ENPC.h"
#include "BrainTalkBt_BattleSim_BattleStart_RevivalBoss.h"
#include "BrainTalkBt_BirthKizunaEp.h"
#include "BrainTalkBt_BrainCrashByEn.h"
#include "BrainTalkBt_ClearQuest.h"
#include "BrainTalkBt_DamageTakeOver.h"
#include "BrainTalkBt_DeadInarow.h"
#include "BrainTalkBt_DestroyShell.h"
#include "BrainTalkBt_DiscEn.h"
#include "BrainTalkBt_DiscQuestEnemy.h"
#include "BrainTalkBt_DiscSasValidEn.h"
#include "BrainTalkBt_DiscStealth.h"
#include "BrainTalkBt_DiscStrEn.h"
#include "BrainTalkBt_DispCrashTrg.h"
#include "BrainTalkBt_DriveActive.h"
#include "BrainTalkBt_DriveActiveFriend.h"
#include "BrainTalkBt_DriveGaugeMax.h"
#include "BrainTalkBt_EnBerserk.h"
#include "BrainTalkBt_EnBerserkSign.h"
#include "BrainTalkBt_EnableSAS_DriveActivationFriend.h"
#include "BrainTalkBt_EnemyDown.h"
#include "BrainTalkBt_EnemyDrop.h"
#include "BrainTalkBt_EquipStrongestWeapon.h"
#include "BrainTalkBt_FirstStrike.h"
#include "BrainTalkBt_GatherPoint.h"
#include "BrainTalkBt_GetItem.h"
#include "BrainTalkBt_GetQuestTgtItem.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithAjito.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithAjito_GroupLotteryTable.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithAjito_ItemLotteryTable.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithField.h"
#include "BrainTalkBt_GiveItemsFromFriendsWithField_ItemLotteryTable.h"
#include "BrainTalkBt_HiKizunaEffect.h"
#include "BrainTalkBt_Hp30p.h"
#include "BrainTalkBt_InvalidProgressID.h"
#include "BrainTalkBt_JumpOff.h"
#include "BrainTalkBt_KillAllEnForPL.h"
#include "BrainTalkBt_KillAllEnForPT.h"
#include "BrainTalkBt_KillAllEnManyEn.h"
#include "BrainTalkBt_KillAllEnManyWeakEn.h"
#include "BrainTalkBt_KillAllEnShortTime.h"
#include "BrainTalkBt_KillAllEnStrEn.h"
#include "BrainTalkBt_KillByEn.h"
#include "BrainTalkBt_KillEnRest.h"
#include "BrainTalkBt_KillEnStrategy.h"
#include "BrainTalkBt_KillEnemyBC.h"
#include "BrainTalkBt_KillQuestTgtEn.h"
#include "BrainTalkBt_KizunaLvUp.h"
#include "BrainTalkBt_LvUp.h"
#include "BrainTalkBt_LvUp_PL.h"
#include "BrainTalkBt_NearCC.h"
#include "BrainTalkBt_NoSallyTimes.h"
#include "BrainTalkBt_OilEnAtkFire.h"
#include "BrainTalkBt_OsoroiAttachment.h"
#include "BrainTalkBt_PLChangeAttachment.h"
#include "BrainTalkBt_PLDead.h"
#include "BrainTalkBt_PTChangeAttachment.h"
#include "BrainTalkBt_PsychicCombo.h"
#include "BrainTalkBt_QuestNpcNearbyCanBeOrdered.h"
#include "BrainTalkBt_Recovery.h"
#include "BrainTalkBt_RecoveryAbToPL.h"
#include "BrainTalkBt_RecoveryHpToPL.h"
#include "BrainTalkBt_RecoveryItemZero.h"
#include "BrainTalkBt_ReturnToTheAjito.h"
#include "BrainTalkBt_Revival.h"
#include "BrainTalkBt_SallyTimes.h"
#include "BrainTalkBt_SasCombo.h"
#include "BrainTalkBt_SasContinuity.h"
#include "BrainTalkBt_SasHoloPossible.h"
#include "BrainTalkBt_SasHoloPursuit.h"
#include "BrainTalkBt_SasNoUse.h"
#include "BrainTalkBt_StealthLosePL.h"
#include "BrainTalkBt_TouchBFWall.h"
#include "BrainTalkBt_UnopenedTreasure.h"
#include "BrainTalkBt_WaitingVoice.h"
#include "BrainTalkBt_WataruHarukaExistenceProgressID.h"
#include "BrainTalkBt_WaterEnAtkElectric.h"
#include "BrainTalkCh_InvalidProgressID.h"
#include "BrainTalkEm_ConditionParam.h"
#include "BrainTalkGimmick_ConditionParam.h"
#include "BrainTalkOnceCheck_Category.h"
#include "BrainTalkTutorial_ConditionParam.h"
#include "EBrainTalkChGroup.h"
#include "EBrainTalkKizunaLvUpFlow.h"
#include "EPlayerID.h"
#include "SystemBrainTalkManageStructParam.h"
#include "BrainTalkBattleManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainTalkBattleManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemBrainTalkManageStructParam> m_BrainTalkSystemConditionManageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemBrainTalkManageStructParam> m_BrainTalkEnemyConditionManageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemBrainTalkManageStructParam> m_BrainTalkTutorialConditionManageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemBrainTalkManageStructParam> m_BrainTalkGimmickConditionManageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkOnceCheck_Category m_BrainTalkOnceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_WataruHarukaExistenceProgressID> m_BrainTalkBt_WataruHarukaNoExistenceProgressIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_InvalidProgressID> m_BrainTalkBt_InvalidProgressIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkCh_InvalidProgressID> m_BrainTalkCh_InvalidProgressIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBrainTalkChGroup> m_BrainTalkCharacterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_Hp30p> m_BrainTalkBt_Hp30pList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_Hp30pList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillByEn> m_BrainTalkBt_KillByEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillByEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BrainCrashByEn> m_BrainTalkBt_BrainCrashByEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BrainCrashByEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BadStateByEn> m_BrainTalkBt_BadStateByEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BadStateByEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BadStateForEn> m_BrainTalkBt_BadStateForEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BadStateForEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_Recovery> m_BrainTalkBt_RecoveryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_RecoveryList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_Revival> m_BrainTalkBt_RevivalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_RevivalList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BFActivate> m_BrainTalkBt_BFActivateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BFActivateList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SasCombo> m_BrainTalkBt_SasComboList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SasComboList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_PsychicCombo> m_BrainTalkBt_PsychicComboList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_PsychicComboList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DriveActive> m_BrainTalkBt_DriveActiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DriveActiveList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_HiKizunaEffect> m_BrainTalkBt_HiKizunaEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_HiKizunaEffectList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_TouchBFWall> m_BrainTalkBt_TouchBFWallList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_TouchBFWallList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_NearCC> m_BrainTalkBt_NearCCList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_NearCCList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BattleEscape> m_BrainTalkBt_BattleEscapeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BattleEscapeList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KizunaLvUp> m_BrainTalkBt_KizunaLvUpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KizunaLvUpList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrainTalkKizunaLvUpFlow m_KizunaLvUpFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_KizunaLvUpReplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> m_KizunaLvUpReplayPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DamageTakeOver> m_BrainTalkBt_DamageTakeOverList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DamageTakeOverList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_LvUp> m_BrainTalkBt_LvUpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_LvUpList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DeadInarow> m_BrainTalkBt_DeadInarowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DeadInarowList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SallyTimes> m_BrainTalkBt_SallyTimesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SallyTimesList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_NoSallyTimes> m_BrainTalkBt_NoSallyTimesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_NoSallyTimesList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_JumpOff> m_BrainTalkBt_JumpOffList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_JumpOffList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_PLChangeAttachment> m_BrainTalkBt_PLChangeAttachmentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_PLChangeAttachmentList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_PLDead> m_BrainTalkBt_PLDeadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_PLDeadList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillEnRest> m_BrainTalkBt_KillEnRestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillEnRestList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnForPT> m_BrainTalkBt_KillAllEnForPTList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnForPTList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnForPL> m_BrainTalkBt_KillAllEnForPLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnForPLList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnShortTime> m_BrainTalkBt_KillAllEnShortTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnShortTimeList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnStrEn> m_BrainTalkBt_KillAllEnStrEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnStrEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnManyEn> m_BrainTalkBt_KillAllEnManyEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnManyEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillAllEnManyWeakEn> m_BrainTalkBt_KillAllEnManyWeakEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillAllEnManyWeakEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillEnStrategy> m_BrainTalkBt_KillEnStrategyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillEnStrategyList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DiscStrEn> m_BrainTalkBt_DiscStrEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DiscStrEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DestroyShell> m_BrainTalkBt_DestroyShellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DestroyShellList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EnemyDown> m_BrainTalkBt_EnemyDownList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EnemyDownList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DiscEn> m_BrainTalkBt_DiscEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DiscEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DispCrashTrg> m_BrainTalkBt_DispCrashTrgList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DispCrashTrgList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillEnemyBC> m_BrainTalkBt_KillEnemyBCList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillEnemyBCList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EnBerserkSign> m_BrainTalkBt_EnBerserkSignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EnBerserkSignList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EnBerserk> m_BrainTalkBt_EnBerserkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EnBerserkList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_AttackEnShell> m_BrainTalkBt_AttackEnShellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_AttackEnShellList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_AttackEnWeak> m_BrainTalkBt_AttackEnWeakList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_AttackEnWeakList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_FirstStrike> m_BrainTalkBt_FirstStrikeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_FirstStrikeList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_OilEnAtkFire> m_BrainTalkBt_OilEnAtkFireList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_OilEnAtkFireList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_WaterEnAtkElectric> m_BrainTalkBt_WaterEnAtkElectricList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_WaterEnAtkElectricList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DiscStealth> m_BrainTalkBt_DiscStealthList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DiscStealthList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DiscSasValidEn> m_BrainTalkBt_DiscSasValidEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DiscSasValidEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_StealthLosePL> m_BrainTalkBt_StealthLosePLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_StealthLosePLList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SasNoUse> m_BrainTalkBt_SasNoUseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SasNoUseList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SasContinuity> m_BrainTalkBt_SasContinuityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SasContinuityList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SasHoloPossible> m_BrainTalkBt_SasHoloPossibleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SasHoloPossibleList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_SasHoloPursuit> m_BrainTalkBt_SasHoloPursuitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_SasHoloPursuitList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GetItem> m_BrainTalkBt_GetItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_GetItemList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EnemyDrop> m_BrainTalkBt_EnemyDropList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EnemyDropList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_UnopenedTreasure> m_BrainTalkBt_UnopenedTreasureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_UnopenedTreasureList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GatherPoint> m_BrainTalkBt_GatherPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_GatherPointList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_RecoveryItemZero> m_BrainTalkBt_RecoveryItemZeroList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_RecoveryItemZeroList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DiscQuestEnemy> m_BrainTalkBt_DiscQuestEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DiscQuestEnemyList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_ClearQuest> m_BrainTalkBt_ClearQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_ClearQuestList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BirthKizunaEp> m_BrainTalkBt_BirthKizunaEpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> m_BrainTalkBt_BirthKizunaEp_FadePlayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BirthKizunaEpList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_KillQuestTgtEn> m_BrainTalkBt_KillQuestTgtEnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_KillQuestTgtEnList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GetQuestTgtItem> m_BrainTalkBt_GetQuestTgtItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_GetQuestTgtItemList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_PTChangeAttachment> m_BrainTalkBt_PTChangeAttachmentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_PTChangeAttachmentList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DriveGaugeMax> m_BrainTalkBt_DriveGaugeMaxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DriveGaugeMaxList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EquipStrongestWeapon> m_BrainTalkBt_EquipStrongestWeaponList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EquipStrongestWeaponList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_WaitingVoice> m_BrainTalkBt_WaitingVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_WaitingVoiceList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_RecoveryHpToPL> m_BrainTalkBt_RecoveryHpToPLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_RecoveryHpToPLList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_RecoveryAbToPL> m_BrainTalkBt_RecoveryAbToPLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_RecoveryAbToPLList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_OsoroiAttachment> m_BrainTalkBt_OsoroiAttachmentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_OsoroiAttachmentList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_BrainTalkBt_OsoroiAttachment_BeforePlayTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_LvUp_PL> m_BrainTalkBt_LvUp_PLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_LvUp_PLList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_QuestNpcNearbyCanBeOrdered> m_BrainTalkBt_QuestNpcNearbyCanBeOrderedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_QuestNpcNearbyCanBeOrderedList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_DriveActiveFriend> m_BrainTalkBt_DriveActiveFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_DriveActiveFriendList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_EnableSAS_DriveActivationFriend> m_BrainTalkBt_EnableSAS_DriveActivationFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_EnableSAS_DriveActivationFriendList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BattleSim_BattleStart> m_BrainTalkBt_BattleSim_BattleStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BattleSim_BattleStartList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BattleSim_BattleStart_ENPC> m_BrainTalkBt_BattleSim_BattleStart_ENPCList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BattleSim_BattleStart_ENPCList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_ReturnToTheAjito> m_BrainTalkBt_ReturnToTheAjitoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_ReturnToTheAjitoList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GiveItemsFromFriendsWithAjito> m_BrainTalkBt_GiveItemsFromFriendsWithAjitoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_GiveItemsFromFriendsWithAjitoList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GiveItemsFromFriendsWithAjito_GroupLotteryTable> m_BrainTalkBt_GiveItemsFromFriendsWithAjito_GroupLotteryTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GiveItemsFromFriendsWithAjito_ItemLotteryTable> m_BrainTalkBt_GiveItemsFromFriendsWithAjito_ItemLotteryTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GiveItemsFromFriendsWithField> m_BrainTalkBt_GiveItemsFromFriendsWithFieldList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_GiveItemsFromFriendsWithFieldList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_GiveItemsFromFriendsWithField_ItemLotteryTable> m_BrainTalkBt_GiveItemsFromFriendsWithField_ItemLotteryTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_BrainTalkBt_GiveItemsFromFriendsWithField_CharacterEaseOfSelectionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_BattleSim_BattleStart_RevivalBoss> m_BrainTalkBt_BattleSim_BattleStart_RevivalBossList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkBattle_ConditionsParam m_BrainTalkBt_BattleSim_BattleStart_RevivalBossList_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkEm_ConditionParam> m_BrainTalkEm_ConditionParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkTutorial_ConditionParam> m_BrainTalkTutorial_ConditionParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkGimmick_ConditionParam> m_BrainTalkGimmick_ConditionParamList;
    
public:
    UBrainTalkBattleManager();
};

