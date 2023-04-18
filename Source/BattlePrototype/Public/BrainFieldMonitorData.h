#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BrainFieldMonitorData.generated.h"

//class UManaTexture;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainFieldMonitorData : public FTableRowBase {
    GENERATED_BODY()
public:
    //Should be UManaTexture from Criware but that class doesn't exist
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Movie;
};

