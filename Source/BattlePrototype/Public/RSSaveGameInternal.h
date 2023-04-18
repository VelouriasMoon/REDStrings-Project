#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RSSaveGameInternal.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSaveGameInternal : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> buf;
    
public:
    URSSaveGameInternal();
};

