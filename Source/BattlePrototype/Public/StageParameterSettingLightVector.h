#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "StageParameterSettingLightVector.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AStageParameterSettingLightVector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UArrowComponent* AmbientLightVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    AStageParameterSettingLightVector();
};

