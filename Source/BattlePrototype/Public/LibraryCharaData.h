#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "LibraryCharaData.generated.h"

class UDataTable;
class ULibraryCharaDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryCharaData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryCharaDBAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* openDataM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* openDataF;
    
public:
    ULibraryCharaData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& Path, const FString& openDataPathM, const FString& openDataPathF);
    
};

