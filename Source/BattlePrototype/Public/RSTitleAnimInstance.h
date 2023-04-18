#pragma once
#include "CoreMinimal.h"
#include "ETitleAnime.h"
#include "RSCharacterAnimInstance.h"
#include "RSTitleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSTitleAnimInstance : public URSCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleAnime NowAnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleAnime RequestAnimKind;
    
public:
    URSTitleAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetRequestAnimKind(ETitleAnime Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETitleAnime GetNowAnimKind() const;
    
};

