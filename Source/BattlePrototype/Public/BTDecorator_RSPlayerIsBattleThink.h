#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_RSPlayerBase.h"
#include "EPlayerAIBattleThinkTypeCPP.h"
#include "BTDecorator_RSPlayerIsBattleThink.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTDecorator_RSPlayerIsBattleThink : public UBTDecorator_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkTypeCPP ThinkTypeCPP;
    
public:
    UBTDecorator_RSPlayerIsBattleThink();
};

