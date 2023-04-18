#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "LibraryEnemyData.generated.h"

class ULibraryEnemyDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryEnemyData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryEnemyDBAsset* Asset;
    
public:
    ULibraryEnemyData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& assetPath);
    
};

