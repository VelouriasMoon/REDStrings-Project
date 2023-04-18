#pragma once
#include "CoreMinimal.h"
#include "EMeansOfKillType.h"
#include "ESubQuestRequestType.h"
#include "SubquestRequestData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSubquestRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubQuestRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeansOfKillType MeansOfKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecifiedLocation;
    
};

