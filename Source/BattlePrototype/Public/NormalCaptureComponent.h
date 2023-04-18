#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NormalCaptureComponent.generated.h"

class UAnimSequence;
class USkeletalMeshComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UNormalCaptureComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TargetTexture;
    
public:
    UNormalCaptureComponent();
    UFUNCTION(BlueprintCallable)
    void WriteBoneDataFromAnim(int32 StartPixelX, int32 CharacterIndex, USkeletalMeshComponent* SkeletalMeshComponent, UAnimSequence* AnimSequence, float AnimTime);
    
    UFUNCTION(BlueprintCallable)
    void WriteBoneData(int32 StartPixelX, int32 CharacterIndex, USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTexture(int32 TextureSizeW, int32 TextureSizeH);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeTexture();
    
};

