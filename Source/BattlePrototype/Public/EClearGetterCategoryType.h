#pragma once
#include "CoreMinimal.h"
#include "EClearGetterCategoryType.generated.h"

UENUM(BlueprintType)
enum class EClearGetterCategoryType : uint8 {
    ePhase9ClearTime,
    eGameStartTotalPlayTime,
    eTotalPlayTime,
    eItemUseCount,
    eBattleSimulatorFirstClear,
    eBattleSimulatorClear,
    eBattleSimulatorMissionClear,
    eBattleSimulatorMissionSRank,
    eBattleSimulatorMissionScore,
    eBattleSimulatorClearSRankCount,
    eBrainCrashCount,
    eDefeatedCountByBrainCrash,
    eJewelPoolDefeatedCountByBrainCrash,
    eDefeatedCountByAssultVision,
    eAssaultVisionCount,
    eDefeatedCountByCombinationVision,
    eCombinationVisionCombo,
    eCombinationVisionDamage,
    eProtectVisionCount,
    eQuestClearCount,
    eGetItem,
    eHaveMoneyMax,
    eBrainFieldCount,
    eDefeatedCountByBrainField,
    ePlayerDriveCount,
    eNpcDriveCount,
    eEnemyDefeatedCount,
    eCharacterHighestLevel,
    eTeamBondsLevel,
    eThrowPsychicObjectCount,
    eTottalExperience,
    eUniquePsychicObjectSuccessCount,
    eNpcReviveCount,
    eCharacterHighestHP,
    eCharacterHighestEsp,
    eCharacterHighestAttack,
    eCharacterHighestDefence,
    eNpcPresentCount,
    eNpcPresentUniqueCount,
    eDefeatedCountByCrashVision,
    eCrashVisionCombo,
    eNexusDriveActivate,
    eNexusDriveActivateSameTime,
    eNexusDriveCount,
    eTotalNexusDriveTime,
    eDLCBonds,
    eAnimeKarenEpisode,
    eClearGetterCount,
    eAnimeKarenEpisode1to3,
    eAnimeKarenEpisode4,
    eAnyGameClear,
    eNum,
};

