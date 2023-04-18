#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSSequencerComponent.generated.h"

class URSSequencerValueBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSSequencerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, URSSequencerValueBase*> MapValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DelList;
    
public:
    URSSequencerComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RegisterSequenceValue(const FString& HashName, URSSequencerValueBase* Value, bool Override);
    
    UFUNCTION(BlueprintCallable)
    URSSequencerValueBase* GetSequenceValue(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DestroySequenceValue(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 ConvertNameToId(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void AllDestroySequenceValue();
    
};

