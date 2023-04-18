#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "Flag.h"
#include "LibraryEnemyDataCell.h"
#include "LibraryEnemyParamData.h"
#include "LibraryEnemyParam.generated.h"

class ULibraryEnemyData;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryEnemyParam : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLibraryEnemyParamData> paramMapM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLibraryEnemyParamData> paramMapF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag libFlagsM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag libFlagsF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* gameInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryEnemyData* DataTable;
    
public:
    ULibraryEnemyParam();
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    bool GetLibraryDataFromLibraryID(FLibraryEnemyDataCell& Data, FName libraryID, bool isPlayerM, int32 ProgressNo, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable)
    bool GetLibraryData(FLibraryEnemyDataCell& Data, FName EnemyId, bool isPlayerM, int32 ProgressNo, bool isDebugOpen);
    
};

