#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "RSFishSplineBase.generated.h"

class UMaterialInstanceDynamic;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ARSFishSplineBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> FishMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> FishMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OffsetStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OffsetEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TailRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PositionRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHalfUpdate;
    
public:
    ARSFishSplineBase();
    UFUNCTION(BlueprintCallable)
    void UpdatePositionLoopCPP(float Lerp, float Tail, bool bForceUpdateAll);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOffsetCPP(float Lerp);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFishCPP(float Position, int32 FishIndex);
    
    UFUNCTION(BlueprintCallable)
    void RandomiseOffsetsCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineComponent* GetSplineComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyParamBPtoCPP(int32 LoopsPerMinute, float TailSpeed, float FishScale, float RandomiseOffset, int32 NumberOfFish);
    
};

