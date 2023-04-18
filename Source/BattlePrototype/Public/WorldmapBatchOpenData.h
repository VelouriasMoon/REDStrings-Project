#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "WorldmapBatchOpenData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UWorldmapBatchOpenData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefCheckTableM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefCheckTableF;
    
public:
    UWorldmapBatchOpenData();
    UFUNCTION(BlueprintCallable)
    bool UnloadDataTable();
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataTable();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidResource();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMainLocationIDFromSublocationID(int32 subLocationID);
    
};

