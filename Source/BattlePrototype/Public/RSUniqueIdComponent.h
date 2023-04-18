#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSUniqueIdComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSUniqueIdComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    URSUniqueIdComponent();
    UFUNCTION(BlueprintCallable)
    void SetName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetId(int32 InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetId() const;
    
};

