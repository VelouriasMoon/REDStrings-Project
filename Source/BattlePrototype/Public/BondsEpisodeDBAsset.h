#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BondsEpisodeDBDataCell.h"
#include "BondsEpisodeDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBondsEpisodeDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBondsEpisodeDBDataCell> DBMap;
    
    UBondsEpisodeDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

