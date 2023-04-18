#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AddContentsPresentInfo.h"
#include "AddContentsPresentList.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAddContentsPresentList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddContentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsPresentInfo> PresentInfos;
    
};

