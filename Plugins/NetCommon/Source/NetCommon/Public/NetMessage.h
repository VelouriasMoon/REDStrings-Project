#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetMessage.generated.h"

class UNetMessage;

UCLASS(Blueprintable)
class NETCOMMON_API UNetMessage : public UObject {
    GENERATED_BODY()
public:
    UNetMessage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToJson();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNetMessage* Set(int32 ID, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DumpHttpHeader(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DumpHttp(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Dump(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetMessage* Create(UObject* WorldContextObject);
    
};

