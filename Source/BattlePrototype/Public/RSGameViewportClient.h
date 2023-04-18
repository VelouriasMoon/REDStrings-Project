#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "RSGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    URSGameViewportClient();
};

