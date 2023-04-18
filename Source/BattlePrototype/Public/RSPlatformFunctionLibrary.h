#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELocalizedKeyboardType.h"
#include "EPlatFormConsoleType.h"
#include "EPlatFormType.h"
#include "ERegionType.h"
#include "ETextLanguage.h"
#include "RSPlatformFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSPlatformFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSPlatformFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetEnableShareRecording(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentCulture(ETextLanguage textLang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableShareRecording();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCrossButtonDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextLanguage GetSystemVoiceLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextLanguage GetSystemTextLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatFormType GetPlatformType();
    
    UFUNCTION(BlueprintCallable)
    static ERegionType GetPlatformRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatFormConsoleType GetPlatformConsoleType();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalizedPath(ETextLanguage textLang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELocalizedKeyboardType GetLocalizedKeyboardType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDisplayRequestState();
    
    UFUNCTION(BlueprintCallable)
    static void DisplayRequestRelease();
    
    UFUNCTION(BlueprintCallable)
    static void DisplayRequestActive();
    
    UFUNCTION(BlueprintCallable)
    static void ConvertKeyboardNames(const TArray<FName>& oldKeys, ELocalizedKeyboardType oldType, TArray<FName>& newKeys, ELocalizedKeyboardType newType);
    
    UFUNCTION(BlueprintCallable)
    static FName ConvertKeyboardName(const FName oldKey, ELocalizedKeyboardType oldType, ELocalizedKeyboardType newType);
    
};

