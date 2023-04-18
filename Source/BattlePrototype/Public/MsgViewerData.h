#pragma once
#include "CoreMinimal.h"
#include "EMsgViewerDataType.h"
#include "MsgViewerData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMsgViewerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMsgViewerDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dispName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dataPath;
    
};

