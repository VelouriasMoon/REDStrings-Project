#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LibraryHabiatParamRaw.h"
#include "LibraryIntegerParamRaw.h"
#include "LibraryStringParamRaw.h"
#include "LibraryEnemyDBRaw.generated.h"

USTRUCT(BlueprintType)
struct FLibraryEnemyDBRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ELibID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryStringParamRaw DetailMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryIntegerParamRaw ImageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DropItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryHabiatParamRaw Habitat_m;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryHabiatParamRaw Habitat_f;
    
};

