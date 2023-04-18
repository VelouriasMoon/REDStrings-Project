#pragma once
#include "CoreMinimal.h"
#include "ArrangeItemParticle.h"
#include "TreasureItem.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ATreasureItem : public AArrangeItemParticle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* skeletalMeshComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInitialize_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isGetThisItem_;
    
public:
    ATreasureItem();
    UFUNCTION(BlueprintCallable)
    void ProcessBeforeGetAnimBegin();
    
    UFUNCTION(BlueprintCallable)
    void ProcessAfterGetAnimFinished();
    
};

