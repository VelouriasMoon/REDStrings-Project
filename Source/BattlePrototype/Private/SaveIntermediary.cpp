#include "SaveIntermediary.h"

uint8 ASaveIntermediary::TestBuffer(int32 Num, int32 Index) {
    return 0;
}

void ASaveIntermediary::Save(const FString& SlotName, int32 testInt, float testFloat, FName testName, TArray<int32> testArrayInt, FSaveTestStruct testStruct, TArray<FSaveTestStruct> testArrayStruct) {
}

void ASaveIntermediary::Load(const FString& saveSlotName, int32& testInt, float& testFloat, FName& testName, TArray<int32>& testArrayInt, FSaveTestStruct& testStruct, TArray<FSaveTestStruct>& testArrayStruct) {
}

ASaveIntermediary::ASaveIntermediary() {
}

