#include "RSAnimationFunctionLibrary.h"

class AResourceManager;
class UAnimMontage;
class UAnimSequence;
class UAnimationAsset;
class UObject;

FTransform URSAnimationFunctionLibrary::GetBoneTransformForAnimSequence(const UAnimSequence* AnimSequence, float Time, int32 BoneIndex, bool bUseRawData) {
    return FTransform{};
}

FTransform URSAnimationFunctionLibrary::GetBoneTransformForAnimMontage(const UAnimMontage* AnimMontage, float Time, int32 BoneIndex, bool bUseRawData) {
    return FTransform{};
}

FVector URSAnimationFunctionLibrary::GetBoneMoveForAnimSequence(UAnimSequence* AnimSequence, int32 BoneIndex) {
    return FVector{};
}

UAnimationAsset* URSAnimationFunctionLibrary::GetAnimSequenceFromPath(UObject* WorldContextObject, const FString& Path, bool Load, AResourceManager* ResourceManager) {
    return NULL;
}

UClass* URSAnimationFunctionLibrary::GetAnimBPGeneratedClassFromPath(UObject* WorldContextObject, const FString& Path, bool Load) {
    return NULL;
}

URSAnimationFunctionLibrary::URSAnimationFunctionLibrary() {
}

