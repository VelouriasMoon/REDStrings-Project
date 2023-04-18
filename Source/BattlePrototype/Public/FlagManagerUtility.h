#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EContentsOpening.h"
#include "EHelpTutorial.h"
#include "ELibraryFlagType.h"
#include "EOperationRestriction.h"
#include "ESystemSaveDataCommonFlag.h"
#include "FlagManagerUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UFlagManagerUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFlagManagerUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SystemSaveDataCommonFlagOn(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SystemSaveDataCommonFlagOff(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SystemSaveDataCommonFlagCheck(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetContentsOpened(const UObject* WorldContextObject, EContentsOpening Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetContentsClosed(const UObject* WorldContextObject, EContentsOpening Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAllContentsOpened(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OperationRestrictionFlagOn(const UObject* WorldContextObject, EOperationRestriction Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OperationRestrictionFlagOff(const UObject* WorldContextObject, EOperationRestriction Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsContentsOpened(const UObject* WorldContextObject, EContentsOpening Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitializeFlagManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HelpGetFlagOn(const UObject* WorldContextObject, EHelpTutorial Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HelpGetFlagOff(const UObject* WorldContextObject, EHelpTutorial Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HelpGetFlagCheck(const UObject* WorldContextObject, EHelpTutorial Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnemyLibraryNewFlagOn(const UObject* WorldContextObject, FName ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckOperationRestrictionFlag(const UObject* WorldContextObject, EOperationRestriction Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CharaLibraryNewFlagOn(const UObject* WorldContextObject, FName ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CharaLibraryNewFlagOff(const UObject* WorldContextObject, ELibraryFlagType Index);
    
};

