#pragma once
#include "CoreMinimal.h"
#include "MsgViewerDispNameAndPath.generated.h"

USTRUCT(BlueprintType)
struct FMsgViewerDispNameAndPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dispName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dataPath;
    
};

