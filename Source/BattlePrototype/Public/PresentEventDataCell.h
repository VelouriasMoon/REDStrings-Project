#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PresentContainMessageData.h"
#include "PresentLocationCameraContainData.h"
#include "PresentLocationContainData.h"
#include "PresentEventDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentEventDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresentContainMessageData> FirstReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresentContainMessageData> ExperiencedReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationContainData PlayerLocationAndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationContainData ForCharaLocationAndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationCameraContainData CameraLocationAndYawPitch;
    
};

