#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShowDestinationTableDataCell.h"
#include "ShowDestinationActorData.generated.h"

USTRUCT(BlueprintType)
struct FShowDestinationActorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowDestinationTableDataCell desitinationData;
    
};

