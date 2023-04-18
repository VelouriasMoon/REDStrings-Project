#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NpcMaterialColorSetting.h"
#include "NpcMaterialSetting.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNpcMaterialSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNpcMaterialColorSetting Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UMaterialInstance>> MaterialList;
    
};

