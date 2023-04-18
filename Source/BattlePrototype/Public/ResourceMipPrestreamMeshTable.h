#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ResourceMipPrestreamMesh.h"
#include "ResourceMipPrestreamMeshTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FResourceMipPrestreamMeshTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceMipPrestreamMesh Setting;
    
};

