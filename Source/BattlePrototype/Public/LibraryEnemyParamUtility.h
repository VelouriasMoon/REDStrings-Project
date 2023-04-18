#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELibraryFlagType.h"
#include "LibraryEnemyDataCell.h"
#include "LibraryEnemyParamUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryEnemyParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibraryEnemyParamUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool OpenEnemyLibray(const UObject* WorldContextObject, FName EnemyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLibraryDataFromLibraryID(const UObject* WorldContextObject, FLibraryEnemyDataCell& Data, FName libraryID, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLibraryData(const UObject* WorldContextObject, FLibraryEnemyDataCell& Data, FName EnemyId, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetItemDroppingEnemyList(const UObject* WorldContextObject, FName ItemId, TArray<FName>& outEnemyList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetImageVariationNum(const UObject* WorldContextObject, FName EnemyId, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnemyLibraryUpdateIncKillNum(const UObject* WorldContextObject, FName EnemyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnemyLibraryUpdateGetDropItem(const UObject* WorldContextObject, FName EnemyId, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EnemyLibraryOnFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EnemyLibraryOffFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EnemyLibraryIsOpenLibrary(const UObject* WorldContextObject, FName EnemyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool EnemyLibraryCheckFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
};

