#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NpcMeshAssetSetting.h"
#include "NpcMeshSetting.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNpcMeshSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNpcMeshAssetSetting Assets;
    
};

