#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SaveTestStruct.h"
#include "SaveIntermediary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASaveIntermediary : public AActor {
    GENERATED_BODY()
public:
    ASaveIntermediary();
    UFUNCTION(BlueprintCallable)
    uint8 TestBuffer(int32 Num, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Save(const FString& SlotName, int32 testInt, float testFloat, FName testName, TArray<int32> testArrayInt, FSaveTestStruct testStruct, TArray<FSaveTestStruct> testArrayStruct);
    
    UFUNCTION(BlueprintCallable)
    void Load(const FString& saveSlotName, int32& testInt, float& testFloat, FName& testName, TArray<int32>& testArrayInt, FSaveTestStruct& testStruct, TArray<FSaveTestStruct>& testArrayStruct);
    
};

