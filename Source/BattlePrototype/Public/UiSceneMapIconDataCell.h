#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UiSceneMapIconNode.h"
#include "UiSceneMapIconDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUiSceneMapIconDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUiSceneMapIconNode> NodeList;
    
};

