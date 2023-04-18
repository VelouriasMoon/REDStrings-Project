#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "DataManaMovie.generated.h"

UCLASS(Blueprintable)
class UDataManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UDataManaMovie();
    UFUNCTION(BlueprintCallable)
    void SetDataArray(TArray<uint8>& InDataArray);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetDataArray();
    
};

