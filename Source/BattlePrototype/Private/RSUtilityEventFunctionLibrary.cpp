#include "RSUtilityEventFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UObject;

void URSUtilityEventFunctionLibrary::SetupCutsceneHideDitherSaveShop(UObject* WorldContextObject, float DitherRate) {
}

void URSUtilityEventFunctionLibrary::SetCheckPlMaterialTolerance(float tolelance) {
}

void URSUtilityEventFunctionLibrary::ResetCheckPlMaterialTolerance() {
}

TArray<FName> URSUtilityEventFunctionLibrary::GetTextureNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass) {
    return TArray<FName>();
}

FString URSUtilityEventFunctionLibrary::GetStandbyPhaseFromProgressID(int32 ProgressId) {
    return TEXT("");
}

TArray<FName> URSUtilityEventFunctionLibrary::GetPresetNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass) {
    return TArray<FName>();
}

TArray<FName> URSUtilityEventFunctionLibrary::GetMovieTextureNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass) {
    return TArray<FName>();
}

URSUtilityEventFunctionLibrary::URSUtilityEventFunctionLibrary() {
}

