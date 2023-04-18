#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "DebuggingGameActivityManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingGameActivityManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
public:
    ADebuggingGameActivityManager();
    UFUNCTION(BlueprintCallable)
    void SetDisplayFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool IsDisplayFlag();
    
    
    // Fix for true pure virtual functions not being implemented
};

