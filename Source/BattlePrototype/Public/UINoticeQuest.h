#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UINoticeQuest.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINoticeQuest : public UUIBase {
    GENERATED_BODY()
public:
    UUINoticeQuest();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenStartSubQuest(FName questId, float DispTime, bool ManualClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenStartBondsQuest(FName questId, float DispTime, bool ManualClose);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool initializeSubQuestText(FName questId);
    
    UFUNCTION(BlueprintCallable)
    bool initializeBondsQuestText(FName questId);
    
    UFUNCTION(BlueprintCallable)
    FString getSubQuestName(FName questId);
    
    UFUNCTION(BlueprintCallable)
    FString getBondsQuestName(FName questId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseStartSubQuest(FName questId, float DispTime, bool ManualClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseStartBondsQuest(FName questId, float DispTime, bool ManualClose);
    
};

