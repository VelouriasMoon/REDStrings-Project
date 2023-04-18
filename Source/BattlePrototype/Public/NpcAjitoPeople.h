#pragma once
#include "CoreMinimal.h"
#include "NpcTownPeople.h"
#include "NpcAjitoPeople.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcAjitoPeople : public ANpcTownPeople {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceID;
    
    ANpcAjitoPeople();
};

