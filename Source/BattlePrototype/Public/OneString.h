#pragma once
#include "CoreMinimal.h"
#include "OneString.generated.h"

class UImage;
class UTextBlock;

USTRUCT(BlueprintType)
struct FOneString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> m_textBlockArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> m_iconFontArray;
    
public:
};

