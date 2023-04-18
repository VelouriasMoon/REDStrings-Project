#pragma once
#include "CoreMinimal.h"
#include "CosmosGetQuestAnswersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCosmosGetQuestAnswersDelegate, const bool, bCommunicationSuccess, const FName, QuestName, const TArray<FString>&, Answers);

