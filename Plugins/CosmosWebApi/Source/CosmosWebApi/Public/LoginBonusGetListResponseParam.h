#pragma once
#include "CoreMinimal.h"
#include "LoginBonus.h"
#include "LoginBonusGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FLoginBonusGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoginBonus> loginBonusList;
};

