#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ASSMNode.generated.h"

class UASSMNode;
class UASStateMachine;

UCLASS(Abstract, Blueprintable, Config=Game)
class ACTIONSYSTEM_API UASSMNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UASSMNode*> LinkedTo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASStateMachine* MachineAsset;
    
public:
    UASSMNode();
};

