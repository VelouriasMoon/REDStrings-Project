#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "LoadTipsData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULoadTipsData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadingTipsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RetryLoadingTipsDataTable;
    
public:
    ULoadTipsData();
};

