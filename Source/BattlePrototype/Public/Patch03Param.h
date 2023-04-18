#pragma once
#include "CoreMinimal.h"
#include "EAttackDirOrtho.h"
#include "EAttackDirOrthoLockon.h"
#include "ECameraDistance.h"
#include "ELetterSize.h"
#include "ESASCutin.h"
#include "Patch03Param.generated.h"

USTRUCT(BlueprintType)
struct FPatch03Param {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackDirOrtho AttackDirOrtho;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackDirOrthoLockon AttackDirOrthoLockon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraDistance CameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESASCutin SASCutin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELetterSize LetterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CameraSpeedLockon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BehindCameraSpeed;
    
public:
};

