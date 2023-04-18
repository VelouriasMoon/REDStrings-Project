#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkBtCondition.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkBtCondition : uint8 {
    Dummy_0,
    BrainTalkBt_Hp30p,
    BrainTalkBt_KillByEn,
    BrainTalkBt_BrainCrashByEn,
    BrainTalkBt_BadStateByEn,
    Dummy_5,
    Dummy_6,
    Dummy_7,
    Dummy_8,
    BrainTalkBt_Recovery,
    BrainTalkBt_Revival_FromPL,
    BrainTalkBt_Revival_ToPL,
    BrainTalkBt_BFActivate,
    BrainTalkBt_SasCombo,
    BrainTalkBt_PsychicCombo,
    BrainTalkBt_DriveActive,
    BrainTalkBt_HiKizunaEffect,
    BrainTalkBt_TouchBFWall,
    BrainTalkBt_NearCC,
    BrainTalkBt_BattleEscape,
    BrainTalkBt_KizunaLvUp,
    BrainTalkBt_DamageTakeOver,
    BrainTalkBt_LvUp,
    BrainTalkBt_DeadInarow,
    BrainTalkBt_SallyTimes,
    BrainTalkBt_NoSallyTimes,
    BrainTalkBt_JumpOff,
    BrainTalkBt_PLChangeAttachment,
    BrainTalkBt_PLDead,
    BrainTalkBt_KillEnRest,
    BrainTalkBt_KillAllEnForPT,
    BrainTalkBt_DiscStrEn,
    BrainTalkBt_DestroyShell,
    BrainTalkBt_EnemyDown,
    BrainTalkBt_DiscEn,
    BrainTalkBt_DispCrashTrg,
    BrainTalkBt_KillEnemyBC,
    BrainTalkBt_BadStateForEn,
    Dummy_38,
    Dummy_39,
    Dummy_40,
    Dummy_41,
    BrainTalkBt_EnBerserkSign,
    BrainTalkBt_EnBerserk,
    BrainTalkBt_AttackEnShell,
    BrainTalkBt_AttackEnWeak,
    BrainTalkBt_FirstStrike,
    BrainTalkBt_OilEnAtkFire,
    BrainTalkBt_WaterEnAtkElectric,
    BrainTalkBt_KillAllEnShortTime,
    BrainTalkBt_KillAllEnStrEn,
    BrainTalkBt_KillAllEnManyEn,
    BrainTalkBt_KillAllEnManyWeakEn,
    BrainTalkBt_KillAllEnForPL,
    BrainTalkBt_KillEnStrategy,
    BrainTalkBt_DiscStealth,
    BrainTalkBt_DiscSasValidEn_Fire,
    BrainTalkBt_DiscSasValidEn_Electric,
    BrainTalkBt_DiscSasValidEn_Metal,
    BrainTalkBt_DiscSasValidEn_Telepo,
    BrainTalkBt_DiscSasValidEn_Stealth,
    BrainTalkBt_DiscSasValidEn_Accelerator,
    BrainTalkBt_DiscSasValidEn_Copy,
    BrainTalkBt_DiscSasValidEn_SeeThrough,
    BrainTalkBt_StealthLosePL,
    BrainTalkBt_SasNoUse,
    BrainTalkBt_SasContinuity,
    BrainTalkBt_SasHoloPossible,
    BrainTalkBt_SasHoloPursuit,
    BrainTalkBt_GetItem,
    Dummy_70,
    BrainTalkBt_EnemyDrop,
    Dummy_72,
    BrainTalkBt_UnopenedTreasure,
    BrainTalkBt_GatherPoint,
    BrainTalkBt_RecoveryItemZero,
    BrainTalkBt_DiscQuestEnemy,
    BrainTalkBt_ClearQuest,
    BrainTalkBt_BirthKizunaEp,
    BrainTalkBt_KillQuestTgtEn,
    BrainTalkBt_GetQuestTgtItem,
    BrainTalkBt_PTChangeAttachment,
    BrainTalkBt_DriveGaugeMax,
    BrainTalkBt_EquipStrongestWeapon,
    BrainTalkBt_WaitingVoice,
    BrainTalkBt_RecoveryHpToPL,
    BrainTalkBt_RecoveryAbToPL,
    Dummy_87,
    Dummy_88,
    Dummy_89,
    Dummy_90,
    Dummy_91,
    Dummy_92,
    Dummy_93,
    Dummy_94,
    Dummy_95,
    Dummy_96,
    Dummy_97,
    Dummy_98,
    Dummy_99,
    BrainTalkBt_LvUp_PL,
    BrainTalkBt_QuestNpcNearbyCanBeOrdered,
    BrainTalkBt_DriveActiveFriend,
    BrainTalkBt_EnableSAS_DriveActivationFriend,
    BrainTalkBt_BattleSim_BattleStart,
    BrainTalkBt_BattleSim_BattleStart_ENPC,
    BrainTalkBt_ReturnToTheAjito,
    BrainTalkBt_GiveItemsFromFriendsWithAjito,
    BrainTalkBt_GiveItemsFromFriendsWithField,
    BrainTalkBt_OsoroiAttachment,
    BrainTalkBt_BattleSim_BattleStart_RevivalBoss,
    Max,
};

