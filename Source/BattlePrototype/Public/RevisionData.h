#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "RevisionData.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URevisionData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Revision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildDate;
    
public:
    URevisionData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRevisionStr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBuildDateStr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBuildConfigStr() const;
    
};

