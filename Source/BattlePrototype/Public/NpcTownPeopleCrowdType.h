#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NpcTownPeopleCrowdType.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNpcTownPeopleCrowdType : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMeshDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMaterialDataTableID;
    
};

