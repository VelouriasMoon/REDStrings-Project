#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ETextLanguage.h"
#include "MultiLanguageTextData.generated.h"

class UTextData;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMultiLanguageTextData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETextLanguage, UTextData*> textDataMap;
    
public:
    UMultiLanguageTextData();
    UFUNCTION(BlueprintCallable)
    bool LoadTexts();
    
    UFUNCTION(BlueprintCallable)
    FString GetText(ETextLanguage languageID, FName messageID);
    
};

