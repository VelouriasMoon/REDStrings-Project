#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Animation/AnimInstance.h"
#include "BoneAnimParts.h"
#include "SCAnimInstance.generated.h"

class USCAnimationDataAsset;

UCLASS(Blueprintable, NonTransient)
class SASCABLEANIM_API USCAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> SASCodeSocketWorldLocations_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneAnimParts> boneAnimPartsArray_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float physicsIdlingSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCAnimationDataAsset* animDataAsset_;
    
    USCAnimInstance();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSASCodeSocketWorldLocations(const TMap<FName, FTransform>& locations);
    
    UFUNCTION(BlueprintCallable)
    void SaveToBeforeFrameSocketLocations();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

