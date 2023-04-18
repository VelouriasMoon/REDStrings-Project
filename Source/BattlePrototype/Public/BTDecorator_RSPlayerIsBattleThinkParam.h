#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_RSPlayerBase.h"
#include "EPlayerAIBattleThinkParamCPP.h"
#include "BTDecorator_RSPlayerIsBattleThinkParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTDecorator_RSPlayerIsBattleThinkParam : public UBTDecorator_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkParamCPP ThinkParamCPP;
    
public:
    UBTDecorator_RSPlayerIsBattleThinkParam();
};

