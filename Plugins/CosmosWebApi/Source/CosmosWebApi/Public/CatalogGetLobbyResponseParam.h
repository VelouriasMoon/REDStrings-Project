#pragma once
#include "CoreMinimal.h"
#include "LobbyInfo.h"
#include "CatalogGetLobbyResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCatalogGetLobbyResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyInfo> lobbyList;
};

