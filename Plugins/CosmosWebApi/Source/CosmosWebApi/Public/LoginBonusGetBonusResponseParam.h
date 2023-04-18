#pragma once
#include "CoreMinimal.h"
#include "GotLoginBonus.h"
#include "LoginBonusGetBonusResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FLoginBonusGetBonusResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString workId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGotLoginBonus> loginBonusList;
};

