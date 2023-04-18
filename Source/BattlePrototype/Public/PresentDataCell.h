#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PresentContainMessageData.h"
#include "PresentDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresentContainMessageData> FirstReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresentContainMessageData> ExperiencedReaction;
    
};

