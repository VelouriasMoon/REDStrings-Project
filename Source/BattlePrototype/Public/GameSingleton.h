#pragma once
#include "CoreMinimal.h"
#include "Math/IntPoint.h"
//-FallbackName=Object
#include "GameSingleton.generated.h"

class UGameSingleton;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class BATTLEPROTOTYPE_API UGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_CurrentResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinimizeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ResolutionChangeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DefaultResolutionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFocus;
    
public:
    UGameSingleton();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameSingleton* GetForBP();
    
};

