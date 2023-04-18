#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "TextData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTextData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefTextTable;
    
public:
    UTextData();
    UFUNCTION(BlueprintCallable)
    bool LoadResource(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetText(FName ID, bool& Founded);
    
};

