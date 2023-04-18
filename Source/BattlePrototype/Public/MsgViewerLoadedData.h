#pragma once
#include "CoreMinimal.h"
#include "EMsgViewerDataType.h"
#include "MsgViewerLoadedData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMsgViewerLoadedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMsgViewerDataType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDataTable> RefDataTable;
    
};

