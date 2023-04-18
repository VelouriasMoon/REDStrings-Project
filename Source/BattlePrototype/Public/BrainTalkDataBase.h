#pragma once
#include "CoreMinimal.h"
#include "EBTLoadAsyncFlow.h"
#include "BrainTalkDataBase.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FBrainTalkDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CategoryDataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> BrainTalkDataDTList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> MessageDataDTList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAsyncLoadRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTLoadAsyncFlow AsyncLoadFlow;
};

