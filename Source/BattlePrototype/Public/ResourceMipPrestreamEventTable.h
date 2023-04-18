#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ResourceMipPrestreamEventTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FResourceMipPrestreamEventTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MeshSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OptionalMeshSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HighPriorityMeshSettingName;
    
};

