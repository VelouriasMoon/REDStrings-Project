#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattlefieldTutorialInfo.generated.h"

class AMakeEventActor;

USTRUCT(BlueprintType)
struct FBattlefieldTutorialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubGroupID;
};

