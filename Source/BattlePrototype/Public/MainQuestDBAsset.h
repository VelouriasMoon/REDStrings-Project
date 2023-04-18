#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "MainQuestDBDataCell.h"
#include "MainQuestDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMainQuestDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMainQuestDBDataCell> DBMap;
    
    UMainQuestDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

