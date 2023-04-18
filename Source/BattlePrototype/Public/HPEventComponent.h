#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterHPEventInfo.h"
#include "HPEventComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHPEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterHPEventInfo> HpEventInfos;
    
    UHPEventComponent();
    UFUNCTION(BlueprintCallable)
    void CheckHpEvent(AActor* Actor, float preHpRate, float postHpRate);
    
};

