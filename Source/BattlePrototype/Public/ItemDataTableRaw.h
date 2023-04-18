#pragma once
#include "CoreMinimal.h"
#include "ItemDataTableTypeRaw.h"
#include "ItemDataTableRaw.generated.h"

USTRUCT(BlueprintType)
struct FItemDataTableRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDataTableTypeRaw> m_dataTable;
    
};

