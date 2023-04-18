#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "UObject/SoftObjectPath.h"
#include "EventAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UEventAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
    UEventAsset();
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetAsset() const;
    
};

