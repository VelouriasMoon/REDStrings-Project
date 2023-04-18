#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "Templates/SubclassOf.h"
#include "RSClassFinder.generated.h"

class AActor;

UCLASS(Blueprintable)
class URSClassFinder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
public:
    URSClassFinder();
    UFUNCTION(BlueprintCallable)
    static void SetNextAsset(FName ClassName, FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetClass() const;
    
};

