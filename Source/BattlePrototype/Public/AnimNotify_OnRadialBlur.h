#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ENotifyRadialBlurModulateType.h"
#include "AnimNotify_OnRadialBlur.generated.h"

class UCurveVector;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class BATTLEPROTOTYPE_API UAnimNotify_OnRadialBlur : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyRadialBlurModulateType ModulateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseExecuteKind;
    
    UAnimNotify_OnRadialBlur();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayBlur(USkeletalMeshComponent* MeshComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCurveVector* GetUseCurveData(USkeletalMeshComponent* MeshComp) const;
    
};

