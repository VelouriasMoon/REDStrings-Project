#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSAnimationFunctionLibrary.generated.h"

class AResourceManager;
class UAnimMontage;
class UAnimSequence;
class UAnimationAsset;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSAnimationFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FTransform GetBoneTransformForAnimSequence(const UAnimSequence* AnimSequence, float Time, int32 BoneIndex, bool bUseRawData);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBoneTransformForAnimMontage(const UAnimMontage* AnimMontage, float Time, int32 BoneIndex, bool bUseRawData);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneMoveForAnimSequence(UAnimSequence* AnimSequence, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAnimationAsset* GetAnimSequenceFromPath(UObject* WorldContextObject, const FString& Path, bool Load, AResourceManager* ResourceManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UClass* GetAnimBPGeneratedClassFromPath(UObject* WorldContextObject, const FString& Path, bool Load);
    
};

