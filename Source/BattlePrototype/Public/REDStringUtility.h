#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERSGamepadInputName.h"
#include "ETextColor.h"
#include "ETextLanguage.h"
#include "REDStringUtility.generated.h"

class UImage;
class UObject;
class UTextBlock;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDStringUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UREDStringUtility();
    UFUNCTION(BlueprintCallable)
    static void SetActionTagSingleBIG_SupportUesKey(UObject* pWorld, UImage* iconImage, const FString& ActionName, ERSGamepadInputName InputName);
    
    UFUNCTION(BlueprintCallable)
    static void SetActionTagSingleBIG(UObject* pWorld, UImage* iconImage, const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    static void SetActionTagSingle(UObject* pWorld, UImage* iconImage, const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceOneCharacter(UPARAM(Ref) FString& String, int32 Index, const FString& To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool isFullCharacter(ETextLanguage Language);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextLanguage IncrementTextLanguageEnum(ETextLanguage oldLanguage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTextLanguageName(ETextLanguage Language);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringWithoutREDTag(UObject* WorldObject, const FString& Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetFontColor(ETextColor TextColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString getDateString(int32 Year, int32 Month, int32 Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextLanguage GetCurrentTextLanguageEnum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextLanguage DecrementTextLanguageEnum(ETextLanguage oldLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void AutoScale(UTextBlock* TextBlock, float Width);
    
};

