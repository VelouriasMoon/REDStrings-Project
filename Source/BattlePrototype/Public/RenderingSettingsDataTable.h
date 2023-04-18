#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RenderingSettings.h"
#include "RenderingSettingsDataTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRenderingSettingsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderingSettings Setting;
    
};

