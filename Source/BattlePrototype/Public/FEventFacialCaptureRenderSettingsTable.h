#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventFacialCaptureRenderSettings.h"
#include "FEventFacialCaptureRenderSettingsTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FFEventFacialCaptureRenderSettingsTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventFacialCaptureRenderSettings Setting;
    
};

