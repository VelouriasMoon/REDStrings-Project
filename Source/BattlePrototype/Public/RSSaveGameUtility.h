#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERSSaveGameSaveType.h"
#include "RSSaveGameUtility.generated.h"

class UObject;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSaveGameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSSaveGameUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SystemSaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SystemLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager, int32 no);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsExistSaveData(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager, ERSSaveGameSaveType Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckStorageSpace(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AutoSaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AutoPreLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AutoLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager);
    
};

