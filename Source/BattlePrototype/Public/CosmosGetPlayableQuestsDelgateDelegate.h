#pragma once
#include "CoreMinimal.h"
#include "CosmosGetPlayableQuestsDelgateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCosmosGetPlayableQuestsDelgate, const bool, bCommunicationSuccess, const TArray<FString>&, QuestList);

