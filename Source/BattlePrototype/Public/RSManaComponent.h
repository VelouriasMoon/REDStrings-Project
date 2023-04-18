#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=ManaComponent -FallbackName=ManaComponent
#include "RSManaComponent.generated.h"

//Should be a UManaComponent from criware but that class doesn't exist
UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSManaComponent : public UActorComponent { //: public UManaComponent {
    GENERATED_BODY()
public:
    URSManaComponent();
    UFUNCTION(BlueprintCallable)
    void StopMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
};

