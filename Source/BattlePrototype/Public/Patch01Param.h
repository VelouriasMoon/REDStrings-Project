#pragma once
#include "CoreMinimal.h"
#include "Patch01Param.generated.h"

USTRUCT(BlueprintType)
struct FPatch01Param {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InformedNewAddContentsNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InformedPurchasedAddContentsNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NotifiedNotAppliedAddContentsNameListAllSlotShare;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InformedPatchBitFlag;
    
public:
};

