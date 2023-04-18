#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameDifficultyDefine.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UGameDifficultyDefine : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_addMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_difficultyMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultMag;
    
public:
    UGameDifficultyDefine();
    UFUNCTION(BlueprintCallable)
    void SetDefaultMag(float _defaultMag);
    
    UFUNCTION(BlueprintCallable)
    void SetAddMag(float _addMag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultyMag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMag();
    
    UFUNCTION(BlueprintCallable)
    bool DifficultyMagCalc();
    
};

