#pragma once
#include "CoreMinimal.h"
#include "EMeansOfKillType.h"
#include "ESubQuestRequestType.h"
#include "SubquestRequestRawData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSubquestRequestRawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubQuestRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeansOfKillType MeansOfKill;
    
};

