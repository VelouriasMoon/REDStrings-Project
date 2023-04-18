#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BattleLogParam.h"
#include "BattleLogBuffer.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBattleLogBuffer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleLogParam> battleLogBufferArray;
    
public:
    UBattleLogBuffer();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistLogBuffer() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBattleLogParam> GetBattleLogBuffer();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void AddBattleLogBuffer(const FBattleLogParam& Param);
    
};

