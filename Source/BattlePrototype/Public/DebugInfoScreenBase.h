#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugInfoScreenData.h"
#include "DebugInfoScreenBase.generated.h"

class UTextBlock;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ADebugInfoScreenBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugInfoScreenData> DataList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RenderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> TextWidgetList;
    
public:
    ADebugInfoScreenBase();
};

