#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CosmosSaveImageBuf.h"
#include "CosmosSaveTest.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCosmosSaveTest : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosSaveImageBuf> ImageData;
    
    UCosmosSaveTest();
    UFUNCTION(BlueprintCallable)
    void AddImageData(TArray<uint8> Data);
    
};

