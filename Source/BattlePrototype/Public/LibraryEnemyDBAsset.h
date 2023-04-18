#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "LibraryEnemyDBCell.h"
#include "LibraryEnemyDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryEnemyDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLibraryEnemyDBCell> DBMap;
    
    ULibraryEnemyDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

