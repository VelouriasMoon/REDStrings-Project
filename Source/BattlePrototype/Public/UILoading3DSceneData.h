#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Engine/DataTable.h"
#include "UILoading3DSceneCharacterData.h"
#include "UILoading3DSceneData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUILoading3DSceneData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUILoading3DSceneCharacterData> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CameraOffset;
    
};

