#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIMiniSubQuestGoal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMiniSubQuestGoal : public UUIBase {
    GENERATED_BODY()
public:
    UUIMiniSubQuestGoal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSubquestCompActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSubquestActive();
    
};

