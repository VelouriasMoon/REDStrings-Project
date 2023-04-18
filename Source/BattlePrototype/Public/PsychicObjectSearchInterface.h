#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "PsychicObjectSearchInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UPsychicObjectSearchInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IPsychicObjectSearchInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSearchPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetEffectFocus(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSkipCheckRendered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSearchUnique();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSearchMapGimmick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSearchable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSearchSizeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSearchRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSearchPos();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSearchPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSearchHeight(float& heightMin, float& heightMax);
    
};

