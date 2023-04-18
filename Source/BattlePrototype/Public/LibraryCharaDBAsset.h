#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "LibraryCharaDBCell.h"
#include "LibraryCharaDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryCharaDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLibraryCharaDBCell> DBMap;
    
    ULibraryCharaDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

