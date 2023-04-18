#pragma once
#include "CoreMinimal.h"
#include "ManaAudioTrackInfo.h"
#include "ManaEventPointInfo.h"
#include "ManaSource.h"
#include "ManaVideoTrackInfo.h"
#include "ManaMovie.generated.h"

UCLASS(Abstract, Blueprintable)
class UManaMovie : public UManaSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaVideoTrackInfo> VideoTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaAudioTrackInfo> AudioTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaEventPointInfo> EventPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubtitleChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSubtitleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAlpha: 1;
    
public:
    UManaMovie();
};

