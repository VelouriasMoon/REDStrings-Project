#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ClearGetterData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UClearGetterData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ClearGetterIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefClearGetterTable;
    
public:
    UClearGetterData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataTable(const FString& ClearGetterTablePath);
    
};

