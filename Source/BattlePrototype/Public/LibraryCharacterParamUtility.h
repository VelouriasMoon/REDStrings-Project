#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELibraryFlagType.h"
#include "LibraryCharacterParamUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryCharacterParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibraryCharacterParamUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool OpenCharacterLibray(const UObject* WorldContextObject, FName libName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CheckLibraryOpenByProgresNo(const UObject* WorldContextObject, int32 ProgressNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CharaLibraryOnFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CharaLibraryOffFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CharaLibraryCheckFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo);
    
};

