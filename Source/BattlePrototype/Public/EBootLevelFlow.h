#pragma once
#include "CoreMinimal.h"
#include "EBootLevelFlow.generated.h"

UENUM(BlueprintType)
enum class EBootLevelFlow : uint8 {
    Initialize,
    UpdateSaveDataCheck,
    UpdateSaveDataCheckWait,
    UpdateSaveDataStorageCheck,
    UpdateSaveDataStorageCheckWait,
    UpdateSystemSaveDataCreate,
    UpdateSystemSaveDataCreateWait,
    UpdateSaveDataExist,
    UpdateSaveDataExistWait,
    UpdateSaveDataCreate,
    UpdateSaveDataCreateWait,
    UpdateSystemSaveDataLoadCheck,
    UpdateSystemSaveDataLoadCheckWait,
    UpdateAutoDataLoadCheck,
    UpdateAutoSaveDataLoadCheckWait,
    UpdateSaveDataLoadCheck,
    UpdateSaveDataLoadCheckWait,
    UpdateSaveErrorMessWait,
    UpdateSaveDataDelete,
    UpdateDLCCheck,
    UpdateDLCRightsCheckWait,
    UpdateDLCRightsCheckWait2,
    UpdateDLCCheckWait,
    UpdateDLCCheckWaitNotReceived,
    UpdateDLCCheckWaitDLC,
    UpdateDLCCheckAfterSystemSabeWait,
    FlowFailedSaveLoad,
    FlowSuccess,
};

