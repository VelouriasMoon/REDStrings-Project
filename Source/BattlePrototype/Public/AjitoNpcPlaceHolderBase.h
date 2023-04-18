#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AjitoNpcPlaceHolderBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAjitoNpcPlaceHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlacementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAvailable;
    
    AAjitoNpcPlaceHolderBase();
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Visible);
    
};

