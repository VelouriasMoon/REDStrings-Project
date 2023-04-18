#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataTableRowTest.h"
#include "DataTableTest.generated.h"

class UDataTable;
class UDataTableExtends;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADataTableTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _datatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowTest> _dataContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTableExtends* _datatableExtends;
    
    ADataTableTest();
    UFUNCTION(BlueprintCallable)
    void InitDataContents();
    
};

