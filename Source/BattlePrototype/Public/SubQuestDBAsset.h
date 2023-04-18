#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "SubQuestDBDataCell.h"
#include "SubQuestDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USubQuestDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSubQuestDBDataCell> DBMap;
    
    USubQuestDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

